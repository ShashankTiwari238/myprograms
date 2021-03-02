#include <iostream>

using namespace std;

void SelectionSort(int a[],int n)
{
 for(int i=0;i<n-1;i++)
    {
        int min,pos,t;
        min=a[i];
        pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                pos=j;
            }
        }
        if(i!=pos)
        {
        t=a[i];
        a[i]=a[pos];
        a[pos]=t;
        }
    }

    for(int k=0;k<n;k++)
        cout<<a[k]<<" ";
    cout<<endl;
}


int main()
{
    int x;
    cin>>x;
    cout<<endl;
    for(int j=0;j<x;j++)
    {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    SelectionSort(a,n);
    cout<<endl;
    }

    return 0;
}
