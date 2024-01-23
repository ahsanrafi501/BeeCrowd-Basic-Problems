#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,x,y,z;
    cin>>a>>b>>c;
    if(b+c>a && a+b>c && a+c>b)
    {
        y=a+b+c;
        cout<<"Perimetro = "<<fixed<<setprecision(1)<<y<<endl;
    }
    else
    {
        z=((a + b)* c)/2;
        cout<<"Area = "<<setprecision(1)<<fixed<<z<<endl;
    }
    return 0;
}
