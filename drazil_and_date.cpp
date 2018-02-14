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
    long long int a,b,c,d,i,j,k,n,s;
    cin>>a>>b>>s;
    d=abs(a)+abs(b);
    if(d-s>0) cout<<"NO"<<endl;
    else if((s-d)%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;

}
