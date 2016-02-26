#include <iostream>
#include <fstream>
#include <stdio.h>
#include <algorithm>
using namespace std;

ifstream in("flori2.in");
ofstream out("flori2.out");

/*METHOD1 struct nr
{
    int ctr=0; //in cati vectori se afla
    int v[151]; //in care vectori se afla
};
bool AlreadyExists(int v[],int lim,int x)
{
    for(register int i=0;i<=lim;i++)
    {
        if(v[i]==x) return true;
    }
    return false;
}*/

//METHOD1 nr jojer[101];

//METHOD1 int content[151][151];
int v[101][151]; //NUMARUL_FLORII | NRDEVECTORI+VECTORII
int main()
{
    freopen("in.txt","r",stdin);
    int load,quant;
    int cobai;
    cin>>load>>quant;
    
    for()
    /*METHOD1 for(register int i=0;i<=load-1;i++)
    {
        for(register int k=0;k<=quant-1;k++)
        {
            cin>>cobai;
            if(!(AlreadyExists(content[0],k-1,cobai)))
            {
                jojer[cobai].v[jojer[cobai].ctr]=i;
                jojer[cobai].ctr++;
            }
            content[0][k]=cobai;
        }
    }*/
    
    /*AFISARE for(register int i=0;i<=10;i++)
    {
        cout<<"pentru "<<i<<" avem "<<jojer[i].ctr<<" aparitii, in vectorii:\n";
        for(register int k=0;k<=jojer[i].ctr-1;k++)
        {
            cout<<jojer[i].v[k]<<'\n';
        }
        cout<<'\n';
    }*/
    
    /*METHOD1 for(register int i=0;i<=quant-1;i++) content[0][i]=0;

    int cont=0;
    int fini=0;

    for(register int i=0;i<=100 && fini<load;i++)
    {
        
    }*/
}
