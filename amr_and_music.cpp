#include<bits/stdc++.h>
#include<string>

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

int arr[10000][2];
bool instrument[1000];

int main()
{
    int a=0,b=0,c,d,i,j,k,l,n,m;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>arr[i][0];
        arr[i][1]=i+1;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i][0]>arr[j][0])
            {
                swap(arr[i][0],arr[j][0]);
                swap(arr[i][1],arr[j][1]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a+arr[i][0]<=m)
        {
            a+=arr[i][0];
            b++;
        }
        else break;
    }

    cout<<b<<endl;
    for(i=0;i<b;i++)
    {
        cout<<arr[i][1]<<" ";
    }
    cout<<endl;

	return 0;
}
