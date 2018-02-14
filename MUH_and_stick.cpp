#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
	std::ios_base::sync_with_stdio(false);
    LL alien=1,a,e=0,b,c,d=0,i,k,l,j,n,arr[6],pos[9]={},head_leg[9];

    for(i=0;i<6;i++)
    {
        cin>>arr[i];
        pos[arr[i]-1]++;
    }
    for(i=0;i<9;i++)
    {
        if(pos[i]>3) alien=0;
        if(pos[i]==2 || pos[i]==6) e=1;

    }
    if(!alien)
    {
        if(e)  cout<<"Elephant"<<endl;
        else cout<<"Bear"<<endl;
    }
    else cout<<"Alien"<<endl;
    return 0;
}
