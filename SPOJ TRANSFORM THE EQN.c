#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<stack>
using namespace std;
int main() 
{
 stack<char>s3;    
 stack <char> s1;
 stack <char> s2;
 int t,i,l,k;
 char a[500];
 scanf("%d",&t);
 while(t--)
 {
     k=0;
     scanf("%s",a);
     for(i=0;i<strlen(a);i++)
     {
        if(a[i]!='(' && a[i]!=')' && a[i]!='-' && a[i]!='+' && a[i]!='/'&& a[i]!='*'&& a[i]!='^')
        {
            s1.push(a[i]);
            k++;
        }
        else if(a[i]!='(' && a[i]!=')')
        s2.push(a[i]);
        else if(a[i]==')')
        {
        k++;
        s1.push(s2.top());
        s2.pop();
        }
     }
     
     l=k;
     while(k--)
     {
        s3.push(s1.top());
        s1.pop();
     }
     while(l--)
     {
     printf("%c",s3.top());
     s3.pop();
     }
     printf("\n");
 }
	return 0;
}
 