#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=55;
int n,m;
vector<int>adj[N];
vector<int>vis(N,0);
int intime[N];
int lowtime[N];
int ans=0;
int timer=1;
void dfs(int node,int parent){
      vis[node]=1;
      intime[node]=lowtime[node]=timer;
      timer++;
      for(auto child:adj[node]){
            if(child==parent) continue;
            if(vis[child]==0){
                  dfs(child,node);
                  lowtime[node]=min(lowtime[node],lowtime[child]);
                  if(lowtime[child]>intime[node]) ans++;
            }
            else{
                  lowtime[node]=min(lowtime[node],intime[child]);
                  //if(lowtime[child]>intime[node]) ans++;
            }
      }
}
void solve(){
    
      cin>>n>>m;
    
      for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
      }  
      dfs(1,-1);

      cout<<ans<<endl;

}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
return 0;
}