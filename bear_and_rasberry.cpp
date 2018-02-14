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
    int a,b,c,d,i,j,k,l,n,diff=0;
    scanf("%d %d",&a,&b);
    int arr[a];
    for(i=0;i<a;i++)
        cin>>arr[i];

    for(i=0;i<a;i++)
    {
        if(arr[i]-arr[i+1]-b>diff) diff=arr[i]-arr[i+1]-b;

    }


    cout<<diff<<endl;
    return 0;
}
