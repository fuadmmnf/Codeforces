#include<bits/stdc++.h>

typedef long long LL;
#define vector<int> Vi;
#define pair<int, int> ii;
#define vector<ii> Vii;
#define set<int> Si;
#define map<string, int> MSi;


#define REP(i,a,b)   for (int i =(int)a; i <int(b); i++)

#define rREP(i,a,b) for(int i=(int a);i>b;i--)
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)

#define setarr(arr,val) memset(arr,val,sizeof(arr));
#define pf() printf()
#define sf() scanf()
#define r0 return 0
#define Bigint __int128_t


using namespace std;

bool valid[100001];
bool res[100001];

int main()
{

    bool right;
	LL a,b,c,d=0,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;
    setarr(valid,false);
    string valids,s2,s3,clue;
    cin.ignore();
    getline(cin,valids);
    for(i=0;valids[i];i++)
    {
        valid[valids[i]-'a']=true;
    }
    cin.ignore();
    getline(cin,clue);
    for(i=0;clue[i];i++)
    {
        if(clue[i]=='*') _count=1;
    }
    a=clue.size();
    cin>>n;

    while(n--)
    {
        cin.ignore();
        getline(cin,s2);
        right=true;
        if(a==s2.size() || (a-1==s2.size() && _count))
        {


            for(i=0;s2[i];i++)
                {

                    if(s2[i]!=clue[i])
                    {
                        if(clue[i]=='?')
                        {
                            if(valid[s2[i]-'a']==false)
                            {
                                right=false;
                                break;
                            }


                        }
                        else if(clue[i]=='*')
                        {
                            if(valid[s2[i]-'a']==true)
                            {
                                right=false;
                                break;
                            }
                        }
                        else
                        {
                            right=false;
                            break;
                        }
                    }

                }
        }
        else right=false;
            res[d++]=right;
    }


    REP(i,0,d)
    {
        if(res[i]==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    r0;
}
