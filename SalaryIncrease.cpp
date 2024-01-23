#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    cin>>a;
    if(a>=0 && a<=400)
    {
        b=a*0.15;
        c=b+a;
        d=c-a;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<c<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<d<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if(a>=400.01 && a<=800)
    {
        b=a*0.12;
        c=b+a;
        d=c-a;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<c<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<d<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
   else if(a>=800.01 && a<=1200)
    {
        b=a*0.10;
        c=b+a;
        d=c-a;
        cout<<"Novo salario: "<<setprecision(2)<<fixed<<c<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<d<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
   else if(a>=1200.01 && a<=2000)
    {
        b=a*0.07;
        c=b+a;
        d=c-a;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<c<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<d<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
   else
    {
        b=a*0.04;
        c=b+a;
        d=c-a;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<c<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<d<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }


    return 0;
}
