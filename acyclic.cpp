#include <bits/stdc++.h>
using namespace std;

const int N = 3e5 + 100;
bool vis[N];
int sum=0;
vector <long long> edges[N];
void dfs(int node, int par){
    vis[node] = true;
    for(int i = 0; i < edges[node].size(); i++){
        int child = edges[node][i];
        if(!vis[child]){
            dfs(child, node);
        }
        else if(child != par){ // this case 1 - 2 ... here i came to node 2 from node 1 so if y (2) != par (1) but if this is
                            // not the case, then there is a cycle
                            //suppose 1 - 2, 2 - 3, 3 - 1...i start from node 1, then go to node 2 in node 2 there are 2 edges
                            // and they are 1 and 3. 1 is the parent of node 2 and so i wont consider it as the graph is undirected
                            // but if it is directed then you dont need this condition
                            // then i will go to node 3 from node. in node 3 there are 2 edges which goes to node 2 and node 1
                            //node 2 is my parent and i won't consider it but node 1 is already visited and so there is a cycle
           sum++;
            //do something
        }
    }
}


int main(){
    int nodes, edgeNumber;
    cin >> nodes >> edgeNumber;
    while(edgeNumber--){
        int x, y;
        cin >> x >> y;
        edges[x].push_back(y);
        edges[y].push_back(x);

    }

    for(int i = 1; i <= nodes; i++){
        if(!vis[i]){
            dfs(i, -1);
        }
    }
    if(sum>1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}

