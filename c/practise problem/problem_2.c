#include <stdio.h> 
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    int minus=a-b;
    int mul=a*b;
    float divi=a/b;
    printf("%d+%d=%d\n",a,b,sum);
    printf("%d-%d=%d\n",a,b,minus);
    printf("%d*%d=%d\n",a,b,mul);
    printf("%d/%d=%0.2f\n",a,b,divi);
    

}