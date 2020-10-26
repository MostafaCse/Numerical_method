#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,x;
cout<<"enter the dimension"<<endl;
cin>>n;
int a[n],p[n];

for(int i=n; i>=0; i--)
{
    cin>>a[i];
}
cout<<"enter the roots"<<endl;
cin>>x;
p[n]=a[n];
cout<<p[n]<<endl;
for(int i=n-1; i>=0; i--)
{
    p[i]=p[i+1]*x+a[i];
    cout<<p[i]<<endl;
}
cout<<"value"<<p[0]<<endl;
return 0;
}
