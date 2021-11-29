#include <stdio.h>

int main()
{

    int num,a,b,i;
    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        if(a>b)
        {
            printf(">\n");
        }
        if(a<b)
        {
            printf("<\n");
        }
        else if(a==b)
        {
            printf("=\n");
        }

    }



}
