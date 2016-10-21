#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long t,i,j,n,k,score,max,pos,count,type[10];
    bool tie;
    scanf("%ld",&t);
    while(t--)
    {
        tie=false;
        max=-1;
        scanf("%ld",&n);
        for(i=1;i<=n;i++)
        {
            memset(type,0,sizeof(type));
            count=0;
            scanf("%ld",&score);
            for(j=0;j<score;j++)
            {
                scanf("%ld",&k);
                type[k-1]++;
            }
            sort(type,type+6);
            if(type[0]!=0)
            {
                score+=(4*type[0]);
                for(j=1;j<6;j++)
                type[j]-=type[0];
                type[0]=0;
            }
            if(type[1]!=0)
            {
                score+=(2*type[1]);
                for(j=2;j<6;j++)
                type[j]-=type[1];
                type[1]=0;
            }
            if(type[2]!=0)
            {
                score+=(1*type[2]);
                for(j=3;j<6;j++)
                type[j]-=type[2];
                type[2]=0;
            }
            if(score==max)
            tie=true;
            
            else if(score>max)
            {
             tie=false;
             max=score;
             pos=i;
            }
            //cout<<score<<endl;
        }
        if(tie==true)
        cout<<"tie\n";
        else if(pos==1)
        cout<<"chef\n";
        else
        cout<<pos<<endl;
    }
  
	return 0;
}