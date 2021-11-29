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

       int hun=num/100;
       int hunmod=num%100;
       int fift=hunmod/50;
       int fiftmod=hunmod%50;
       int ten=fiftmod/10;
       int tenmod=fiftmod%10;
       int five=tenmod/5;
       int fivemod=tenmod%5;
       int two=fivemod/2;
       int twomod=fivemod%2;
       int one=twomod/1;
       printf("%d\n",(hun+fift+ten+five+two+one));

  }


 return 0;
}




