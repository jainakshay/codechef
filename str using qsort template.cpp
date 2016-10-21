/***********************************************************
AIM: SORT STR USING QSORT STL
AUTHOR: AKSHAY JAIN
DATE: 07/10/15
STATUS: AC 
SCORE:NA
***********************************************************/
//Code goes here..!!
#include<stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<stack>
using namespace std;
struct point
{
    int x,y;
};
int compare(const void*a,const void*b)
{
    int y1 = ((const struct point*)a)->y;
    int y2 = ((const struct point*)b)->y;

    if(y1>y2)
    return 1;
    else if(y1<y2)
    return -1;
    else 
    return 0;
}
int main() 
{
    struct point p[10];
    int i,n;
    n=5;
    for(i=0;i<n;i++)
    cin>>p[i].x>>p[i].y;
    qsort(p,n,sizeof(point),compare);
    for(i=0;i<n;i++)
    cout<<p[i].x<<" "<<p[i].y<<endl;
	return 0;
}

/* 
to use sort function in algorihtm.h use the compare function as defined below:
bool compare(point a, point b)
{
    if(a.x<=b.x)    ascending sort
    return true;
    else
    return false;
}
*/