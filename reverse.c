#include <stdio.h>
void main()
{
    int a,b=0,c,d;
    scanf("%d",&a);
    d=a;
    while(a!=0)
    {
        b=b*10;
        b=b+a%10;
        a=a/10;
    }
    printf("original number is:%d\n",d);
    printf("reverse of a number is:%d\n",b);

    c=d+b;
    printf("addition :%d\n",c);
    printf("%d ",printf("%d ",printf("hello")));

    if(printf("bharadwaj"))
    {

    }
    
}