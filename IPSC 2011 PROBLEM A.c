// 1 paper 2 spock 3 scissors 4 lizard 5 rock
#include<string.h>
#include <stdio.h>
int main()
{
    char a[100];
    long long t,flag=5;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%s",a);
        if(strcmp(a,"Spock")==0 && flag!=1)
        {
            flag=1;
            printf("paper\n");
        }
        else if(strcmp(a,"Spock")==0 && flag==1)
        {
            printf("lizard\n");
            flag=4;
        }
        else if(strcmp(a,"rock")==0 && flag==1)
        {
        printf("Spock\n");
        flag=2;
        }
        else if(strcmp(a,"rock")==0 && flag!=1)
        {
            printf("paper\n");
            flag=1;
        }
        else if(strcmp(a,"paper")==0 && flag==4)
        {
        printf("scissors\n");
        flag=3;
        }
        else if(strcmp(a,"paper")==0 && flag!=4)
        {
            printf("lizard\n");
            flag=4;
        }
        else if(strcmp(a,"scissors")==0 && flag!=5)
        {
         printf("rock\n");
         flag=5;
        }
        else if(strcmp(a,"scissors")==0 && flag==5)
        {
         printf("Spock\n");
         flag=2;
        }
        else if(strcmp(a,"lizard")==0 && flag!=5)
        {
         printf("rock\n");
         flag=5;
        }
        else if(strcmp(a,"lizard")==0 && flag==5)
        {
         printf("scissors\n");
         flag=3;
        }
    }
	return 0;
}

