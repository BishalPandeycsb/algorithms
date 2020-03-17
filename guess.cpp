#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
 vector <int> v;
 string s;
 int guess_number=73,num,x,count=0;

  cout<<"  ** WELCOME TO GUESS GAME **"<<"\n";

    cout<<"        ENTER YOUR NAME  "<<"\n";
     getline(cin,s);

     cout<<" **HELLO**"<<s<< "\n";
     cout<<"  ** THIS IS THE RULE OF OUR GAME **"<<"\n";
     cout<<" 1 ) YOU WILL GET 5 CHANCES EACH "<<"\n";
     cout<<" 2)  IF YOUR NUMBER IS IN RANGE OF 10 THAN OUTPUT WILL BE "<<"\n";
     cout<< "  NEAR ABOUT TO "<<"\n";
     cout<<"*** TRY AGAIN ***"<<"\n";
     cout<<" 3 ) IF  YOUR NUMBER IS IN RANGE 0F 20 THAN OUTPUT WILL BE "<<"\n";
     cout<<"  YOUR GUESS IS NEAR"<<"\n";
     cout<<"*** TRY AGAIN ***"<<"\n";
     cout<< "4 )   IF YOUR NUMBER IS GREATER THAN  20 "<<"\n";
     cout<<"*** TRY AGAIN ***"<<"\n";
 while(1)
 {
   if(count<5)
   {
     cout<<"             ENTER THE NUMBER            "<<"\n";
     cin>>num;
     v.push_back(num);

     x=guess_number-num;
     if(x==0)
     {
      cout<<" *********BRILLIANT************"<<"\n";
      cout<<"CONGRATULATIONS YOU WON"<<"\n";
      break;

     }
     else if(x<0)
     {
      x=x*(-1);
     }

     if(x<=10&& x>=1)
     {
       cout<<" NEAR ABOUT TO "<<"\n";
       cout<<"*** TRY AGAIN ***"<<"\n";

     }
     else if(x>=11 && x<=20)
     {
        cout<<"YOUR GUESS IS NEAR"<<"\n";
       cout<<"*** TRY AGAIN ***"<<"\n";

     }
     else

     {
         if(x>=21)
         {
           cout<<"PLEASE TRY AGAIN "<<"\n";
         }
 }
   count++;
   cout<<"** THE PREVIOUS NUMBER THAT ARE GUESSED ARE **"<<"\n";
  for(auto i:v)
  {
    cout<<i<<"\t";
  }

   cout<<"\n";
}
else
{

    cout<<"** THE PREVIOUS NUMBER THAT ARE GUESSED ARE **"<<"\n";
  for(auto i:v)
  {
    cout<<i<<"\t";
  }

   cout<<"\n";
   cout<<" SORRY "<< s<<"\n"<< " YOU LOST "<<"\n";
   cout<<"* CHANCES OVER !!!!!! *"<<"\n";
   break;

}
}



}
