#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    float b,c;
    cin>>a>>b>>c;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<(((15*c)/100)+b)<<endl;
    return 0;
}
