
#include<bits/stdc++.h>

typedef long long LL;
/*
#define vector<int> Vi;
#define pair<int, int> ii;
#define vector<ii> Vii;
#define set<int> Si;
#define map<string, int> MSi;

*/
#define REP(i,a,b)   for (int i =(int)a; i <int(b); i++)
/*
#define rREP(i,a,b) for(int i=(int a);i>b;i--)
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)
*/
#define setarr(arr,val) memset(arr,val,sizeof(arr));
#define pf() printf()
#define sf() scanf()
#define r0 return 0
#define Bigint __int128_t


using namespace std;


/*
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
*/



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL a=0,b,c=1,d=1,i,j,k,l,e,f,g,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0,s=0,p=0;
    string str[200],str2[200];
    bool color[3];
    char ch;
    cin>>n>>m;

    REP(i,0,n) cin>>str[i];

    if(n%3!=0 && m%3!=0) cout<<"NO"<<endl;
    else
    {

         REP(i,0,n)
        {
            ch=str[i][0];
            REP(j,1,m)
            {
                if(str[i][j]!=ch)
                {
                    d=0;
                    break;
                }
            }
            if(d==0) break;
        }

          REP(i,0,m)
        {
            ch=str[0][i];
            REP(j,1,n)
            {
                if(str[j][i]!=ch)
                {
                    c=0;
                    break;
                }
            }
            if(c==0) break;
        }

        if(n%3==0 && m%3!=0 && d==0)
        {
            cout<<"NO"<<endl;
            r0;
        }
        else if(m%3==0 && n%3!=0 && c==0)
        {
            cout<<"NO"<<endl;
            r0;
        }
        else if(m%3==0 && n%3==0 && d==0 && c==0)
        {
            cout<<"NO"<<endl;
            r0;
        }
        if(n%3==0)
        {
            a=n/3;
             k=0;


            REP(i,0,3)
            {

                l=k;
                for(j=0;j<a-1;j++,l++)
                {
                    if(str[l]!=str[l+1])
                    {
                        cout<<"NO"<<endl;
                        r0;
                    }
                }
                k+=a;
            }
            cout<<"YES"<<endl;
            r0;
        }
        if(m%3==0)
        {
            a=m/3;


            k=0;
            REP(i,0,3)
            {

                l=k;
                for(j=0;j<a-1;j++,l++)
                {
                    for(e=0;e<n;e++)
                    {

                        if(str[e][l]!=str[e][l+1])
                        {
                            cout<<"NO"<<endl;
                            r0;
                        }
                    }
                }
                k+=a;
            }
             cout<<"YES"<<endl;
            r0;
        }

    }
    r0;
}
