#include <stdio.h>
#include<math.h>
int main()
{   float tc,tm,dist;
    int n,t,xe,ye,x[2020],y[2020],i,j,flag;
    char ch,d[2020];
    scanf("%d",&t);
    while(t--)
    {   flag=1;
        tc=0;
        tm=10001.00;
        scanf("%d %d %c",&xe,&ye,&ch);
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d %d %c",&x[i],&y[i],&d[i]);
        if(ch=='R' || ch=='L')
        {
            for(i=0;i<n;i++)
            {
                if((abs(y[i]-ye)==abs(x[i]-xe)) && (d[i]=='U' || d[i]=='D'))
                {
                if((ch=='R' && d[i]=='U' && y[i]<ye && x[i]>xe)||
                   (ch=='R' && d[i]=='D' && y[i]>ye && x[i]>xe)||
                   (ch=='L' && d[i]=='U' && y[i]<ye && x[i]<xe)||
                   (ch=='L' && d[i]=='D' && y[i]>ye && x[i]<xe))
                {  flag=0;
                    dist=abs(y[i]-ye);
                    tc=dist;
                    tm=tc<tm?tc:tm;
                }
                }
                else if(ye-y[i]==0 && (d[i]=='R'||d[i]=='L'))
                {
                    if((ch=='L' && d[i]=='R' && xe>x[i])||
                       (ch=='R' && d[i]=='L' && x[i]>xe))
                    {   flag=0;
                        dist=(xe-x[i])/2.0;
                        if(dist<0.00)
                        dist=-1*dist;
                        tc=dist;
                        tm=tc<tm?tc:tm;
                    }
                }
            }
        }
        else
        {
             for(i=0;i<n;i++)
            {
                if((abs(y[i]-ye)==abs(x[i]-xe)) && (d[i]=='L' || d[i]=='R'))
                {
                if((ch=='U' && d[i]=='R' && y[i]>ye && x[i]<xe)||
                   (ch=='U' && d[i]=='L' && y[i]>ye && x[i]>xe)||
                   (ch=='D' && d[i]=='R' && y[i]<ye && x[i]<xe)||
                   (ch=='D' && d[i]=='L' && y[i]<ye && x[i]>xe))
                {  flag=0;
                    dist=abs(y[i]-ye);
                    tc=dist;
                    tm=tc<tm?tc:tm;
                }
                }
                else if(xe-x[i]==0 && (d[i]=='U' || d[i]=='D'))
                {
                    if((ch=='U' && d[i]=='D' && ye<y[i])||
                        (ch=='D' && d[i]=='U' && ye>y[i]))
                    {   flag=0;
                        dist=(ye-y[i])/2.0;
                        if(dist<0.00)
                        dist=-1*dist;
                        tc=dist;
                        tm=tc<tm?tc:tm;
                    }
                }
            }
        }
        if(flag==1)
        printf("SAFE\n");
        else
        printf("%.1f\n",tm);
    }
	return 0;
}

