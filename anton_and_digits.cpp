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

bool myfn(int i, int j) { return i<j; }
int main()
{

    LL a,b,c,d,e,f,i,j,k,l,n,sum=0,arr[4],minel;
    int k1,k2,k3,k4;
    cin>>k1>>k2>>k3>>k4;
    arr[0]=k1;
    arr[1]=k2;
    arr[2]=k3;
    arr[3]=k4;

    c=k1<k3?k1:k3;
    minel=c<k4?c:k4;
    k1-=minel;
    k3-=minel;
    k4-=minel;
    sum+=(256*minel);
    minel=k1<k2?k1:k2;
    sum+=(32*minel);
    cout<<sum<<endl;
    return 0;


}
