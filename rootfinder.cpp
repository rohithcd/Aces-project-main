#include <iostream>
#include <cmath>
using namespace std;

int main()
{
cout << "\t\t\tRoots of Quadratic Equation" << endl;
cout << "\t\t\t===========================" << endl;

double a, b, c, result1, result2;
cout << "Equation is of form > ax^2 + bx + c = 0" << endl;
cout << "Enter a > " << flush;
cin >> a;
cout << "Enter b > " << flush;
cin >> b;
cout << "Enter c > " << flush;
cin >> c;

result1 = (-b+sqrt((b*b) - 4*a*c))/2*a;
result2 = (-b-sqrt((b*b) - 4*a*c))/2*a;

cout << "Root 1 > " << result1 << endl;
cout << "Root 2 > "<< result2 << endl;

return 0;
}
