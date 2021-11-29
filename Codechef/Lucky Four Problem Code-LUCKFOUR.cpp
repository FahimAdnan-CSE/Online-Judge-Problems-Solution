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
  int n,num,i;
  cin>>n;
  while(n--)
  {
      int count1=0;
      cin>>num;
      while(num>0)
      {

          int mod=num%10;
          if(mod==4)
          {
              count1++;
          }
          num=num/10;

      }
      printf("%d\n",count1);

  }



 return 0;
}




