#include<stdio.h>
int main()
{
    int a,b,c,d;

    printf("Enter a four numbers:");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>b && a>c && a>d)
    {
        printf("%d is a greatest number",a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("%d is a greatest number",b);
    }
    else if(c>a && c>b && c>d)
    {
        printf("%d is a greatest number",c);
    }
    else if(d>a && d>b && d>c)
    {
        printf("%d is a greatest number",d);
    }
    else
    {
        printf("All are equal");
    }
}
