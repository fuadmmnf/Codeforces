
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
    LL a,b,c,d=1,e=0,f,i,j,k,l,n,m,arr[100005],prod=1;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    if(arr[1]-arr[0]==0) d=2;

    if(arr[2]-arr[1]==0) d=2;
     if(arr[2]-arr[0]==0 ) d=3;

    for(i=3;i<n;i++)
    {
        if(arr[0]==arr[1] && arr[0]!=arr[2])
        {
            if(arr[i]==arr[0]) d++;
        }
        else if(arr[1]==arr[2] && arr[0]!=arr[2])
        {
            if(arr[i]==arr[1]) d++;
        }
        else if(arr[0]==arr[1]==arr[2])
        {
            if(arr[i]==arr[0]) d++;
        }
        else if(arr[2]==arr[i]) d++;

    }

    if(arr[2]-arr[0]==0) f=3;
    else if(arr[1]==arr[0]) f=2;
    else if(arr[2]-arr[1]==0) f=2;
    else f=1;

    for(i=0;i<f;i++)
        prod*=(d-i);
     for(i=f;i>1;i--) prod/=i;


     cout<<prod<<endl;
    return 0;

}
