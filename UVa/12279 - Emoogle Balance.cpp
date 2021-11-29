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

int num,i;
int m,n,a=0;

   while(1){
  cin>>n;

   if(n==0) break;
   int c1=0,c2=0;
   for(i=0;i<n;i++)
   {

       cin>>m;

       if (m>0)
       {
           c1++;
       }
       if(m==0)
       {
           c2++;
       }
   }a++;
  printf("Case %d: ",a);
   cout<<c1-c2<<endl;



   }



 return 0;
}





