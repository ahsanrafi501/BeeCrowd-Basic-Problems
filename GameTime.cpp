#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int ctr;
    cin>>i>>j;
    if(i<j)
    {
        ctr=j-i;
        cout<<"O JOGO DUROU "<<ctr<<" HORA(S)"<<endl;
    }
    else
    {
        ctr=(24-i)+j;
        cout<<"O JOGO DUROU "<<ctr<<" HORA(S)"<<endl;
    }

    return 0;
}
