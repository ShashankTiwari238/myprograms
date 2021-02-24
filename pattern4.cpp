
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
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        
        for(;j<n;j++)
        {
            cout<<"*";
        }
            
        cout<<endl;
    }

    return 0;
}