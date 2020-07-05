#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void shell_sort(int arr[],int n)
{
  int j;
  for(int gap=n/2;gap>0;gap=gap/2)
  {
   for(int i=gap;i<n;i++)
   {
     int temp=arr[i];
     for(j=i;j>=gap && arr[j-gap]>temp;j-=gap)
     {
       arr[j]=arr[j-gap];
     }

     arr[j]=temp;
   }

  }

}
int main()
{
 int arr[]={12,38,54,2,3};
 int n=sizeof(arr)/sizeof(arr[0]);
 cout<<"this is the array before shell sort"<<endl;
 for(int i=0;i<n;i++)
 {
   cout<<arr[i]<<" ";
 }
  cout<<endl;
  shell_sort(arr,n);
  cout<<"this is the array after shell sort"<<endl;
 for(int i=0;i<n;i++)
 {
   cout<<arr[i]<<" ";
 }


}
