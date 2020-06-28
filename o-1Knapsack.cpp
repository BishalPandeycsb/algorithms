#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int knapsack(int n,int m,int w[],int p[])
{
  int knapsack[n+1][m+1];
  for(int j=0;j<=m;j++)
    knapsack[0][j]=0;
  for(int i=0;i<=n;i++)
    knapsack[i][0]=0;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++)
    {
      if(w[i-1]<=j)
      {
         knapsack[i][j]=max(knapsack[i-1][j],p[i-1]+knapsack[i-1][j-w[i-1]]);
      }
      else
      {
        knapsack[i][j]=knapsack[i-1][j];
      }

    }

  }

  return knapsack[n][m];

}
int main()
{
  cout<<"*****this is the knapsack problem****"<<endl;
  cout<<"***enter the number of objects***"<<endl;
  int n;
  cin>>n;
  int w[n],p[n]; //the weight and profit array
  cout<<"     enter the capacity        "<<endl;
  int c;
  cin>>c;
  cout<<"**enter the weight and profit respectively  **"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>w[i]>>p[i];
  }
  int result=knapsack(n,c,w,p);
  cout<<"this  is the final result of knapsack problem"<<endl;
  cout<<result<<endl;

}

