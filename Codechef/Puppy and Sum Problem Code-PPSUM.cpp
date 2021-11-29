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
 int test,n,num,i;


  cin>>test;
while(test--)
  {
      int  sum=0,temp;
      cin>>num>>n;
      temp=n;

         int hamp;
        for(i=1;i<=num;i++)
          {
            hamp=(temp*(temp+1))/2;
            temp=hamp;
          }
          printf("%d\n",hamp);

}

 return 0;
}















































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
                                     /*
#include<bits/stdc++.h>
#define arloop   for(i=0;i<n;i++)
#define caseloop for(i=1;i<=num;i++)
#define eof      while(cin>>n)
#define pf       printf
#define sc       scanf
using namespace std;
int count1=1;
int rec(int d,int suming)
{   int i,sum=0;
    if(d==1)
        return suming;
    else
    {
        for(i=1;i<=suming;i++)
     {
      sum=sum+i;
      }
      count1++;
      if(count1==d)
        {return sum;}
        suming=sum;
        return rec(d,suming);

    }

}


int main()
{
  int test,n,num,i;


  cin>>test;
while(test--)
  {  int  sum=0;
      cin>>num>>n;
      for(i=1;i<=n;i++)
  {
      sum=sum+i;
  }
  int l=rec(num,sum);
  printf("%d\n",l);

  }


 return 0;
}

*/


