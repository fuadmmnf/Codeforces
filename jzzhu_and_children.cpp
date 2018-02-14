#include<bits/stdc++.h>
#include<string>
#include<string.h>


typedef long long LL;
#define vector<int> Vi;
#define pair<int, int> ii;
#define vector<ii> Vii;
#define set<int> Si;
#define map<string, int> MSi;


#define REP(i,a,b)   for (int i =(int)a; i <int(b); i++)
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)

#define setarr(arr,val) memset(arr,val,sizeof(arr));


using namespace std;

int arr[100002];
queue<int> line;

int main()
{

    int a,b,c,d,i,j,k,l,n,m;
    cin>>n>>a;

    REP(i,0,n)
    {
        cin>>arr[i];
        line.push(i);
    }
    for( ;line.empty()==false ; )
    {
        b=line.front();
        arr[b]-=a;
        line.pop();
        if(arr[b]>0) line.push(b);
    }
    cout<<b+1<<endl;


	return 0;
}
