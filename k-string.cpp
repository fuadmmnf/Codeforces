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
	int a,b,c,d,i,j,k,n,len,arr[26];
    char str[10000];
    scanf("%d",&a);
    scanf("%s",str);
    len=strlen(str);

    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i]>str[j]) swap(str[i],str[j]);
        }
    }


    for(i=0;i<26;i++) arr[i]=0;

    for(i=0;i<len;i++)
    {
        arr[str[i]-'a']+=1;
    }

    for(i=0;i<26;i++)
    {
        if(arr[i]!=0)
        {
            if(arr[i]%a!=0)
            {
                cout<<"-1"<<endl;
                return 0;
            }
        }
    }


    for(i=0;i<a;i++)
    {
        for(j=0;j<26;j++)
        {
           for(k=0;k<arr[j]/a;k++)
            printf("%c",j+'a');

        }
    }
    printf("\n");
    return 0;
}
