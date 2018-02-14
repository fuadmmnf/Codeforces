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
    int a,b,c=0,d,i,j=0,k,l,counter=0;
    cin>>a>>b;
    int cat[a],edge[a-1][2],dele[a-1];

    for(i=0;i<a;i++)
        cin>>cat[i];
    for(i=0;i<a-1;i++)
    {
        dele[i]=0;
        cin>>edge[i][0]>>edge[i][1];
    }

    for(i=0;i<a-1;i++)
    {

        if(edge[i][0]==1)
        {
            if(cat[edge[i][1]-1])
            {
                dele[j]=edge[i][1];
                j++;
                c++;
            }
            else counter++;
        }
        else
        {
            d=0;
            for(k=0;k<a-1;k++)
            {
                if(dele[k]==edge[i][0])
                {
                    d=1;
                    break;
                }
            }
            if(!d || c<=b)
            {
                 if(cat[edge[i][1]-1])
                {
                    dele[j]=edge[i][1];
                    j++;
                    c++;
                }
            else counter++;
            }

        }

        }

    cout<<counter<<endl;
    return 0;
}
