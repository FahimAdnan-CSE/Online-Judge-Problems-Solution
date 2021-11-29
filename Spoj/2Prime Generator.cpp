#include <bits/stdc++.h>

using namespace std;

int main()
{

    int input;
    cin>>input;

    while(input--)
    {
        int start,ends;
        cin>>start>>ends;
        if(start==1)
        {
            start=2;
        }


        for(int i=start;i<=ends;i++)
        {
           int flag=0;

           for(int j=2;j<=i/2;j++)
           {
               if(i%j==0)
               {
                   flag=1;
                   break;
               }

           }

           if(flag==0)
           {

               cout<<i<<endl;
           }


        }



    }









}
