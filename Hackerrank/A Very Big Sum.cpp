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


 long long int bigsum(vector <long long int> f, long long int t)
 {
     long long int i;
     long long int res=0;
     for(i=0;i<t;i++)
   {
       res=res+f[i];
   }
   return res;
 }


int main()
{
  long long int num,i;


   long long int sum,n;
   cin>>n;
   vector <long long int> vc(n);
   for(i=0;i<n;i++)
   {
       cin>>vc[i];
   }
   sum=bigsum(vc,n);
  cout<<sum<<endl;



 return 0;
}




