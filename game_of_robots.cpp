
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
     int a,b=0,n;
     long long int k;
     cin>>n>>k;
     long long int rob[n],i,j,counter=0;
     for(i=0;i<n;i++)
     {
         cin>>rob[i];
            counter+=i+1;
            if(!b)
            if(counter>=k)
            {
                b=1;
                j=i-(counter%k);
            }
     }
     cout<<rob[j]<<endl;
     return 0;

}
