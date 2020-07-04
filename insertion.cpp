#include<bits/stdc++.h>
#include<iostream>
#include<iterator>
using namespace std;
void insertion(int arr[],int s)
{
 int i,j,temp=0;
 for(int i=1;i<s;i++)
 {
   temp=arr[i];
   j=i-1;
   while(j>=0 && arr[j]>temp)
   {
    arr[j+1]=arr[j];
    j--;
   }
   arr[j+1]=temp;

 }
 for(int i=0;i<s;i++)

 {
   cout<<arr[i]<<" ";
 }

}
int main()
{
 int arr[]={4,12,42,54,67,145,6,21};
 int n=sizeof(arr)/sizeof(arr[0]);
 insertion(arr,n);
}
