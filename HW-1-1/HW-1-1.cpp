#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float xCoordinateFirstPointLine, yCoordinateFirstPointLine, xCoordinateSecondPointLine, yCoordinateSecondPointLine,
            xCoordinatePointOutOfLine, yCoordinatePointOutOfLine;

    cin >> xCoordinateFirstPointLine >> yCoordinateFirstPointLine >> xCoordinateSecondPointLine >>
        yCoordinateSecondPointLine >> xCoordinatePointOutOfLine >> yCoordinatePointOutOfLine;

    double distanceFromPointToLine = fabs((xCoordinateSecondPointLine - xCoordinateFirstPointLine) *
                                          (yCoordinateFirstPointLine - yCoordinatePointOutOfLine) -
                                          (xCoordinateFirstPointLine - xCoordinatePointOutOfLine) *
                                          (yCoordinateSecondPointLine - yCoordinateFirstPointLine)) /
                                     sqrt((pow((xCoordinateSecondPointLine -
                                                xCoordinateFirstPointLine), 2)) +
                                          pow((yCoordinateSecondPointLine - yCoordinateFirstPointLine), 2));

    float xCoordinateOfCrossing = ((xCoordinateFirstPointLine - xCoordinateSecondPointLine) *
                                   (xCoordinateFirstPointLine - xCoordinateSecondPointLine) *
                                   xCoordinatePointOutOfLine +
                                   (xCoordinateSecondPointLine - xCoordinateFirstPointLine) *
                                   (yCoordinateSecondPointLine - yCoordinateFirstPointLine) *
                                   yCoordinatePointOutOfLine -
                                   (yCoordinateFirstPointLine * xCoordinateSecondPointLine - xCoordinateFirstPointLine *
                                                                                             yCoordinateSecondPointLine) *
                                   (yCoordinateSecondPointLine - yCoordinateFirstPointLine)) /
                                  ((yCoordinateSecondPointLine -
                                    yCoordinateFirstPointLine) *
                                   (yCoordinateSecondPointLine - yCoordinateFirstPointLine) +
                                   (xCoordinateSecondPointLine -
                                    xCoordinateFirstPointLine) *
                                   (xCoordinateSecondPointLine - xCoordinateFirstPointLine));

    float yCoordinateOfCrossing;

    if (yCoordinateSecondPointLine != yCoordinateFirstPointLine) {
        yCoordinateOfCrossing = ((xCoordinateFirstPointLine - xCoordinateSecondPointLine) * xCoordinateOfCrossing +
                                 (yCoordinateSecondPointLine - yCoordinateFirstPointLine) * yCoordinatePointOutOfLine +
                                 (xCoordinateSecondPointLine - xCoordinateFirstPointLine) * xCoordinatePointOutOfLine) /
                                (yCoordinateSecondPointLine - yCoordinateFirstPointLine);
    } else {
        yCoordinateOfCrossing = yCoordinateFirstPointLine;
    }

    cout << distanceFromPointToLine << " " << xCoordinateOfCrossing << " " << yCoordinateOfCrossing;

    return 0;
}
