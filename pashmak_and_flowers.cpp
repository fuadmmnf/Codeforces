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
#include<time.h>

using namespace std;



int main()
{
    long long int a,b=0,c=0,d,i,j;
    int n;
    cin>>n;
    long long int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    a=arr[n-1]-arr[0];
    if(arr[0]!=arr[n-1])
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]==arr[0]) b++;
            else break;
        }
        for(i=n-1;i>=0;i--)
        {
            if(arr[i]==arr[n-1]) c++;
            else break;

        }
        printf("%lld %lld\n",a,b*c);
    }

    else
    {
        d=0;
        for(i=n-1;i>=1;i--)
        {
            d+=n-i;
        }
        printf("%lld %lld\n",a,d);
    }
    return 0;
}
