#include <iostream>
using namespace std;

class UnionFind
{
public:
       int *id;  // define a array
       int *sz;  // define a array to garde the number of objects in a tree root
public:
     void InitUF(int n)
     {
         int id[N];
         for (int i = 0; i<N;i++)
         {
              id[i] = i;
              sz[i] = 1;
              
         }
     }


    int root(int i)     // chase the parents
    {
       while(i!=id[i])
       {i = id[i];}
       return i;
     }


    bool connected(int p,int q)
    {
      return root(p) == root(q);
    }

    void Union(int p,int q)
    {
         int i = root(p);
         int j = root(q);
         if (sz[i]< sz[j]){id[i] = j; sz[j]+=sz[i];}
         else{sz[j] = i; sz[i]+=sz[j1]}

    }


