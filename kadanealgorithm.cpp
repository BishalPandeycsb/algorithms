#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;
vector<int> v;
int kadane(int arr[],int n)
{
 int new_sum=0;
 int overall_sum=0;
 for(int i=0;i<n;i++)
 {
     new_sum=max(arr[i],new_sum+arr[i]);
     overall_sum=max(new_sum,overall_sum);


 }
 int x=overall_sum;
 return overall_sum;

}
int main()
{
  cout<<" ** THIS IS KADANE'S LONGEST SUBARRAY PROBLEM ** "<<endl;
  cout<<endl;
  cout<<"enter the limit of number you want to insert"<<endl;
  int n,num;;
  cin>>n;
  int arr[n];
  cout<<"enter the element of array"<<endl;
  for(int i=0;i<n;i++)
  {
     cin>>num;
     arr[i]=num;
  }

   cout<<"so the maximum no of subarray sum is  "<<kadane(arr,n)<<endl;
   for(auto i:v)
   {
     cout<<i<<endl;
   }


}






















