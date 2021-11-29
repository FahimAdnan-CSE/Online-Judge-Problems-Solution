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
      int team=((((((num*567)/9)+7492)*235)/47)-498);

      /* char s[100];
       itoa(team,s,10);
       int r=strlen(s);
       printf("%c\n",s[r-2]); */
       int l=abs(team);
       int mod;
       for(i=0;i<2;i++)
       {
           mod=l%10;
           l=l/10;

       }
       printf("%d\n",mod);




  }



 return 0;
}




