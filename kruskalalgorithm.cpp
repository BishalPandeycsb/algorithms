#include<bits/stdc++.h>'
#include<iostream>
#include<algorithm>
using namespace std;
class edge
{
 public:
 int source;
 int dest;
 int weight;
};
bool compare( edge e1,edge e2)
{
 return e1.weight<e2.weight;
}
int findparent(int v,int *parent)
{
 if(parent[v]==v)
  return v;

 return findparent(parent[v],parent);

}

void kruskal(edge *input,int n,int e)
{
     sort(input,input+e,compare);
     edge *output=new edge[n-1];
     int *parent=new int[n];
     for(int i=0;i<n;i++)
     {
        parent[i]=i;
     }
     int count=0,i=0;
     while(count!=n-1)
     {
          edge cur_edge=input[i];
          int sourceparent=findparent(cur_edge.source,parent);
          int destparent=findparent(cur_edge.dest,parent);
          if(sourceparent!=destparent)
          {
           output[count]=cur_edge;
           count++;
           parent[sourceparent]=destparent;
          }
          i++;
     }
      cout<<" the required mst is as follows"<<endl;
     for(int i=0;i<n-1;i++)
     {
      if(output[i].source<output[i].dest)
      {
        cout<<output[i].source<<" "<<output[i].dest<<" "<<output[i].weight<<endl;
      }
      else
      {
        cout<<output[i].dest<<" "<<output[i].source<<" "<<output[i].weight<<endl;
      }

    }

}

int main()
{
 cout<<"enter the no of vertices and edges"<<endl;
 int n,e;
 cin>>n >> e;
 edge *input=new edge();
 cout<<"enter the input in form of source,destination and weight respectively"<<endl;
 for(int i=0;i<e;i++)
 {
   int s,d,w;
   cin>>s >> d>>w;
   input[i].source=s;
   input[i].dest=d;
   input[i].weight=w;
 }

kruskal(input,n,e);


}
