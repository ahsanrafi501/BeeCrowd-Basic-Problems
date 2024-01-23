#include<iostream>
using namespace std;
int printInOrder(int a,int b, int c)
{
    int min,mid,max;
    if(a<b && a<c)
    {
        min=a;
        if(b<c)
        {
            mid=b;
            max=c;
        }
        else
        {
            mid=c;
            max=b;
        }
    }
    else if(b<a && b<c)
    {
        min=b;
        if(a<c)
        {
            mid=a;
            max=c;
        }
        else
        {
            mid=c;
            max=a;
        }
    }
    else
    {
        min=c;
        if(a<b)
        {
            mid=a;
            max=b;
        }
        else
        {
            mid=b;
            max=a;
        }
    }
    cout<<min<<endl<<mid<<endl<<max<<endl;
}
int main()
{

    int x,y,z;
    cin>>x>>y>>z;
    printInOrder(x,y,z);
    cout<<"\n"<<x<<endl<<y<<endl<<z<<endl;


    return 0;
}
