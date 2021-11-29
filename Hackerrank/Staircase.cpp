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
  int n,num,i,j,t,sp;
  cin>>n;
    sp=n;
  for(i=0;i<n;i++)
  {
     sp--;
     for(t=sp;t>0;t--)
     {
         printf(" ");
     }

      for(j=0;j<i+1;j++)

      {
          printf("#");
      }
      printf("\n");
  }



 return 0;
}




