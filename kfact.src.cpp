#include <iostream>
#include <fstream>
#include <stdio.h>
#include <algorithm>
#include <windows.h> //OLF
#include <math.h>
using namespace std;

ifstream in("treidiv.in");
ofstream out("treidiv.out");
int put10(int x)
{
    int res=1;
    for(register int i=1;i<=x;i++)
    {
        res*=10;
    }
    return res;
}

int main()
{
    // freopen("in.txt","r",stdin);
    int load,k;
    cin>>load>>k;
    if(load<=20)
    {
        unsigned long long p=1;
        for(register int i=2;i<=load;i++)
        {
            p*=i;
        }
        while(p%10==0)
        {
            p/=10;
        }
        for(register int i=2;i<=k;i++)
        {
            p/=10;
        }
        if(p==0)
        {
            cout<<"-1";
            return 0;
        }
        cout<<p%10;
        return 0;
    }
    int nr5=0;
    unsigned long long p=5;
    while(p<=load)
    {
        nr5+=load/p;
        p*=5;
    }

    p=1;
    int joj;
    int a=put10(k);
    int i;
    int ctr2=0;
    for(register int raj=2;raj<=load;raj++)
    {
        i=raj;
        while(i%2==0 && ctr2<nr5)
        {
            ctr2++;
            i/=2;
        }
        while(i%5==0)
        {
            i/=5;
        }
        p*=i;
        if(p>=a)
        {
            p=p%a;
        }
    }
    cout<<p/(a/10);
}
