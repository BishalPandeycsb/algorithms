#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
void merge_sort(int arr[],int l,int m,int e)
{
int n1,n2;
n1=m-l+1;
n2=e-m;
int first[n1],second[n2];
 int i=0,j=0;
 for (i = 0; i < n1; i++)
        first[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        second[j] = arr[m + 1+ j];
        i=0;
        j=0;
       int  k=l;
 while(i<n1&&j<n2)
 {
  if(first[i]<=second[j])
  {
   arr[k]=first[i];
   i++;

  }
  else
  {
   arr[k]=second[j];
   j++;
  }
  k++;
 }

 while(i<n1)
 {
  arr[k++]=first[i];
  i++;
  k++;

 }
 while(j<n2)
 {
  arr[k++]=second[j];
  j++;
  k++;
 }



}
void display(int arr[],int n)
{
 for(int i=0;i<n;i++)
 {
  cout<<arr[i]<<"\t";
 }

}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {


        int m = l+(r-l)/2;


        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge_sort(arr, l, m, r);
    }
}
int main()
{
 int arr[]={12,11,13,5,6,9};
 int n=sizeof(arr)/sizeof(arr[0]);
 int mid=(0+n/2);
 cout<<"before sorting"<<endl;
 display(arr,n);
 cout<<endl;
 mergeSort(arr,0,n);
  cout<<"after sorting"<<endl;
 display(arr,n);







}
