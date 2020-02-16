#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int ternary_search(int arr[],int s,int e,int key)
{
int mid1,mid2;
 while(s<=e)
 {
  mid1=s+(e-s)/2;
  mid2=e-(e-s)/2;
  if(key==arr[mid1])
  {
    return mid1;
  }
  if(key==arr[mid2])
  {
   return mid2;
  }
   if(key<arr[mid1])
  {
    e=mid1-1;
    return ternary_search(arr,s,e,key);
  }
  else if(key>arr[mid2])
  {
   s=mid2+1;
   return ternary_search(arr,s,e,key);
  }
  else
     return(arr,mid1+1,mid2-1,key);
 }
 return -1;

}
int main()
{
 int n,key;
 int arr[]={1,2,3,4,5,6,7,8,9,10};
 n=sizeof(arr)/sizeof(arr[0]);
 cout<<"enter the element to found"<<endl;
 cin>>key;
int res=ternary_search(arr,0,n,key);
  (res==-1)?cout<<"element not found"<<endl
           :cout<<"element found at"<<res;
}
