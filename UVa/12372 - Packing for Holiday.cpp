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
  int l,w,h;
  while(n--)
  {
      i++;
      cin>>l>>w>>h;
      if(l<=20&&w<=20&&h<=20)
      {

          printf("Case %d: good\n",i);

      }
      else
      {
           printf("Case %d: bad\n",i);
      }


  }



 return 0;
}




