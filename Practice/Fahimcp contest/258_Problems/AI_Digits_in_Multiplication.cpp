#include<bits/stdc++.h>
#include <climits>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll ans=LLONG_MAX;
for(int i=1;i*i<=n;i++){
    if(n%i==0){
        ll sm=i;
        ll lg=n/i;
        string s1=to_string(sm);
        string s2=to_string(lg);
        ll p=(max(s1.size(),s2.size()));
        ans=min(ans,p);
    }
}
cout<<ans<<endl;
 
return 0;
}