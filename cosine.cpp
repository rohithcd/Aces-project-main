#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
    int i, n;
    float x, sum=1, t=1;
    
     
    cout<<" Enter the value for x : ";
    cin>>x;
     
    cout<<" Enter the value for n : ";
    cin>>n;
     
    x=x*3.14159/180;
     
    /* Loop to calculate the value of Cosine */
    for(i=1;i<=n;i++)
    {
        t=t*(-1)*x*x/(2*i*(2*i-1));
        sum=sum+t;
        

    }
     
    cout<<" The value of Cos("<<x<<") = "<<setprecision(4)<<sum;
    cout << "Thanku" << endl;
    return 0;
}
