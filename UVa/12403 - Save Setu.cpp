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
  int n,num=0,i;
  int temp=0;
  cin>>n;
  while(n--)
  {
      string s;

      cin>>s;
      if(s[0]!='r')
      {
          cin>>num;
          temp=temp+num;
      }
      else if(s[0]=='r')
      {
          cout<<temp<<endl;
      }








  }



 return 0;
}




