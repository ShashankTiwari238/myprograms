#include<iostream>
#include<cstdlib>
using namespace std;

void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

void randomization(int a[],int l,int r)
{
    int temp;
    temp=rand()%(r+1);
    swap(&a[temp],&a[r]);
}

int partition(int a[],int l,int r)
{
    int pivot=a[r];
    int i=l,j=l;
    for(;j<r;j++)
    {
        if(a[j]<pivot)
        {
            swap(&a[j],&a[i]);
            i++;
        }
    }
    swap(&a[i],&a[r]);
 return i;
}

void QuickSort(int a[],int l, int r)
{
    int pivotindex;
    if(l<r)
    {
        randomization(a,l,r);
        pivotindex=partition(a,l,r);
        QuickSort(a,l,pivotindex-1);
        QuickSort(a,pivotindex+1,r);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    QuickSort(a,0,n-1);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}