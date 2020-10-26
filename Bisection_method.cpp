#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
    return ((x*x*x)-(9*x)+1);
}

int main()
{
    double x1,x2,f1,f2,x0,f0,m,temp=0;

cout<<"enter the two initial values: "<<endl;
cin>>x1>>x2;
f1=f(x1);
f2=f(x2);

if(f1*f2>0)
     cout<<"no roots between the initial values:"<<endl;
else
{
    temp=abs(x2-x1);
   // cout<<temp<<endl<<endl;
    while(temp>0.01)

    {
        x0=(x1+x2)/2.0;
        f0=f(x0);

        if((f0*f1)<0)
        {
            x2=x0;
          //  f2=f0;
            cout<<x2<<endl;
        }
        else
        {
            x1=x0;
           // f1=f0;
            cout<<x1<<endl;
        }

        if(x1>x2)
        temp=x1-x2;
        else
        temp=x2-x1;
//cout<<temp<<endl;

    }
}

x0=(x2+x1)/2.0;
cout<<endl<<" the approximate root is: "<<x0<<endl;
}
