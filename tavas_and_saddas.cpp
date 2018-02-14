
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

#define LL long long

int main()
{
    LL a,b,c,d,e,f,i,j,k,l,n,m,ser=0;

    cin>>n;
    a=1;
    while(n)
    {
        if(n%10==4) ser+=a;
        else ser+=2*a;
        n/=10;
        a*=2;
    }
    cout<<ser<<endl;
    return 0;




}
