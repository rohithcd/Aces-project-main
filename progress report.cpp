#include <iostream>
using namespace std;

int main()
{

cout << "\t\t\tPROGRESS REPORT" << endl;
cout << "\t\t\t===============" << endl;

double a, b, c, d, e, sum, result;
cout << "Enter Your Marks (Max 50 marks in each subject)" << endl;

cout << "Marks in Mechanics > " << flush;
cin >> a;
cout << "Marks in Calculus > " << flush;
cin >> b;
cout << "Marks in Basic Mechanics > " << flush;
cin >> c;
cout << "Marks in Civil > " << flush;
cin >> d;
cout << "Marks in Physics > " << flush;
cin >> e;

sum = a+b+c+d+e;
result = (sum*100)/250;

cout << result << " %"<< endl;

if(result >= 75)
{
	cout << "Congratulations!! You got First Class with distinction" << endl;
}

if( result >=60 && result < 75)
{
	cout << "Good!! You got First class" << endl;
}

if (result >=50 && result < 59)
{
	cout << " You got second class" << endl;
}

if(result <50)
{
	cout << " Sorry !! You are failed" << endl;
}


return 0;
}
