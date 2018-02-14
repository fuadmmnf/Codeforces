
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
#include<stdio.h>
using namespace std;

#define LL long long

int main()
{
    LL a,b,c,d,i,j,k,l,n,m,x1,x2,y1,y2,dist1,dist2;
    cin>>x1>>y1>>x2>>y2;
    cin>>a>>b;
    dist1=abs(x1-x2);
    dist2=abs(y1-y2);

    if((dist1%a==0) && (dist2%b==0))
    {

        c=dist1/a;
        d=dist2/b;

        if(c>=d) m=c-d;
        else m=d-c;
        if(m%2==0)
        {
            cout<<"YES"<<endl;

        }
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;


    return 0;
}
