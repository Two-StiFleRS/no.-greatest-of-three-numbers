#include <stdio.h>
//largest of the three numbers
int main()
{
    int a,b,c;
    printf("enter the numbers a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("%d is the greatest element",a);

        if(a<c)
        printf("%d is the greatest element",a);

    }
    else if(b>a)
    {
        if(b>c)
        printf("%d is the greatest element",b);

        if(c>b)
        printf("%d is the greatest element",c);
    }
    return 0;
}
