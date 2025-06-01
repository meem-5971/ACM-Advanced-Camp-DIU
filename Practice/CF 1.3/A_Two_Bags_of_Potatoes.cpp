#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int y,k,n;
cin>>y>>k>>n;
vector<int>ans;

for(int i=k;i<=n;i+=k){
    if(i<=n && i-y>0){
        ans.push_back(i-y);
    }
}
sort(ans.begin(),ans.end());
 if(ans.size()==0) cout<<-1<<endl;
 else{
    for(auto u:ans){
        cout<<u<<" ";
    }
    cout<<endl;
 }
return 0;
}