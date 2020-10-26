#include<bits/stdc++.h>
using namespace std;

int main()
{
    int values;
    cout<<"how many values: "<<endl;
    cin>>values;
    double x[values],y[values];

    cout<<"enter "<<values<<" x: "<<endl;
    for(int i=0; i<values; i++)
        cin>>x[i];

        cout<<"enter "<<values<<" y or f(x): "<<endl;
    for(int i=0; i<values; i++)
        cin>>y[i];

double y1[values-1],y2[values-2],y3[values-3],y4[values-4];

for(int i=0; i<values-1; i++)
{
    y1[i]=y[i+1]-y[i];
}

for(int i=0; i<values-2; i++)
{
    y2[i]=y1[i+1]-y1[i];
}
for(int i=0; i<values-3; i++)
{
    y3[i]=y2[i+1]-y2[i];
}
for(int i=0; i<values-4; i++)
{
    y4[i]=y3[i+1]-y3[i];
}
cout<<"the difference table is: "<<endl;
for(int i=0; i<values-1; i++)
cout<<y1[i]<<" ";
cout<<endl;
for(int i=0; i<values-2; i++)
   cout<<y2[i]<<" ";
cout<<endl;
for(int i=0; i<values-3; i++)
   cout<<y3[i]<<" ";
cout<<endl;
for(int i=0; i<values-4; i++)
   cout<<y4[i]<<" ";
cout<<endl;

return 0;

}
