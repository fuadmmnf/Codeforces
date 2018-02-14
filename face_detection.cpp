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

	LL a,b,c,d,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;
	bool detect[5];
    string face[100];
    cin>>n>>m;
    REP(i,0,n) cin>>face[i];
    i=0;

    while((n>1 && m>1) && i<n-1)
    {
       j=0;
        while(j<m-1)
        {
            setarr(detect,false);
            if(face[i][j]=='f') detect[0]=true;
            else if (face[i][j]=='a') detect[1]=true;
            else if(face[i][j]=='c') detect[2]=true;
            else if(face[i][j]=='e') detect[3]=true;

             if(face[i][j+1]=='f') detect[0]=true;
            else if (face[i][j+1]=='a') detect[1]=true;
            else if(face[i][j+1]=='c') detect[2]=true;
            else if(face[i][j+1]=='e') detect[3]=true;

             if(face[i+1][j]=='f') detect[0]=true;
            else if (face[i+1][j]=='a') detect[1]=true;
            else if(face[i+1][j]=='c') detect[2]=true;
            else if(face[i+1][j]=='e') detect[3]=true;

             if(face[i+1][j+1]=='f') detect[0]=true;
            else if (face[i+1][j+1]=='a') detect[1]=true;
            else if(face[i+1][j+1]=='c') detect[2]=true;
            else if(face[i+1][j+1]=='e') detect[3]=true;

            if(detect[0]==true && detect[1]==true && detect[2]==true && detect[3]==true ) _count++;
            j++;
        }

        i++;
    }
    cout<<_count<<endl;
    r0;
}
