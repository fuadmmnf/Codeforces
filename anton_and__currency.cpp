
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

    LL a,b,c,d=0,e=0,f=0,g,h=0,i,j,k,l,n,mine=1000;
    char str[1000000];
    cin>>str;
    n=strlen(str);

    for(i=0;i<n;i++)
    {
        if((str[i]-'0')%2==0)
        {
            e=1;
            j=i;
            if(str[i]<str[n-1])
            {
                f=1;
                swap(str[i],str[n-1]);
                break;
            }
        }
    }
    if(f==0 && e)
    {
        swap(str[j],str[n-1]);
    }


    if(e)
    {
        cout<<str<<endl;
    }
    else cout<<"-1"<<endl;

    return 0;

}
