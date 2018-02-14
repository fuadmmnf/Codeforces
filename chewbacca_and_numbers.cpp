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
    string str;
    int i,j,k,n,a,b;

    cin>>str;
    a=str.length();
    for(i=0;i<a;i++)
    {
        if(str[i]-'0'>9-(str[i]-'0'))
        {
            if(i!=0 || (9-(str[i]-'0')>0))str[i]='0'+9-(str[i]-'0');
        }

    }
    cout<<str<<endl;
    return 0;

}
