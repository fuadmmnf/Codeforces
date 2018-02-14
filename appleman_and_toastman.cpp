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

int arr[300001];
int main()
{

    LL a,b,c,d,i,j,k,l,n,sum=0,last=0,finalsum=0;
    cin>>n;
    REP(i,0,n)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    finalsum+=sum;
    sort(arr,arr+n);

    REP(i,0,n-1)
    {
        finalsum+=arr[i];
         sum-=arr[i];
        finalsum+=sum;

    }
    cout<<finalsum<<endl;

	return 0;
}
