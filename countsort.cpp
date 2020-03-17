#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void c_sort(int a[],int n,int max)
{
 int c[max+1]={0},b[n]={0};
 for(int i=0;i<max;i++)
 {
  c[a[i]]++;
 }
 int sum=0;
for(int i=0;i<=max;i++)
 {
  cout<<c[i]<<"\t";
 }
 cout<<endl;
for(int j=1;j<=max;j++)
{
 c[j]=c[j-1]+c[j];
}
for(int j=1;j<=max;j++)
{
  cout<<c[j]<<"\t";
}
cout<<endl;
for(int k=0;k<n;k++)
{
 b[c[a[k]]-1]=a[k];
 c[a[k]]=c[a[k]]-1;

}

cout<<"the final sorted array is "<<endl;
for(int k=0;k<n;k++)
{
 cout<<b[k]<<endl;
 }


}
int main()
{
 int a[]={3,2,1,5,1,2,7};
 int n=(sizeof(a)/sizeof(a[0]));
 int max;
 cout<<"enter the maximum value"<<endl;
 cin>>max;
 c_sort(a,n,max);

}
