// <algorithm> Forward declarations  -*- C++ -*-

// Copyright (C) 2000-2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

//INPUT FILE: in.txt
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <algorithm>
using namespace std;
ifstream in("flori2.in");
ofstream out("flori2.out");

struct nr
{
    int ctr=0; //in cati vectori se afla
    int v[151]; //in care vectori se afla
};
bool AlreadyExists(int v[],int lim,int x)
{
    for(register int i=0; i<=lim; i++)
    {
        if(v[i]==x) return true;
    }
    return false;
}

nr jojer[101];
int content[151];
int val[151];

int main()
{
    freopen("in.txt","r",stdin);
    int load,quant;
    int cobai;
    int winrar,maxi;
    cin>>load>>quant;

    for(register int i=0; i<=load-1; i++)
    {
        for(register int k=0; k<=quant-1; k++)
        {
            in>>cobai;
            if(!(AlreadyExists(content,k-1,cobai)))
            {
                jojer[cobai].v[jojer[cobai].ctr]=i;
                jojer[cobai].ctr++;
            }
            content[k]=cobai;
        }
    }
    //AFISAJ
    /*for(register int i=0;i<=10;i++)
    {
        cout<<"pentru "<<i<<" avem "<<jojer[i].ctr<<" aparitii, in vectorii:\n";
        for(register int k=0;k<=jojer[i].ctr-1;k++)
        {
            cout<<jojer[i].v[k]<<'\n';
        }
        cout<<'\n';
    }*/
    bool already;
    int ret;
    int nrechipe=0;
    for(register int i=0; i<=100; i++)
    {
        if(jojer[i].ctr>=1)
        {
            already=false;
            for(register int k=0; k<=jojer[i].ctr-1; k++)
            {
                if(val[jojer[i].v[k]]!=0)
                {
                    ret=val[jojer[i].v[k]];
                    already=true;
                }
            }
            if(already)
                for(register int k=0; k<=jojer[i].ctr-1; k++)
                {
                    val[jojer[i].v[k]]=ret;
                }
            else
            {
                nrechipe++;
                for(register int k=0; k<=jojer[i].ctr-1; k++)
                {
                    val[jojer[i].v[k]]=nrechipe;
                }
            }
        }
    }
    for(register int i=1;i<=nrechipe;i++)
    {
        for(register int k=0;k<=100;k++)
        {
            if(val[k]==i)
            {
                cout<<k+1<<" ";
            }
        }
        cout<<'\n';
    }
}
