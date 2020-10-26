#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,x;
   cout<<"enter the dimension: "<<endl;
   cin>>n;
   cout<<"enter the roots: "<<endl;
   cin>>x;
   int a[n],p[n];
   cout<<"enter the "<<n+1<<" cofficent"<<endl;
    for(int i=n; i>=0; i--)
    {
        cin>>a[i];
    }
    p[n]=0;
    cout<<"the cofficents are :"<<endl;
    for(int i=n-1; i>=0; i--)
    {
        p[i]=a[i+1]+x*p[i+1];
    }
    for(int i=n-1; i>=0; i--)
    {
        cout<<p[i]<<"x^"<<i;
        if(i==0)
            cout<<endl;
        else
            cout<<"+";
    }
  return 0;
}
