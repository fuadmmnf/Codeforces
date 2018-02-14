
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

/*
template <class ForwardIterator>
  bool is_sorted (ForwardIterator first, ForwardIterator last)
{
  if (first==last) return true;
  ForwardIterator next = first;
  while (++next!=last) {
    if (*next<*first)     // or, if (comp(*next,*first)) for version (2)
      return false;
    ++first;
  }
  return true;
}
*/


/*
bool prime[100001];
void SieveOfEratosthenes(int n)
{


    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}

*/



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	LL a,b,c,d,e,f,s,i,j,k,l,n,m,arr[200],arr1[100001][2],Min=9999999999999,Max=0,_count=0,sum=0;
    cin>>n;
    int start,finish;
    REP(i,0,2*n)
    {
        cin>>arr[i];
    }
    k=0;
    REP(i,0,2*n)
    {
        _count=0;
        REP(j,0,2*n)
        {
            _count+=abs(arr[i]-arr[j]);
        }
        arr1[i][0]=_count;
        arr1[i][1]=i;
    }

    sort(arr1,arr1+2*n);
    REP(i,0,2*n-2)
    {
        sum+=abs(arr[arr1[i][1]]-arr[arr1[i+1][1]]);
    }
    cout<<sum<<endl;
    return 0;
}
