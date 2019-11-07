#include <iostream>
using namespace std;

int main(){
double a ;
cout << " \t\t\tELECTRICTY BILL" << endl;
cout << " \t\t\t===============" << endl;
cout << " Consumption Unit = ";
cin >> a;
cout << " Amount = ";

if ( a <= 200 ){
cout  << a*0.5 << endl;
}

if ( a >= 201 && a <= 400 ){
cout << a*0.65+100 << endl;
}

if ( a >= 401 && a <= 600 ){
cout << a*0.8+230 << endl;
}

if ( a > 600 ){
cout << a*1+390 << endl;
}

return 0;
}
