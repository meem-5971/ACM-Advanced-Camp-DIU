#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
string s;
cin>>s;
vector<vector<int>>a(m+1);
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a[x].push_back(i);
}
string ans;
ans=s;
for(int i=1;i<=m;i++){
    auto &color=a[i];
int k=a[i].size();
if(k==0) continue;
for(int j=0;j<k;j++){
    ans[color[(j+1)%k]]=s[color[j]];
}
}
cout<<ans<<endl;
return 0;
}