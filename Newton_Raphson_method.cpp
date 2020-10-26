#include<bits/stdc++.h>
using namespace std;
#define E 0.01

double f1(double x)
{
    return ((x*x*x*x)-(12*x)+7);
}
double f2(double x)
{
    return ((4*x*x*x)-12);
}
int main()
{
    double x1,x0,f11,f22;
    cout<<"frist approximate: "<<endl;
    cin>>x0;
    f11=f1(x0);
    f22=f2(x0);
    x1=x0-(f11/f22);
    while(abs(x1-x0)>0.01)
    {

        x0=x1;
        cout<<x0<<endl;
        f11=f1(x0);
        f22=f2(x0);
        x1=x0-(f11/f22);
    }

    //cout<<x0;
}
