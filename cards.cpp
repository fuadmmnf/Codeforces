
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
    LL a,b,c,d,e,f,i,j,k,n,arr[200],arr1[200],l=1,r;
    cin>>n;
    r=n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    sort(arr1,arr1+n);

    for(i=0;i<n/2;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]==arr1[l-1])
            {
                cout<<j+1<<" ";
                arr[j]=-1;
                l++;
                break;
            }
        }
        for(j=0;j<n;j++)
        {
            if(arr[j]==arr1[r-1])
            {
                cout<<j+1<<endl;
                arr[j]=-1;
                r--;
                break;
            }
        }
    }
    return 0;
}
