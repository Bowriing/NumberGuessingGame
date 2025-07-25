#include <iostream>

int main1() {
    using namespace std;
    const double dPi = 3.141592653589793;
    double dRadius = 0;
    double dArea = 0;

    //Take input from console of radius of circle
    cout << "Please enter radius of circle :D" << endl;
    cin >> dRadius;

    //Calculate the area from the radius
    dArea = dPi * (dRadius * dRadius);
    cout << "The area of the circle is " << dArea << endl;

    return 0;
}
