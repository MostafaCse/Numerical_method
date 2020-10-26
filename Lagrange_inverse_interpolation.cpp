#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"how many values: "<<endl;
    int n;
    cin>>n;

    double x[n],y[n];

    cout<<"enter the "<<n<<" x: "<<endl;
    for(int i=0; i<n; i++)
        cin>>x[i];

     cout<<"enter the "<<n<<" f(x): "<<endl;
    for(int i=0; i<n; i++)
        cin>>y[i];

     /*   for(int i=0; i<n; i++)
            cout<<x[i]<<" "<<y[i]<<endl;
*/
        cout<<"enter the f(x) to find x: "<<endl;
        double f1,t[n-1],fin=0;
        cin>>f1;

        for(int i=0; i<n; i++)
        {
            double sum=1,s=1;
            for(int j=0; j<n; j++)
            {
                if(i!=j)
                sum*=(f1-y[j]);
            }
            for(int j=0; j<n; j++)
            {
                if(i!=j)
                s*=(y[i]-y[j]);
            }
       t[i]=(sum*x[i])/s;

        }
        for(int i=0; i<n; i++)
            cout<<t[i]<<endl;

        for(int i=0; i<n; i++)
        {
           fin+=t[i];
        }
        cout<<"final value is: ";
    cout<<fin<<endl;
}
