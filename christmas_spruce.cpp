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
struct node
{
    vector<int> child;
    bool isLeaf=true;
};


int main()
{

//	LL a,b,c,d,e,f,s,i,j,k,l,n,m,arr[100001],Min=9999999999999,Max=0,_count=0,sum=0;

    int n,j;
    cin>>n;
    struct node tree[n+1];
    REP(i,1,n)
    {

        cin>>j;
        tree[j].isLeaf=false;
        tree[j].child.push_back(i+1);
    }
    if(tree[1].isLeaf)
    {
        cout<<"No"<<endl;
        return 0;
    }
    REP(i,1,n+1)
    {
        if(!tree[i].isLeaf)
        {
            int num=0;
            for(j=0;j<tree[i].child.size();j++)
            {
                if(tree[tree[i].child[j]].isLeaf) num++;
                if(num==3) break;
            }
            if(num<3)
            {
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
