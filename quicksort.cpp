#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int partion(int arr[],int s,int e)
{
int  pivot=arr[e],pindex=s;
  for(int i=s;i<e;i++)
  {
    if(arr[i]<=pivot)
    {
      swap(arr[i],arr[pindex]);
      pindex++;
    }
  }
    swap(arr[pindex],arr[e]);
    return pindex;
  }



void quicksort(int arr[],int s,int n)
{
 if(s<n)
 {
 int p=partion(arr,s,n);
 quicksort(arr,s,p-1);
 quicksort(arr,p+1,n);
 }

}
int main()
{
 int arr[]={7,2,1,6,8,5,3,4};
 int s=0;
 int n=sizeof(arr)/sizeof(arr[0]);
 quicksort(arr,s,n);
 for(int i=0;i<n;i++)
 {
   cout<<arr[i]<<" ";
 }
}
