#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
ll k,a,b;
cin>>k>>a>>b;
ll ans=1;
if(b<=a+1){ // Just hit the pocket K times
    ans+=k;
    cout<<ans<<endl;
    return 0;
}
if(k<=a){// Not enough operations to enter the exchange loop
    ans+=k;
    cout<<ans<<endl;
    return 0;
}
k-=(a-1); // Use (A - 1) hits to reach A biscuits
ans=a;

ans+=((k/2)*(b-a));// Each cycle takes 2 operations and increases biscuits by (B - A)

if(k%2==1) ans++;

cout<<ans<<endl;



return 0;
}