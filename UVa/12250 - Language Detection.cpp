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
  int n,num,i=0;

  char s[100];

  while(true)
  {
      cin>>s;
      i++;

       if(strcmp(s,"#")==0) return 0;
 printf("Case %d: ",i);
       if(strcmp(s,"HELLO")==0) printf("ENGLISH\n");
       else if (strcmp(s,"HOLA")==0) printf("SPANISH\n");
       else if (strcmp(s,"HALLO")==0) printf("GERMAN\n");
       else if (strcmp(s,"HALLO")==0) printf("GERMAN\n");
       else if (strcmp(s,"BONJOUR")==0) printf("FRENCH\n");
       else if (strcmp(s,"CIAO")==0) printf("ITALIAN\n");
       else if (strcmp(s,"ZDRAVSTVUJTE")==0) printf("RUSSIAN\n");
       else printf("UNKNOWN\n");



  }



 return 0;
}




