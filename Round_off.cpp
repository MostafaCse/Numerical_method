#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[10];
    cin>>a;
    int b,si,in=0,len=0;
    b=strlen(a);
    cout<<"enter the significant digits: "<<endl;
    cin>>si;

    for(int i=0; i<si; i++)
    {
        if(a[i]=='.')
            in=1;
    }
    si+=in;
   len=a[si]-48;

   if(len>5)
    a[si-1]++;
  // cout<<a[si-1];

   if(len==5)
   {
       int z=a[si-1]-48;
      if(z%2!=0)
      a[si-1]++;
   }
   for(int i=0; i<si; i++)
    cout<<a[i];

}
