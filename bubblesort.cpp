#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;


}
void bubblesort(int a[],int n)
{
  int count=0;
 for(int i=0;i<n-1;i++)
 {
   for(int j=0;j<n-i-1;j++)
   {
    if(a[j]>a[j+1])
    {
      swap(&a[j],&a[j+1]);
      count=count+1;
    }
   }

 }
 cout<<count;
 }

void display(int a[],int n)
{
 for(int i=0;i<n;i++)
 {
  cout<<a[i];
 }
}





int main()
{
 int n,num;
 cout<<"enter the size of array"<<endl;
 cin>>n;
 int arr[n];
 cout<<"enter the respective value of arrays"<<endl;
 for (int i=0;i<n;i++)
 {
  cin>>num;
  arr[i]=num;
 }
 cout<<"array before sorting"<<endl;
 display(arr,n);
 bubblesort(arr,n);
  cout<<"array after sorting"<<endl;
 display(arr,n);
  }












