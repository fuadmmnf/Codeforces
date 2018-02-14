
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
    int a,b,c,d,i,j,k,l,n,m,diff1,diff2=0,pos=0,sum1=0,sum2=0,maxs=0;
    cin>>n;
    int arr[n][2];
    for(i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
        sum1+=arr[i][0];
        sum2+=arr[i][1];
    }
    diff2=abs(sum1-sum2);
    diff1=diff2;
     for(i=0;i<n;i++)
     {
        if(abs((sum1+arr[i][1]-arr[i][0])-(sum2+arr[i][0]-arr[i][1]))>diff2)
        {
            if(abs((sum1+arr[i][1]-arr[i][0])-(sum2+arr[i][0]-arr[i][1]))>diff1)
            {

                diff1=abs((sum1+arr[i][1]-arr[i][0])-(sum2+arr[i][0]-arr[i][1]));
                pos=i+1;
            }
        }
     }
    cout<<pos<<endl;
    return 0;
}


