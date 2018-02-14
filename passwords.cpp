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
#include<string.h>
using namespace std;



int main()
{
    int a,b,c,d=0,i,j,k=0,l=0,n,minl=200,maxl=0,best=0,worst=0,passlen;
    scanf("%d %d",&a,&b);
   char pass[a+1][200],str[200];

   for(i=0;i<a;i++)
   {
       scanf("%s",pass[i]);
       if(strlen(pass[i])>maxl) maxl=strlen(pass[i]);
       if(strlen(pass[i])<minl) minl=strlen(pass[i]);

    }

    scanf("%s",str);
    passlen=strlen(str);

    for(i=minl;i<passlen;i++)
    {
        for(j=0;j<a;j++)
        if(strlen(pass[j])==i)
        {
            best++;
            d++;
            if(d%b==0)
            {
                best+=5;
                d=0;
            }
        }
    }
    cout<<best+1;
    for(i=minl;i<=passlen;i++)
    {
        for(j=0;j<a;j++)
        {

            if(!strcmp(str,pass[j])) continue;
             if(strlen(pass[j])==i)
            {
                worst++;
                k++;
                if(k%b==0)
                {
                    worst+=5;
                    k=0;
                }
            }
        }

    }
    cout<<" "<<worst+1<<endl;

  return 0;
}
