#include <stdio.h>
int main ()
{
    int d,y,a;
    printf("Enter the current year:");
    scanf("%d",&y);

    printf("Enter your age:");
    scanf("%d",&a);
      d=y-a;
    printf("Your Year Of Birth:%d",d);
    return 0;
}