
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n=";
    cin>>n;
    cout<<endl;
   int k=n-1;
    for(int i=1;i<=n;i++)
    {
    
    int x=1;
        for(int j=1;j<=k;j++)
        {
            cout<<" ";
        }

        k--;

        for(int j=1;j<=2*i-1;j++)
        {
            cout<<x++;
        }

        cout<<endl;
    }

    k=1;
    for(int i=1;i<=n-1;i++)
    {
        int x=1;
        for(int j=1;j<=k;j++)
        cout<<" ";

        k++;
        
        for(int j=1;j<=2*(n-i)-1;j++)
            cout<<x++;
        cout<<endl;
    }
    return 0;
}