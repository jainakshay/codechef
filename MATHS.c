#include <stdio.h>
int express(int a,int b,char c)
{
    switch(c)
    {
        case '*':
        return a*b;
        case '+':
        return a+b;
        case '-':
        return a-b;
    }
}
int main()
{
    char s[50];
    int stack[50],top,res,i,c,t;
    scanf("%d",&t);
    while(t--)
    {   top=-1;
        scanf("%s",s);
        for(i=strlen(s)-1;i>=0;i--)
        {
            c=s[i];
            c=c-48;
            if(c>=0 && c<=9)
            {   top++;
                stack[top]=c;
            }
        }
        top=0;
        for(i=strlen(s)-1;i>=0;i--)
        {
            if(s[i]=='*'||s[i]=='-'||s[i]=='+')
            {
                res=express(stack[top],stack[top+1],s[i]);
                top++;
                stack[top]=res;
            }

        }
        printf("%d\n",res);
    }
	return 0;
}

