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
ll n,k;
cin>>n>>k;
string ans(n,'a');

for(ll i=n-2;i>=0;i--){
    ll nok=n-1-i;
    if(k<=nok){
        ans[i]='b';
        ans[n-k]='b';
        cout<<ans<<endl;
        break;
    }
    k-=nok;
    
}

}
return 0;
}