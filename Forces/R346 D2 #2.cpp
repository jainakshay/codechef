#include<bits/stdc++.h>
using namespace std;
struct s{
  char name[100];
  long r;
  long score;
};
bool compare_r(struct s a, struct s b)
{
    return(b.r>a.r);
}
bool compare_s(struct s a, struct s b)
{
    return(a.score>b.score);
}
int main() 
{
   long n,m,i,j;
   struct s arr[100001];
   bool flag;
   cin>>n>>m;
   for(i=0;i<n;i++)
   cin>>arr[i].name>>arr[i].r>>arr[i].score;
   sort(arr,arr+n,compare_r);
   for(i=0;i<n-1;i++)
   {
       j=i;
       flag=false;
       while(arr[j].r==arr[j+1].r)
       j++;
       sort(arr+i,arr+j+1,compare_s);
       if(j-i+1 >2)
       {
         if(arr[i+1].score==arr[i+2].score)
         flag=true;
       }
       if(flag==false)
       cout<<arr[i].name<<" "<<arr[i+1].name<<endl;
       else
       cout<<"?\n";
       i=j;
   }
	return 0;
}
 