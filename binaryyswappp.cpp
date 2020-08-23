#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int fms(int arr[],int n)
{
    int zero[n];
    memset(zero,0,sizeof(zero));

    int count=0;
    zero[n-1]=1-arr[n-1];
    for(int i=(n-2);i>=0;i--)
    {
        zero[i]=zero[i+1];
        if(arr[i]==0)
            zero[i]++;
    }
     for (int i=0;i<n;i++)
        {
            if (arr[i]==1)
            count+=zero[i];
        }
    return count;
}
int main()
{
    int arr[]={0,1,0,1,1,1,0,0,0,1,0,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<fms(arr,n);
    return 0;
}
