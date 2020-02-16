#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int b_search(int arr[],int l,int h,int key)
{
 if(h>l)
 {

   int mid=l+(h-l)/2;
   if(key==arr[mid])
   {

    return mid;
   }
   if(key>arr[mid])
     return b_search(arr,mid+1,h,key);
   else
     return b_search(arr,l,mid-1,key);
 }
 return -1;
}

int main()
{
 int n,key;
 int arr[]={1,2,3,4,5,6,7,8,9,10};
 n=sizeof(arr)/sizeof(arr[0]);
 cout<<"enter the element to be searched"<<endl;
 cin>>key;
 int res=b_search(arr,0,n,key);
 (res==-1)?cout<<"element not found"
         :cout<<"element found at"<<res;



}
