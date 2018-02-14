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

	int a,b,c,d,e,f,s,i,j,k,l,n,m,arr[10],min3=99,arr1[10],min1=999,min2=999,Min=9999999999999,Max=0,_count=0,sum=0;

    cin>>n>>m;
    REP(i,0,n)
    {
        cin>>arr[i];
        if(arr[i]<min1) min1=arr[i];
    }
    REP(i,0,m)
    {
        cin>>arr1[i];
        if(arr1[i]<min2) min2=arr1[i];
    }
    REP(i,0,n)
    {
        REP(j,0,m)
        {
            if(arr[i]==arr1[j])
            {
                if(arr[i]<min3) min3=arr[i];
            }
        }
    }

    if(min1==min2)
    {
        if(min3<min1) cout<<min3<<endl;
        else cout<<min1<<endl;
    }
    else
    {
        if(min3!=99) cout<<min3<<endl;
        else cout<<min(min1,min2)<<max(min1,min2)<<endl;
    }
    return 0;
}
