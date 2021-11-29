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
      cin>>num;
      if(num==2010||num==2015||num==2016||num==2017||num==2019)
      {
          printf("HOSTED\n");
      }
      else
        printf("NOT HOSTED\n");
  }



 return 0;
}




