
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
	int a,b,c,d,i,j,k=0,n,black=0,group=0,white=1;
    char str[200];
    int arr[200];
    cin>>n;
    cin>>str;
    for(i=0;i<n;i++) arr[i]=0;
    for(i=0;i<n;i++)
    {
        if(str[i]=='B')
        {
            if(white)
            {
                black++;
                white=0;
            }
        }
        if(!white && str[i]=='B')
            {
                arr[k]++;

            }
        if(str[i]=='W' && !white)
            {
                white=1;
                k++;
            }
        }

    cout<<black<<endl;
    for(i=0;i<black;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;

}
