#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
int edges[11][11];
bool visited[11];
int ans;
void dfs(int node, int cost){
    visited[node]=true;
    ans=max(ans,cost);
    for(int i=1;i<=n;i++){
        if(!visited[i] && edges[i][node]){
            dfs(i, cost+edges[node][i]);
        }
    }
    visited[node]=false; //backtracking
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n>>m;
for(int i=0;i<m;i++){
    int a,b,c;
    cin>>a>>b>>c;
    edges[a][b]=edges[b][a]=c;
}
for(int i=1;i<=n;i++){
    dfs(i,0);
}
 cout<<ans<<endl;
return 0;
}