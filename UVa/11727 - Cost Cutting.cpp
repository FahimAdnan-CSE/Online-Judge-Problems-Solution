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
  int n,num,i=0;
  cin>>n;
  int a,b,c;

  while(n--)
  {

      i++;
      cin>>a>>b>>c;
      if(a>b&&a>c)
      {
          if(c<b&&c<a)
          {
              printf("Case %d: %d\n",i,b);
          }
          else
          {
              printf("Case %d: %d\n",i,c);
          }

      }
      else if(b>a&&b>c)
      {
          if(a<b&&a<c)
          {
              printf("Case %d: %d\n",i,c);
          }
          else
          {
              printf("Case %d: %d\n",i,a);
          }


      }
      else if (c>a&&c>b)
      {
          if(a<b&&a<c)
          {
              printf("Case %d: %d\n",i,b);
          }
          else
          {
              printf("Case %d: %d\n",i,a);
          }

      }





  }



 return 0;
}




