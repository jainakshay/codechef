#include <stdio.h>
int main()
{
	char a[5][5],k;
    int t,i,j,l,countt,countx,counto,flag;
    scanf("%d",&t);
    for(l=1;l<=t;l++)
    {   scanf("%c",&k);
        flag=0;
       for(i=0;i<4;i++)
       {
           for(j=0;j<4;j++)
           scanf("%c",&a[i][j]);
           scanf("%c",&k);
       }
        //............................................................
        //row checking
        for(i=0;i<4;i++)
        {   countx=0;
            counto=0;
            countt=0;
            for(j=0;j<4;j++)
            {
                if(a[i][j]=='T')
                countt++;
                else if(a[i][j]=='X')
                countx++;
                else if(a[i][j]=='O')
                counto++;
              ///  printf("%c %d,%d:\n",a[i][j],i,j);
            }
            //printf("\n");
            //printf("%d %d %d\n",countx,counto,countt);
            if((countx==3 && countt==1)||(countx==4))
            { printf("Case #%d: X won\n",l);flag=1; break;}
            if((counto==3 && countt==1)||(counto==4))
            {printf("Case #%d: O won\n",l);flag=1;break;}
        }
        //column checking
        if(flag==0)
        {
        for(j=0;j<4;j++)
        {   countx=0;
            counto=0;
            countt=0;
            for(i=0;i<4;i++)
            {
                if(a[i][j]=='T')
                countt++;
                else if(a[i][j]=='X')
                countx++;
                else if(a[i][j]=='O')
                counto++;
            }
            if((countx==3 && countt==1)||(countx==4))
            { printf("Case #%d: X won\n",l);flag=1; break;}
            if((counto==3 && countt==1)||(counto==4))
            {printf("Case #%d: O won\n",l);flag=1;break;}
        }
        }
        //diagonal checking
       if(flag==0)
       {  countt=0;countx=0;counto=0;
        for(i=3;i>=0;i--)
        {
            if(a[3-i][i]=='T')
            countt++;
            else if(a[3-i][i]=='X')
            countx++;
            else if(a[3-i][i]=='O')
            counto++;
        }
            if((countx==3 && countt==1)||(countx==4))
            { printf("Case #%d: X won\n",l);flag=1;}
            if((counto==3 && countt==1)||(counto==4))
            {printf("Case #%d: O won\n",l);flag=1;}
       }
        if(flag==0)
        {
            countt=0;countx=0;counto=0;
        for(i=0;i<4;i++)
        {
            if(a[i][i]=='T')
            countt++;
            else if(a[i][i]=='X')
            countx++;
            else if(a[i][i]=='O')
            counto++;
        }
           //  printf("%d %d %d\n",countx,counto,countt);
             if((countx==3 && countt==1)||(countx==4))
            { printf("Case #%d: X won\n",l);flag=1; }
            if((counto==3 && countt==1)||(counto==4))
            {printf("Case #%d: O won\n",l);flag=1;}

       }
       if(flag==0)
       {
           for(i=0;i<4;i++)
           {
               for(j=0;j<4;j++)
               {
                if(a[i][j]=='.')
                {printf("Case #%d: Game has not completed\n",l);flag=1; break;}
               }
               if(flag==1)
               break;
           }
       }
       if(flag==0)
       printf("Case #%d: Draw\n",l);
       //................................................................................................*/
    }
	return 0;
}

