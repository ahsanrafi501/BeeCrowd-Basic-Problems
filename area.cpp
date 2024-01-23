#include<bits/stdc++.h>
using namespace std;
int main()
{
    float A,B,C;
    float pi=3.14159;
    cin>>A>>B>>C;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<((1.0/2.0)*(A*C))<<"\n"<<"CIRCULO: "<<pi*(C*C)<<"\n"<<"TRAPEZIO: "<<fixed<<setprecision(3)<<((1.0/2.0)*(A+B)*C)<<"\n"<<fixed<<setprecision(3)<<"QUADRADO: "<<(B*B)<<"\n"<<"RETANGULO: "<<fixed<<setprecision(3)<<(A*B)<<endl;
    return 0;
}
