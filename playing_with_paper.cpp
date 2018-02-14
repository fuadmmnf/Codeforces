
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
LL arr[100003],arr1[100003],pos[100005];

int main()
{
    LL a,b,c,d,i,j,k,l,n,m,sum=0,maxv,minv,low,high,mid;
    cin>>a>>b;

        while(b!=0)
        {
            sum+=(a/b);
            a-=((a/b)*b);
            c=a;
            a=b;
            b=c;
        }

    cout<<sum<<endl;
    return 0;
}
