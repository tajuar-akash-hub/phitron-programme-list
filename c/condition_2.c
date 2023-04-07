#include<stdio.h>
int main()
{
    int taka;
    scanf("%d",&taka);
    if(taka>=5000)
    {
        printf("cox bazar jabo\n ");
        if(taka>=10000)
        {
            printf("saint martin jabo\n");
        }
        else {
            printf("ferto jabo");
        }
        
    }
    else {
        printf("kothaw jabona");
    }
    return 0;
}