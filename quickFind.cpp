#include<iostream>
using namespace std;

class QuickFind
{
     int *id;
     void InitFind(int N)
     {
        int id[N];
        for (int i = 0;i<N;i++)
        {
            id[i] = i;

        }

     }

     bool connected(int p ,int q)
     {return id[p] == id[q];}


      void Union(int p , int q,int N)
      {
         int id_p = id[p];
         int id_q = id[q];
         for (int i = 0; i<N;i++)
         {
             if(id[i]==id_p){id[i] = id_q;}

         }
   
      }
}
