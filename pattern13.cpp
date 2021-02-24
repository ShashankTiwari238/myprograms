
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n=";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        int x=1;
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<x++;
        }
        cout<<endl;
    }
    return 0;
}