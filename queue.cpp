
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

    LL a,b,c,d,i,j,k,l,n,m,arr[100005],sum=0,num=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        if(sum<=arr[i])
        {
            num++;
            sum+=arr[i];
        }
        else continue;
    }
    cout<<num<<endl;
    return 0;
}


