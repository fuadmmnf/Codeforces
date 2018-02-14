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
int n,a,b,c,arr[10004];

int ribbons(int left,int step)
{
    if(left==0) return step;
    if(left<0) return -1;
    if(arr[left]!=-1) return arr[left];


    int Max=0;
    Max=max(Max,ribbons(left-a,step+1));
    Max=max(Max,ribbons(left-b,step+1));
    Max=max(Max,ribbons(left-c,step+1));

    return arr[left]=Max;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    int o[5];
	//LL a,b,c,d,e,f,s,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;
    cin>>n;
    cin>>o[0]>>o[1]>>o[2];
    sort(o,o+3);
    a=o[0];
    b=o[1];
    c=o[2];
    setarr(arr,-1);
    cout<<ribbons(n,0)<<endl;
    return 0;

}
