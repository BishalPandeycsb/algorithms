#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void mer(int arr[],int l,int m ,int r)
{

    int l1=m-l+1,l2=r-m;
    int left[l1],right[l2];
    for(int i=0;i<l1;i++)
     left[i]=arr[l+i];

    for(int j=0;j<l2;j++)
      right[j]=arr[m+1+j];


   int   i=0,j=0;
   int k=l;
   while(i<l1 && j<l2)
   {
     if(left[i]<=right[j])
     {
       arr[k]=left[i];
       i++;

    }
    else
    {
      arr[k]=right[j];
      j++;

    }
    k++;
   }
    while(i<l1)
    {
     arr[k]=left[i];
     i++;
     k++;
    }
    while(j<l2)
    {
      arr[k]=right[j];
      j++;
      k++;

    }
}








void mergesort(int arr[],int l,int r)
{
 if(l<r)
 {
  int mid=l+(r-l)/2;
  mergesort(arr,l,mid);
  mergesort(arr,mid+1,r);
  mer(arr,l,mid,r);

 }
}
int main()
{
  int arr[]={2,4,1,6,8,5,3,7};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"array before sorting "<<endl;
  for(int i =0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
 cout<<endl;
  mergesort(arr,0,n-1);
   cout<<"array after sorting "<<endl;
  for(int i =0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }



}
