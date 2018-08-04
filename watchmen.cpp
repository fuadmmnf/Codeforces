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
struct point
{
    LL x,y;
};


bool compX(const point &a, const point &b)
{
    if(a.x==b.x) return a.y>b.y;
    return a.x>b.x;
}
bool compY(const point &a, const point &b)
{
    if(a.y==b.y) return a.x>b.x;
    return a.y>b.y;
}


LL combination(LL n, LL k) {
    if (k > n) {
        return 0;
    }
    unsigned long long r = 1;
    for (LL d = 1; d <= k; ++d) {
        r *= n--;
        r /= d;
    }
    return r;
}





int main()
{

    LL n,counter,ans=0,a,b,same=1;
    cin>>n;
    vector<point> arr;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        point temp;
        temp.x=a; temp.y=b;
        arr.push_back(temp);
    }
    //cout<<"ASDSAD"<<endl;
    sort(arr.begin(),arr.end(),compX);
    counter=1;

    for(int i=0;i<arr.size()-1;i++)
    {

        if(arr[i].x==arr[i+1].x)
        {
            if(arr[i].y==arr[i+1].y)
            {
                same++;
                continue;
            }

            counter++;

        }
    }
    ans+=combination(counter,2);
    sort(arr.begin(),arr.end(),compY);

    counter=1;
    for(int i=0;i<arr.size()-1;i++)
    {

        if(arr[i].y==arr[i+1].y)
        {
            if(arr[i].x==arr[i+1].x) continue;
            counter++;
        }
    }
    ans+=combination(counter,2);
    ans-=combination(same,2);

    cout<<ans<<endl;
    return 0;
}
