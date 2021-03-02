#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

void bubbleSort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            swap(&a[j],&a[j+1]);
        }
    }

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int *p;
    bubbleSort(a,n);
    

    return 0;
}