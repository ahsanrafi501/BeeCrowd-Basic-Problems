#include<stdio.h>
int main()
{

    int x,y;
    float snack;
    scanf("%d %d",&x,&y);
    float arr[5]={4.00,4.50,5.00,2.00,1.50};
    snack=arr[x-1]*y;
    printf("Total: R$ %.2lf\n",snack);


    return 0;
}
