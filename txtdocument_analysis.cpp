
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
    int a,b,c,d,i,j,k,l,n,wordinp=0,wordoutp=0,p=0,beg=0,en=0,under=1,paren=0,lenout=0,lenin=0;
    char str[1000];
    cin>>n>>str;


    for(i=0;i<n;i++)
    {

        if(str[i]!='(' && str[i]!='_' && !paren)
        {
             wordoutp++;
             if(wordoutp>lenout) lenout=wordoutp;
        }
        else
        {
            if(str[i]=='(')
                paren=1;
             wordoutp=0;
        }


        if(str[i]!='_' && str[i]!=')' && str[i]!='(' && paren &&under)
        {
            wordinp++;
            under=0;
        }
        else
        {
            if(str[i]==')') paren=0,under=1;
            if(str[i]=='_') under=1;

        }


    }
    cout<<lenout<<" "<<wordinp<<endl;
    return 0;

}
