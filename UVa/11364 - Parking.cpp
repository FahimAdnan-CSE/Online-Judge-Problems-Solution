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
  int n,num,i,t;

  cin>>t;

  while(t--)
  {
      cin>>num;
      int a[1000];

      for(i=0;i<num;i++)
      {
          cin>>a[i];

      }
      int max1=0;
      int low=a[0];
      for(i=0;i<num;i++)
      {
            if(max1<a[i])
            {
                max1=a[i];
            }
            else if(low>a[i])
            {
                low=a[i];
            }

      }
      printf("%d\n",(max1-low)*2);
  }



 return 0;
}




