
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

    int n,ans=1,x;
    queue<int> one,two;
    cin>>n;
    cin>>n;
    REP(i,0,n)
    {
        cin>>x;
        one.push(x);
    }
    cin>>n;
    REP(i,0,n)
    {
        cin>>x;
        two.push(x);
    }

    for(int i=0;i<4000000;i++)
    {
        int a=one.front();
        int b=two.front();
        one.pop();
        two.pop();

        if(a>b)
        {
            one.push(b);
            one.push(a);
        }
        else
        {
            two.push(a);
            two.push(b);
        }
        if(one.empty())
        {
            cout<<ans<<" "<<2<<endl;
            return 0;
        }
        else if(two.empty())
        {
            cout<<ans<<" "<<1<<endl;
            return 0;
        }
        ans++;
    }
    cout<<-1<<endl;
    return 0;
}
