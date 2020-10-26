#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cout<<"how many numbers: ";
cin>>n;

int x[n],y[n];

cout<<"enter the "<<n<<" x: ";
for(int i=0; i<n; i++)
    cin>>x[i];

cout<<"enter the "<<n<<" y: ";
for(int i=0; i<n; i++)
 cin>>y[i];
 cout<<endl;

double y1[n-1],y2[n-2],y3[n-3],y4[n-4];

for(int i=0; i<n-1; i++)
    y1[i]=(y[i+1]-y[i])/(x[i+1]-x[i]);

for(int i=0; i<n-2; i++)
    y2[i]=(y1[i+1]-y1[i])/(x[i+2]-x[i]);

for(int i=0; i<n-3; i++)
    y3[i]=(y2[i+1]-y2[i])/(x[i+3]-x[i]);

for(int i=0; i<n-4; i++)
    y4[i]=(y3[i+1]-y3[i])/(x[i+4]-x[i]);

cout<<"the difference is: "<<endl;
for(int i=0; i<n-1; i++)
    cout<<y1[i]<<" ";
cout<<endl;

for(int i=0; i<n-2; i++)
    cout<<y2[i]<<" ";
cout<<endl;

    for(int i=0; i<n-3; i++)
    cout<<y3[i]<<" ";
cout<<endl;

for(int i=0; i<n-4; i++)
    cout<<y4[i]<<" ";
cout<<endl;

double f,fin;

cout<<endl<<"enter the x to find corresponding f(x): ";
cin>>f;

fin=y[0]+((f-x[0])*y1[0])+((f-x[0])*(f-x[1])*y2[0])+((f-x[0])*(f-x[1])*(f-x[2])*y3[0])+((f-x[0])*(f-x[1])*(f-x[2])*(f-x[3])*y4[0]);
cout<<"The f(x) is: "<<fin<<endl;

return 0;
}
