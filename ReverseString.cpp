#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{

    string s,d;
    char c;
    cout<<"Enter the String "<<endl;
    getline(cin,s);
    int x=s.length();
    for(int j=x-1;j>=0;j--)
    {

        c=s.at(j);
        d=d+c;
    }
    cout<<"the desired output of your string"<<endl;
    cout<<d;
}

