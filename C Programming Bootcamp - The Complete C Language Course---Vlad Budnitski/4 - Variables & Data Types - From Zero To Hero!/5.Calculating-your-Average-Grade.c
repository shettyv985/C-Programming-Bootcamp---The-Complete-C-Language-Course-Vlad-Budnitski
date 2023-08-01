#include <stdio.h>
int main ()
{
    int a,b,c;
    double avg=0;
    printf("Enter the marks of A:");
    scanf("%d",&a);
    printf("Enter the marks of B:");
    scanf("%d",&b);
    printf("Enter the marks of C:");
    scanf("%d",&c);
    
    avg = (a+(double)b+c)/3;
    printf("Average:%lf",avg);
return 0;
}