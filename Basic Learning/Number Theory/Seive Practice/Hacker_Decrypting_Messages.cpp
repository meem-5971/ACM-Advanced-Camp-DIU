#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e6+10;

int a[N];
int hp[N];
int canRemove[N];
int vis[N];

vector<int> distinctPF(int x){
    vector<int>ans;
while(x>1){
    int pf=hp[x];
    while(x%pf==0){
        x/=pf;
    }
    ans.push_back(pf);
}
return ans;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

for(int i=2;i<N;i++){
    if(hp[i]==0){
    for(int j=i;j<N;j+=i){
        hp[j]=i;

        }
    }
}
 
int n,q;
cin>>n>>q;

for(int i=0;i<n;i++){
    int x;
    cin>>x;
    vis[x]=1;
}
for(int i=2;i<N;i++){
    if(vis[i]){
         for(ll j=i;j<N;j*=i){
         canRemove[j]=1;
         }
    }
   
}
while(q--){
    int x;
    cin>>x;
    vector<int>pf=distinctPF(x);
        bool found=false;
    for(int i=0;i<pf.size();i++){
        for(int j=i;j<pf.size();j++){
        int prod=pf[i]*pf[j];

        if(i==j && x%prod!=0) continue;
        int toRemove=x/prod;
        if(canRemove[toRemove]==1){
            found=true;
            break;
        }
        }
        if(found) break;
    }
    if(found) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}