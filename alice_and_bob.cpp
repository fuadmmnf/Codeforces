
#include<bits/stdc++.h>

typedef long long LL;


#define REP(i,a,b)   for (int i =(int)a; i <int(b); i++)


using namespace std;


set<int> games;
std::set<int>:: iterator it;
std::set<int>:: iterator it1;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL a,b,c,d,curr=1,i,j,k,l,n,m,has,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;
    cin>>n;
    REP(i,0,n) { cin>>a; games.insert(a);}

    for(it=games.begin();it!=games.end();it++)
    {
        for(it1=(it+1);it1!=games.end();it1++)
        {
            if(*it==*it1) continue;
            a=games.count(abs(*it-*it1));
            if(a==0)
            {
                curr=1-curr;
                games.insert(abs(*it-*it1));
            }

        }
    }


    if(curr==1) cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
    return 0;

}
