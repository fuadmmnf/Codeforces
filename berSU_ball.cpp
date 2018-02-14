
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
    int a,b=0,c,d,e,f,i,j,k,l,g=0,boy[200],girl[200],n,m,num=0;
    cin>>m;
    for(i=0;i<m;i++)
        cin>>boy[i];
    sort(boy,boy+m);
    cin>>n;
    for(i=0;i<n;i++)
        cin>>girl[i];
    sort(girl,girl+n);
    for( ;b<m && g<n;)
    {
        if(boy[b]-girl[g]>1) g++;
        else if(girl[g]-boy[b]>1) b++;
        else
        {
            num++;
            b++;
            g++;
        }
    }
    cout<<num<<endl;
    return 0;
}
