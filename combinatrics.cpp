#include<bits/stdc++.h>
using namespace std;

#define LL long long

int main()
{
	std::ios_base::sync_with_stdio(false);

    LL a,b,c,d,e,f,i,j,k,l,n,m,ppl,team,bestteam,minteam,best=1,low=0;
    cin>>ppl>>team;
    bestteam=ppl-(team-1);


    for(i=0;i<bestteam;i++)
        best*=(bestteam-i);
    best/=2;
    for(i=(bestteam-2);i>1;i--)
        best/=i;



    minteam=ceil((float)ppl/team);
    for( ;minteam>=1;)
    {
        f=1;
        for(i=0;i<minteam;i++)
            f*=(minteam-i);
        f/=2;
        for(i=(minteam-2);i>1;i--)
            f/=i;

        low+=f;
        ppl-=minteam;
        team--;
        minteam=ceil((float)ppl/team);
    }


    cout<<low<<" "<<best<<endl;
    return 0;
}
