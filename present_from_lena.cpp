
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
    LL a,b,c,d=0,i,j,k,l=0,n,m,sum=0,low,high,mid;
    cin>>n;


     for(i=0,k=0;i<(2*n+1);i++)
    {
        l=0;
        for(j=0;j<(2*n+1)-(2*k+1);j++) cout<<" ";
        for(j=2*k+1;j>0;j--)
        {
            if(j>1)
            cout<<l<<" ";
            if(j>(2*k+1)/2 +1) l++;
            else l--;
        }
        cout<<"0";
        if(k<(2*n+1)/2 && !d)
        {
            k++;
        }
        else
        {
            d=1;
            k--;
        }
        cout<<endl;
    }



/*
    for(i=0;i<(2*n+1)/2 +1;i++)
    {
        l=0;
        for(j=i;j<(2*n+1)/2;j++) cout<<" ";
        for(j=2*i+1;j>0;j--)
        {
            cout<<l;
            if(j>(2*i+1)/2 +1) l++;
            else l--;
        }
        cout<<endl;
    }


/*
     for(i=0;i<(2*n+1)/2;i++)
    {
        l=0;
        for(j=2*i+1;j>i;j--)   cout<<" ";

        for(j=2*((2*n+1)/2-1-i)+1;j>0;j--)
        {
            cout<<l;
            if(j-1>(2*((2*n+1)/2-1-i)+1)/2) l++;
            else l--;
        }


        cout<<endl;
    }
*/

    return 0;
}
