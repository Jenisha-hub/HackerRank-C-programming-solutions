#include <stdio.h>
int main()
{
    int n,m;
    float a,b;
    scanf("%d %d",&n,&m);
    scanf("%f %f",&a,&b);
    int sum1,difference1;
    sum1=n+m;
    difference1=n-m;
    printf("%d %d\n",sum1,difference1);
    float sum2,difference2;
    sum2=a+b;
    difference2=a-b;
    printf("%.1f %.1f",sum2,difference2);
}
