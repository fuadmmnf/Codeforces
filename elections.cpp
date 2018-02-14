
#include<bits/stdc++.h>

typedef long long LL;

#define REP(i,a,b)   for (int i =(int)a; i <int(b); i++)


using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}


vector< pair<int,int> > election;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL a,b,c,d,i,j,k,l,n,m,arr[100006],Min=9999999999999,Max=0,_count=0,sum=0;
    cin>>n;
    REP(i,0,n)
    {
        cin>>a>>b;
        arr[a]++;
        if(Max<arr[a]) Max=arr[a];
        election.push_back(make_pair(a,b));
    }



    cout<<sum<<endl;
    return 0;
}
