#include <stdio.h> 
int main() 
{
    long long int n;
    scanf("%lld",&n);
    if(n>1000)
    {
        printf("I will buy Punjabi\n");
        if((n-1000)>=500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");

        }
        
    }
    else {
        printf("Bad luck!\n");
    }
}