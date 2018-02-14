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
    int a,b,c,d,i,j,k,l,n;
    string num,res;
    cin>>num;
    a=num.length();
    if(a==1)
    {
        if(num[0]=='1') cout<<"one"<<endl;
        else if(num[0]=='2') cout<<"two"<<endl;
        else if(num[0]=='3') cout<<"three"<<endl;
        else if(num[0]=='4') cout<<"four"<<endl;
        else if(num[0]=='5') cout<<"five"<<endl;
        else if(num[0]=='6') cout<<"six"<<endl;
        else if(num[0]=='7') cout<<"seven"<<endl;
        else if(num[0]=='8') cout<<"eight"<<endl;
        else if(num[0]=='9') cout<<"nine"<<endl;
        else if(num[0]=='0') cout<<"zero"<<endl;
    }
    else
    {
        if(num[0]=='1')
        {
             if(num[1]=='1') cout<<"eleven"<<endl;
            else if(num[1]=='2') cout<<"twelve"<<endl;
            else if(num[1]=='3') cout<<"thirteen"<<endl;
            else if(num[1]=='4') cout<<"fourteen"<<endl;
            else if(num[1]=='5') cout<<"fifteen"<<endl;
            else if(num[1]=='6') cout<<"sixteen"<<endl;
            else if(num[1]=='7') cout<<"seventeen"<<endl;
            else if(num[1]=='8') cout<<"eighteen"<<endl;
            else if(num[1]=='9') cout<<"nineteen"<<endl;
            else if(num[1]=='0') cout<<"ten"<<endl;
        }
        else
        {
              if(num[0]=='2') cout<<"twenty";
            else if(num[0]=='3') cout<<"thirty";
            else if(num[0]=='4') cout<<"forty";
            else if(num[0]=='5') cout<<"fifty";
            else if(num[0]=='6') cout<<"sixty";
            else if(num[0]=='7') cout<<"seventy";
            else if(num[0]=='8') cout<<"eighty";
            else if(num[0]=='9') cout<<"ninety";


             if(num[1]=='1') cout<<"-one"<<endl;
            else if(num[1]=='2') cout<<"-two"<<endl;
            else if(num[1]=='3') cout<<"-three"<<endl;
            else if(num[1]=='4') cout<<"-four"<<endl;
            else if(num[1]=='5') cout<<"-five"<<endl;
            else if(num[1]=='6') cout<<"-six"<<endl;
            else if(num[1]=='7') cout<<"-seven"<<endl;
            else if(num[1]=='8') cout<<"-eight"<<endl;
            else if(num[1]=='9') cout<<"-nine"<<endl;
            else if(num[1]=='0') cout<<endl;


        }
    }
    return 0;
}
