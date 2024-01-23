#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s;
    cin>>a>>b>>s;
    int maiorAB=(a+b+abs(a-b))/2;
    if(maiorAB>s){
        cout<<maiorAB<<" eh o maior"<<endl;
    }
    else{
        cout<<s<<" eh o maior"<<endl;
    }
    return 0;
}
\
