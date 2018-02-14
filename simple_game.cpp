
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
    LL a,b,c,d,i,j,k,l,n;
    float f,g;
    cin>>a>>b;




    if(a%2==0) c=a/2;
    else c=ceil(a/2.0);


    if(c==b)
    {
        if(a!=1)
        {
            if(a%2==0) c+=1;
            else c-=1;
        }
        else c=1;

    }
    else if(b>c) c=b-1;
    else c=b+1;

    cout<<c<<endl;


    return 0;
}
