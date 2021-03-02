#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
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
        pivotindex=partition(a,l,r);
        QuickSort(a,l,pivotindex-1);
        QuickSort(a,pivotindex+1,r);
    }
}

int findMedian(int a[],int n)
{
    int m;
    if(n&1==0)
    m=a[(n-1)/2];

    else
    m=(a[(n-1)/2]+a[(n-1)/2+1])/2;

    return m;
}
int main()
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    QuickSort(a,0,n-1);
    
    m=findMedian(a,n);

    cout<<"median= "<<m<<endl;

    return 0;
}