#include<stdio.h>
int main()
{


    double n1,n2,n3,n4,x,y,z;
    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);
    x=((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);
    printf("Media: %.1lf\n",x);
    if(x>7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(x<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&y);
        printf("Nota do exame: %.1lf\n",y);
        z=(x+y)/2;
        if(z>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",z);
    }




    return 0;
}
