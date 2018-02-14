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
#include<stdio.h>
using namespace std;

#define LL long long

int main()
{
    LL a,b,c,d,i,j,k,l,year=0;
    cin>>a>>b;
    for( ; ; )
    {
        if(a>b)
        {
            break;
        }
        else
        {
            a*=3;
            b*=2;
            year++;
        }
    }
    cout<<year<<endl;
    return 0;
}
