#include <iostream>
using namespace std;

int main()
{
cout << "\t\t\tCalculator" << endl;
cout << "\t\t\t==========" << endl;

double a, b;
char opr;

cout << "Enter two numbers > " << flush;
cin >> a >> b ;

cout << "Operation to be done > " << flush;
cin >> opr;

switch(opr)
{
case '+':
cout << "a+b= " << a+b << endl;
break;

case '-':
cout << "a-b= " << a-b << endl;
break;

case '*':
cout << "a*b= " << a*b << endl;
break;

case '/':
cout << "a/b= " << a/b << endl;
break;

default:
cout << "Error Occured" << endl;
}

return 0;
}
