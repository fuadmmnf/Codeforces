#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <sstream>
#include <iterator>
#include<iostream>
#include<stdio.h>
using namespace std;

bool possible[100006];
bool isCat[100006];
bool visited[100006];
int V,E,m;
vector<int> adj[100006];

void dfs(int src,int consec)
{
    visited[src]=true;
    if(isCat[src]) consec++;
    else consec=0;

    if(consec<=m)
    {
        possible[src]=true;
        for(int i=0;i<adj[src].size();i++)
            if(!visited[adj[src][i]]) dfs(adj[src][i],consec);
    }
}

int main()
{
    int a,b,ans=0;
    cin>>V>>m;
    for(int i=1;i<=V;i++) cin>>isCat[i];
    for(int i=0;i<V-1;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(possible,false,sizeof(possible));
    memset(visited,false,sizeof(visited));
    dfs(1,0);

    for(int i=2;i<=V;i++)
    {
        if(adj[i].size()==1 && possible[i]) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
