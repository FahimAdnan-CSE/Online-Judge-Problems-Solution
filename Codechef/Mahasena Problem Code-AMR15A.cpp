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
  int n,num,i,odd=0,even=0;
  cin>>n;
  for(i=0;i<n;i++)
  {
      cin>>num;
      if(num%2==0)
      {
          even++;
      }
      else
      {
          odd++;
      }
  }
  if(even<=odd)
  {
      printf("NOT READY\n");
  }
  else
  {
      printf("READY FOR BATTLE\n");
  }



 return 0;
}




