#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

struct Stop {
    string name;
    vector<string> buses;
};

class BusSystem {
private:
    map<string, vector<string>> buses;
    map<string, Stop> stops;

public:
    void addBusRoute(const string& bus, const vector<string>& stops) {
        buses[bus] = stops;
        for (const string& stop : stops) {
            this->stops[stop].buses.push_back(bus);
        }
    }

    void busesForStop(const string& stop) {
        if (stops.count(stop) == 0) {
            cout << "No stop" << endl;
            return;
        }

        if (stops[stop].buses.empty()) {
            cout << "No buses" << endl;
            return;
        }

        for (const string& bus : stops[stop].buses) {
            cout << bus << " ";
        }
        cout << endl;
    }

    void stopsForBus(const string& bus) {
        if (buses.count(bus) == 0) {
            cout << "No bus" << endl;
            return;
        }

        for (const string& stop : buses[bus]) {
            cout << "Stop " << stop << ": ";

            if (stops[stop].buses.size() == 1) {
                cout << "no interchange";
            } else {
                for (const string& otherBus : stops[stop].buses) {
                    if (otherBus != bus) {
                        cout << otherBus << " ";
                    }
                }
            }

            cout << endl;
        }
    }

    void allBuses() {
        if (buses.empty()) {
            cout << "No buses" << endl;
            return;
        }

        for (const auto& [bus, stops] : buses) {
            cout << "Bus " << bus << ": ";
            for (const string& stop : stops) {
                cout << stop << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int q;
    cin >> q;

    BusSystem busSystem;

    for (int i = 0; i < q; ++i) {
        string command;
        cin >> command;

        if (command == "NEW_BUS") {
            string bus;
            int stopCount;
            cin >> bus >> stopCount;

            vector<string> stops(stopCount);
            for (string& stop : stops) {
                cin >> stop;
            }
            busSystem.addBusRoute(bus, stops);
        } else if (command == "BUSES_FOR_STOP") {
            string stop;
            cin >> stop;
            busSystem.busesForStop(stop);
        } else if (command == "STOPS_FOR_BUS") {
            string bus;
            cin >> bus;
            busSystem.stopsForBus(bus);
        } else if (command == "ALL_BUSES") {
            busSystem.allBuses();
        }
    }

    return 0;
}
