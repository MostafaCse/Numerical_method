#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
    return ((x*x*x)-(6*x)+4);
}
int main()
{
   int a,b,x;
   cout<<"enter the upper limited: "<<endl;
   cin>>b;
     cout<<"enter the lower limited: "<<endl;
   cin>>a;
   cout<<"enter the size of incremental: "<<endl;
   cin>>x;

   for(int i=a; i<=b-x; i+=x)
   {
       double x1,x2;
       double f1=0,f2=0,f0=0,x0=0;
       x1=i;
       x2=i+x;
    f1=f(x1);
    f2=f(x2);

    if((f1*f2)>0)
        cout<<"there is no root between "<<i<<" and "<<i+x<<endl;
   // cout<<f1<<" "<<f2<<endl;
   else
   {
       while(abs(x2-x1)>0.01)
       {
           x0=(x1+x2)/2;
           f0=f(x0);
           if(f0*f1<0)
            x2=x0;
           else
            x1=x0;
       }
     cout<<"the root is "<<(x1+x2)/2<<" between "<<i<<" "<<i+x<<endl;
   }
    i++;
   }
   return 0;
}

