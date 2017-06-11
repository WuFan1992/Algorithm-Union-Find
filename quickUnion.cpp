#include <iostream>
using namespace std;

class UnionFind
{
public:
       int *id  // define a array
public:
     void InitUF(int n)
     {
         int id[N];
         for (int i = 0; i<N;i++)
         {
              id[i] = i;
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
         id[j] =i;

    }


