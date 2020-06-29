#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int coin(int c[],int n,int x)
{
  int dp[n+1][x];
  int including,excluding;
  for(int j=0;j<x;j++)
  {
    dp[0][j]=1;
  }
  for(int i=1;i<=n;i++)
  {
    for(int j=0;j<x;j++)
    {
      if(i>=c[j])
      {
        including=dp[i-c[j]][j];
      }
      else
       including=0;
      if(j>=1)
      {
       excluding=dp[i][j-1];
      }
      else
       excluding=0;

       dp[i][j]=including+excluding;
       cout<<"the required output of dp["<<i<<"]["<<j<<"] is "<<dp[i][j]<<endl;
    }

  }
    return dp[n][x-1];
}
int main()
{
  cout<<"**dynamic approach of coin changing problem**"<<endl;
  int total_amt,no_of_av;

  cout<<"         enter the amout which value is to be changed  and total no of coin available for change  respectively         "<<endl;
  cin>>total_amt;
  cin>>no_of_av;
  int arr[no_of_av];
  for(int i=0;i<no_of_av;i++)
  {
    cin>>arr[i];
  }
  int res=coin(arr,total_amt,no_of_av);
  cout<<"the total no of ways we can change the coin is "<<res<<endl;

}
