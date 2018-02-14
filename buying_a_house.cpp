
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

    LL a,b,c,d,i,j=0,k,l,n,arr[1000],arr1[200],minl=131231;

    cin>>n>>a>>b;
    for(i=0;i<n;i++)
    {
            cin>>arr[i];
            if(arr[i]<=b && arr[i]!=0)
            {
                arr1[j]=i;
                j++;
            }
    }

    for(i=0;i<j;i++)
    {
        if(abs((a-1)-arr1[i])<minl) minl=abs((a-1)-arr1[i] );
    }
    cout<<minl*10<<endl;
    return 0;



}
