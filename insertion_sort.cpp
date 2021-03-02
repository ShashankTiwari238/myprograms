#include <iostream>

using namespace std;

int main()
{
   int a[100],n,k,j;

   cout<<"Enter n=";
   cin>>n;

   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }

   for(int i=1;i<n;i++)
   {
       k=a[i];
       j=i-1;

       while(j>=0 && k<a[j])
       {
           a[j+1]=a[j];
           j--;
       }

       a[j+1]=k;
   }
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }

   return 0;
}
