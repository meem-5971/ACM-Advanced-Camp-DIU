#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
cin>>t;
while(t--){
int n;
cin>>n;
map<int,int>mp;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
}
int ans=0;
for(auto u:mp){
    ans=max(ans,u.second);
}
cout<<n-ans<<endl;
}
return 0;
}