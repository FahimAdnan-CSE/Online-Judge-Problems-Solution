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
int k=0,t=0;

void bign(vector <int> a,vector <int> b)
{
    int l,num=0;


    for(l=0;l<3;l++)
  {
      if(a[l]<b[l])  k++;
      if (a[l]>b[l]) t++;

  }



}


int main()
{
  int n,num=0,i=0,sum,l1,l2,l,e,g;

  vector<int> a,b;

  for(l=0;l<3;l++)
  {
      cin>>l1;
      a.push_back(l1);


  }
   for(g=0;g<3;g++)
  {
      cin>>l2;
      b.push_back(l2);

  }
  bign(a,b);



      printf("%d %d\n",k,t);



 /* int a,b,c;
  cin>>a>>b>>c;
  if(a<b)
  {
      i++;
  }
  else if(a>b)
  {
      k++;
  }
  else
    num=0;
    sum=i+k;
  cout<<sum<<endl;

*/

 return 0;
}




