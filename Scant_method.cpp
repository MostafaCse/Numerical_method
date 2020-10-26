#include<bits/stdc++.h>
using namespace std;
#define E 0.01

double f(double x)
{
    return ((x*x*x)-(5*x*x)-29);
}

int main()
{
    double x1,x2,x3,f1,f2;
    cout<<"enter the two inital values: "<<endl;
    cin>>x1>>x2;
    f1=f(x1);
    f2=f(x2);
    //int a=10;
    //while(a--)

    while((abs(x2-x1))>E)
    {
        x3=((f2*x1)-(f1*x2))/(f2-f1);
        x1=x2;
        f1=f2;
        x2=x3;
        f2=f(x3);
        cout<<x3<<" "<<endl;
    }
    return 0;
}
