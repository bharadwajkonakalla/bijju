#include <stdio.h>
void main()
{
    int i=0;
    label1:
    i++;
    printf("%d ",i);
    if(i!=10)
    goto label1;
    

}