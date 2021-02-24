
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n=";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        int j;
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        
        for(int j=i;j<2*n-1-i;j++)
        {
            cout<<"*";
        }
            
        cout<<endl;
    }

    return 0;
}