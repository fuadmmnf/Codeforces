
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

    int a,b,c,d=-10,e=-10,f,i,j,k,l,n,cash=1,ata=1;
    cin>>n;
    int arr[n][2];
    for(i=0;i<n;i++)
        cin>>arr[i][0]>>arr[i][1];


    for(i=0;i<n;i++)
    {

        if(arr[i][0]==d && arr[i][1]==e)
        {
            cash++;
            if(cash>ata) ata=cash;
        }
        else
            cash=1;

        d=arr[i][0];
        e=arr[i][1];

    }
    cout<<ata<<endl;
    return 0;
}
