#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
ll ans=1;
for(int i=2;i*i<n;i++){
    ll cur=i*i;
    while(cur<=n){
        ans=max(ans,cur);
        cur*=i;
    }
}
 cout<<ans<<endl;
return 0;
}