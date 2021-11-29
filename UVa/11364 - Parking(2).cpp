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
int m,n,a;

cin>>num;

while(num--)
{

    int k;
    cin>>k;
    int ar[1000];

    for(i=0;i<k;i++)
    {
        cin>>ar[i];
    }

    sort(ar,ar+k);
  /*  for(i=0;i<k;i++)
    {
        cout<<ar[i]<<endl;
    } */

long long int m;


    cout<<abs(ar[k-1]-ar[0])*2<<endl;



}




 return 0;
}




