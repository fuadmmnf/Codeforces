
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <sstream>
#include <iterator>
#include<iostream>
#include<stdio.h>
using namespace std;



int main()
{
    int a,b,c,d,i,j,k,n,sum=0;
    cin>>a>>b;
    for(i=0 ; ; )
    {
        i++;
        if(b>=i)
        {

            b-=i;
        }
        else break;
        if(i==a) i=0;

    }
    cout<<b;
    return 0;
}
