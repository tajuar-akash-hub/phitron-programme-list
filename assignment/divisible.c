#include <stdio.h> 
int main() 
{
    long long int n;
    scanf("%lld",&n);
    if(n%3==0)
    {
        printf("YES");
    }
    if(n%3!=0)
    {
        printf("NO");
    }
}