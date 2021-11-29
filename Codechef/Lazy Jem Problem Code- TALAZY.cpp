#include <bits/stdc++.h>

using namespace std;


int main(){


   int testcase;

    cin>>testcase;

    while(testcase--)
    {
        int n,b,m;
        int left;
        int result=0;
        int let=0;

        cin>>n>>b>>m;

            if(n%2==0)
        {
            //int temp=n/2;
            let=(n/2);
            m=1*m;
            result=result+(let*m);

        }
        else if(n%2==1)
        {
            //int temp=(n+1)/2;
            let=(n+1)/2;
            m=1*m;
            result=result+(let*m);



        }

             if (let>0)
             {
                  for(;;){


            if(n%2==0)
        {
            //int temp=n/2;
           let=let+(n/2);
            m=m*2;
            result=result+b+(let*m);

        }
        else if(n%2==1)
        {
            //int temp=(n+1)/2;
            let=let+(n+1)/2;
            m=m*2;
            result=result+b+(let*m);



        }
         if(n<=0)
        {
            break;
        }

             }




        }
        cout<<result<<endl;


    }






}
