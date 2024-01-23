#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,l,m;
    int a,b,c;
    cin>>i>>j>>l>>m;
    if(i==l && j==m)
    {
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }
    else if(j>m)
    {
         l--;
         a=m+60;
         b=a-j;
         c=l-i;
         if(c<0)
         {
             c+=24;
              cout<<"O JOGO DUROU "<<c<<" HORA(S) E "<<b<<" MINUTO(S)"<<endl;
         }
         else
         {
              cout<<"O JOGO DUROU "<<c<<" HORA(S) E "<<b<<" MINUTO(S)"<<endl;
         }
    }
    else
    {
        a=m-j;
        b=l-i;
         if(b<0)
         {
             b+=24;
             cout<<"O JOGO DUROU "<<b<<" HORA(S) E "<<a<<" MINUTO(S)"<<endl;
         }
          else
         {
              cout<<"O JOGO DUROU "<<b<<" HORA(S) E "<<a<<" MINUTO(S)"<<endl;
         }
    }




    return 0;
}
