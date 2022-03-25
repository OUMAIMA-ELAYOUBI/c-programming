#include <stdio.h>
int main()
{
    
    int z;
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("%d  %d",x,y);
}
