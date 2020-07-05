#include<bits/stdc++.h>
#include<iostream>
#include<iterator>
using namespace std;
void count_sort(int arr[],int n,int m)
{
 int c[m+1]={0};
 int b[n]={0};
 for(int i=0;i<n;i++)
 {
   c[arr[i]]++;
 }
 cout<<"intialising "<<endl;
  for(int i=0;i<=m;i++)
 {
  cout<<c[i]<<"\t";
 }
 cout<<endl;
 for(int j=1;j<=m;j++)
 {
   c[j]=c[j-1]+c[j];
 }
 cout<<"sum of arrays"<<endl;
 for(int j=1;j<=m;j++)
{
  cout<<c[j]<<"\t";
}
cout<<endl;
  for(int k=0;k<n;k++)
{
  b[c[arr[k]]-1]=arr[k];
 c[arr[k]]=c[arr[k]]-1;

}

cout<<"the final sorted array is "<<endl;
for(int k=0;k<n;k++)
{
 cout<<b[k]<<"  ";
 }


}
int main()
{
 int arr[]={1,2,2,3,5,2,6,4,1};

 int n=sizeof(arr)/sizeof(arr[0]);
 for(int i=0;i<n;i++)
 {
   cout<<arr[i]<<" ";
 }
 cout<<endl;
 int w=*max_element(arr,arr+n);
 count_sort(arr,n,w);
}
