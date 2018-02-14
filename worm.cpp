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
    LL a,b,c,d,i,j,k,l,n,m,sum=0,low,high,mid;

    cin>>n;


    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        arr1[i]=sum;
    }
    cin>>m;
   /* for(i=0;i<m;i++) cin>>pos[i];*/
    for(i=0;i<m;i++)
    {
        cin>>pos[i];
        low=0,high=n;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(arr1[mid]>=pos[i])
            {
                if(arr1[mid-1]>=pos[i]) high=mid;
                else
                {
                    cout<<mid+1<<" ";
                    break;
                }
            }
            else if(arr1[mid]<pos[i]) low=mid;


        }
    }
    cout<<endl;
    return 0;
}
