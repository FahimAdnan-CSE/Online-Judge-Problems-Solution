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

int vecsum(vector <int> vet,int m)
{
    int l,sum=0;
    for(l=0;l<vet.size();l++)
    {
       sum=sum+vet[l];
    }
    return sum;
}




int main()
{
    int i,j,k,n;
    cin>>n;
    vector <int> vc(n);
    for(i=0;i<vc.size();i++)
    {
       cin>> vc[i];
    }
    k=vecsum(vc,n);


    printf("%d\n",k);


}








/*
int arsum(int b[1001],int m)
{
    int j,sum=0;

    for(j=0;j<m;j++)
  {
      sum=sum+b[j];
  }
  return sum;


}






int main()
{
  int n,num,i,a[1001],l;
  cin>> n;

  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  l=arsum(a,n);


  printf("%d\n",l);

 return 0;
}
*/



