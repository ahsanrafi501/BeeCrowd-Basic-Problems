#include<stdio.h>
int main()
{
    int amount,a,i;
    int note[7]={100,50,20,10,5,2,1};
    scanf("%d",&amount);
    printf("%d\n",amount);
    for(i=0;i<7;i++)
    {
        a=amount/note[i];
        amount=amount%note[i];
        printf("%d nota(s) de R$ %d,00\n",a,note[i]);

    }

    return 0;
}
