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

bool my(int a,int b)
{
    return (a>b);
}


int main()
{
  int n,num,i,temp=0;
  int count1=0;
  cin>>n;
  int ar[n];
  arloop
  {
      cin>>ar[i];
         if(temp<ar[i]) temp=ar[i];

  }
  //sort(ar,ar+n,my);
  //printf("%d",ar[0]);
  arloop
  {
     if(temp==ar[i])
     {
         count1++;
     }

  }
  printf("%d\n",count1);



 return 0;
}




