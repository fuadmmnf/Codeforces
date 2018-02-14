
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
    int a,b=0,c,d,e,f,i,j,k,l,n,jump=1,maxj=0;
    char str[200];
    cin>>str;
    n=strlen(str);

    for(i=0;i<n;i++)
    {

        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O'|| str[i]=='U' || str[i]=='Y')
        {
            jump=1;
        }
        else jump++;
         if(jump>maxj) maxj=jump;
    }
    cout<<maxj<<endl;
    return 0;



       return 0;
}
