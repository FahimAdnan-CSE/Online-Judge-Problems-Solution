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
  int n,num,i,c1=0,c2=0,c3=0;
  cin>>n;
  vector <int>vc(n);
  arloop{

     cin>>vc[i];
  }
  arloop{

     if(vc[i]<0) c2++;
     else if(vc[i]>0)c1++;
     else c3++;
  }
  printf("%f\n%f\n%f\n",(float)c1/n,(float)c2/n,(float)c3/n);



 return 0;
}




