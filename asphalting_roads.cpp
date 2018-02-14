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
int pos[60];
bool arr[60],arr1[60];
int main()
{
    int a,b,c,d=0,i,j,k,l=0,n,m,sum=0,low,high,mid;
    cin>>n;
    for(i=0;i<60;i++)
    {
        arr[i]=false;
        arr1[i]=false;
    }
    for(i=0;i<n*n;i++)
    {
        cin>>a>>b;
        if(arr[a-1]==false && arr1[b-1]==false)
        {
            pos[d++]=i+1;
            arr[a-1]=true;
            arr1[b-1]=true;
        }
    }
    for(i=0;i<d;i++) cout<<pos[i]<<" ";
    cout<<endl;
    return 0;
}




