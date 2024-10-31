#include <iostream>
#include <cmath>
using namespace std;

int main() {
 double speed, time, distance;
 cout << "Calculate speed, time and distance" << endl;
 cout << "Enter speed (km/h):";
 cin >> speed;
 cout << "Enter time (h): ";
 cin >> time;

 distance = speed * time;
 cout << "Distance: " << distance << " km" << endl;

 cout << "\nCalculation of the quadratic equation ax^2 + bx + c = 0" << endl;
 double a, b, c, discriminant, x1, x2;

 cout << "Enter coefficients a, b and c: ";
 cin >> a >> b >> c;

 if (a == 0) {
 cout << "Coefficient a must not be zero" << endl;
 } else {
 discriminant = b * b - 4 * a * c;

 if (discriminant > 0) {
 x1 = (-b + sqrt(discriminant)) / (2 * a);
 x2 = (-b - sqrt(discriminant)) / (2 * a);
 cout << "Roots: x1 = " << x1 << ", x2 = " << x2 << endl;
 } else if (discriminant == 0) {
 x1 = -b / (2 * a);
 cout << "One root: x = " << x1 << endl;
 } else {
 cout << "There are no roots. Discriminant < 0." << endl;
 }
 }

 return 0;
}
