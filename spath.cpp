#include <bits/stdc++.h>

using namespace std;

bool visited[100005];
int spath[100005];
queue<int> line;
vector<int> directed[1000005];
vector<int>::iterator it;

int bfs(int start)
{
    spath[start]=0;
    while(line.empty()==false)
    {
        int top=line.front();

            visited[top]=true;

            for(it=directed[top].begin(); it!=directed[top].end();it++ )
            {
                if(visited[*(it)]==false)
                {
                    line.push(*(it));
                    spath[*(it)]=spath[top]+1;
                }
            }
        line.pop();
    }

    return 0;
}


int main() {
    int a,b,n,m,v,i,j;
    cin >> n >> m >> v;
    line.push(v);
    memset(visited,false,sizeof(visited));
    memset(spath,-1,sizeof(spath));
    spath[v]=0;
    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        directed[a].push_back(b);
    }
    bfs(v);
    for(i=1;i<=n;i++)
    {
        cout<<spath[i]<<" ";
    }
    return 0;
}
