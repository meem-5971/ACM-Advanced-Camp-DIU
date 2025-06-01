#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 

int n,d;
cin>>n>>d;
d*=d;
vector<pair<ll,ll>>pos(n);
    for(int i=0;i<n;i++){
       
       cin>> pos[i].first>>pos[i].second;
    }
vector<vector<ll>>graph(n);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j) continue;//same person
        ll dx=pos[i].first-pos[j].first;
        ll dy=pos[i].second-pos[j].second;
        if(dx*dx+dy*dy<=d){
            graph[i].push_back(j);
        }
    }
}
//BFS traversal
vector<bool>infected(n,false);
infected[0]=true;
queue<ll>q;
q.push(0);
while(!q.empty()){
    ll cur=q.front();
    q.pop();
    for(ll neighbor:graph[cur]){
        if(!infected[neighbor]){
            infected[neighbor]=true;
            q.push(neighbor);
        }
    }
}
for(int i=0;i<n;i++){
    if(infected[i]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

return 0;
}