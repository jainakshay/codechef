/***********************************************************
AIM: https://www.codechef.com/problems/AMR15A	
AUTHOR: AKSHAY JAIN
DATE: 11/10/15
STATUS: INCOMPLETE
SCORE: NA
***********************************************************/
//Code goes here..!!
#include<limits.h>
#include<math.h> 
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() 
{
	long n,i,count1,count2,val;
	count2=0;count1=0;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&val);
		if(val%2==0)
			count2++;
		else
			count1++;
	}
	if(count2>count1)
		printf("READY FOR BATTLE\n");
	else
		printf("NOT READY\n");
	return 0;
}