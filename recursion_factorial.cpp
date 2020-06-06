#include<iostream>
#include<algorithm>
using namespace std;
long fact(long n)
{
  if(n==0)
   return 1;

  else
  {
    return n*fact(n-1);
  }

}
int main()
{
  long num;
  cout<<"enter the number";
  cin>>num;
  cout<<fact(num)<<endl;
}
