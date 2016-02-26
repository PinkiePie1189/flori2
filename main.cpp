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
    int nr5=0;
    unsigned long long p=5;
    while(p<=load)
    {
        nr5+=load/p;
        p*=5;
    }
    if(load<=20)
    {
        int scosi2=0;
        unsigned long long p=1;
        for(register int i=2;i<=load;i++)
        {
            p*=i;
            int i2=i;
            while(i2%2==0 && scosi2<nr5)
            {
                p/=2;
                scosi2++;
                i2/=2;
            }
            while(i2%5==0)
            {
                p/=5;
                i2/=5;
            }
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




}
