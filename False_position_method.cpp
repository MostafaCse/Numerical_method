#include<bits/stdc++.h>
using namespace std;
#define E 0.01

double f(double x)
{
    return ((x*x*x)+x-1);
}
int main()
{
    double x1,x2,f1,f2,x0,f0,temp;

    cout<<"enter the two initials values:"<<endl;
    cin>>x1>>x2;
int a=15;

//if(x1>x2)
    //temp=x1-x2;
//else
   // temp=x2-x1;



    // while(temp>E)
    while(a--)
    {
        f1=f(x1);
        f2=f(x2);
   x0=((x1*f2)-(x2*f1))/(f2-f1);
   f0=f(x0);
    if(f0*f1<0)
    {
        x2=x0;
      //  f2=f0;
        cout<<x2<<endl;
    }
    else
    {
        x1=x0;
      //  f1=f0;
        cout<<x1<<endl;
    }
   // if(x1>x2)
     //   temp=x1-x2;
   // else
   //     temp=x2-x1;

    }

    return 0;
}
