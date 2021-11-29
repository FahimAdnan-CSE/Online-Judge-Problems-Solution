/**------------------------------------------------*/
//Problem Setter:
//Problem No    :
//Problem Name  :
//Type          :
//Author        : Fahim Shahriar Adnan
//University    : City University
//E-mail        : fahimadnan5@gmail.com
/**--------------------------------------------**/

                                       /**  Bismillahir Rahmanir Rahim  **/
#include<bits/stdc++.h>
#define arloop   for(i=0;i<n;i++)
#define caseloop for(i=1;i<=num;i++)
#define eof      while(cin>>n)
#define pf       printf
#define sc       scanf
using namespace std;


int main()
{
  int n,num,i,j,k;
  cin>>n;

  while(n--)
  {
      cin>>num;
      int b=1,t=0,u=0;
      for(i=0;i<=num;i++)
      {
          int p=num;
           int temp=b,f=0,m=t,u=p;
           for(j=m;j<p;j++)
          {
              printf("%d ",temp);
              f=temp;
              temp=temp+1;

              temp=temp+j;

          }
          p=0;
          t=0;
          b=f-num;
          t=t+1;
          p=p+1;


           printf("\n");



      }

  }




 return 0;
}




