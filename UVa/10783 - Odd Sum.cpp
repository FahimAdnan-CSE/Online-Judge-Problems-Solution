#include <iostream>
using namespace std;

int main()
{
    int n,num1,num2,i,j,sum=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>num1>>num2;
        for(j=num1;j<=num2;j++)
        {
            if(j%2==1)
            {
                sum=sum+j;
            }
        }

        cout<<"Case "<<i+1<< ": "<<sum<<"\n";
        sum=0;
    }

}
