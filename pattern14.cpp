
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
        int x=1;
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        
        for(int j=i;j<2*n-1-i;j++)
        {
            cout<<x++;
        }
            
        cout<<endl;
    }

    return 0;
}