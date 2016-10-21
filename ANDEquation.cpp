/***********************************************************
AIM:https://arena.topcoder.com/#/u/practiceCode/15191/26460/12029/2/313351
AUTHOR: AKSHAY JAIN
DATE: 19/01/2016
STATUS: AC
SCORE: 132.5/250
***********************************************************/
//Code goes here..!!
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class ANDEquation
{
 public:
    int i,j,y;
     int restoreY(vector <int> A)
         {
         bool val=false;
         for(i=1;i<A.size();i++)
             {
             y=A[0];
             for(j=0;j<A.size();j++)
                 {
                 if(j!=i)
                  y=y&A[j];   
                 }
             if(y==A[i])
                 {
                 val=true;
                 return A[i];
                 }
             }
         if(val==false)
             {
             y=A[1];
             for(i=1;i<A.size();i++)
                 y=y&A[i];
             if(y==A[0])
                 {
                 return A[0];
                 }
             else
                 return -1;
             }
         return 0;
         }
};