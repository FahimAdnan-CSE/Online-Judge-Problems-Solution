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
  long long int n,num,i;


  while(1)
  {
      cin>>n;
      long long int sum=1;
      if(n<0) break;


      for(i=1;i<=n;i++)
      {
          sum=sum+i;
      }
      cout<<sum<<endl;


  }



 return 0;
}




