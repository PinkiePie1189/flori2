#include <iostream>
#include <fstream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;

ifstream in("treidiv.in");
ofstream out("treidiv.out");

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

}
