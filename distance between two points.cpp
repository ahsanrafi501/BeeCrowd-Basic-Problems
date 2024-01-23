#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    double x1,y1,x2,y2;
    cin>>fixed>>setprecision(1)>>x1>>y1>>x2>>y2;
    cout<<fixed<<setprecision(4)<<sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)))<<endl;
    return 0;
}
