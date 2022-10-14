#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float xCoordinateFirstPoint, yCoordinateFirstPoint, xCoordinateSecondPoint, yCoordinateSecondPoint,
    xCoordinateThirdPoint, yCoordinateThirdPoint;
    cin >> xCoordinateFirstPoint >> yCoordinateFirstPoint >> xCoordinateSecondPoint >> yCoordinateSecondPoint
    >> xCoordinateThirdPoint >> yCoordinateThirdPoint;
    float distanceFromPointToLine = fabs((xCoordinateSecondPoint - xCoordinateFirstPoint) *
            (yCoordinateFirstPoint - yCoordinateThirdPoint) - (xCoordinateFirstPoint - xCoordinateThirdPoint) *
            (yCoordinateSecondPoint - yCoordinateFirstPoint)) / sqrt((pow((xCoordinateSecondPoint -
            xCoordinateFirstPoint),2))+ pow((yCoordinateSecondPoint - yCoordinateFirstPoint),2));
    float xCoordinateOfCrossing = ((xCoordinateFirstPoint - xCoordinateSecondPoint) *
            (xCoordinateFirstPoint - xCoordinateSecondPoint) * xCoordinateThirdPoint +
            (xCoordinateSecondPoint - xCoordinateFirstPoint) * (yCoordinateSecondPoint - yCoordinateFirstPoint) *
            yCoordinateThirdPoint - (yCoordinateFirstPoint * xCoordinateSecondPoint - xCoordinateFirstPoint *
            yCoordinateSecondPoint) * (yCoordinateSecondPoint - yCoordinateFirstPoint)) / ((yCoordinateSecondPoint -
            yCoordinateFirstPoint) * (yCoordinateSecondPoint - yCoordinateFirstPoint) + (xCoordinateSecondPoint -
            xCoordinateFirstPoint) * (xCoordinateSecondPoint - xCoordinateFirstPoint));
    float yCoordinateOfCrossing;
    if (yCoordinateSecondPoint != yCoordinateFirstPoint) {
        yCoordinateOfCrossing = ((xCoordinateFirstPoint - xCoordinateSecondPoint) * xCoordinateOfCrossing +
        (yCoordinateSecondPoint - yCoordinateFirstPoint) * yCoordinateThirdPoint +
        (xCoordinateSecondPoint - xCoordinateFirstPoint) * xCoordinateThirdPoint) /
        (yCoordinateSecondPoint - yCoordinateFirstPoint);
    } else {
        yCoordinateOfCrossing = yCoordinateFirstPoint;
    }
    cout << distanceFromPointToLine << " " << xCoordinateOfCrossing << " " << yCoordinateOfCrossing;
    return 0;
}