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
  int n,num,i,l,h,m,s;
  string p;
  scanf("%d:%d:%d",&h,&m,&s);
  cin>>p;

   if(p=="PM"&&h!=12)
   {
       h=h+12;

   }
   if(p=="AM"&&h==12)

   {   h=0;

   }
   printf("%02d:%02d:%02d\n",h,m,s);


 return 0;
}




