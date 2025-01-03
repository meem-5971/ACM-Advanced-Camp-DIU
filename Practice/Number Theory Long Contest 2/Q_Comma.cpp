#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll ans=0;

if (n>=1000) ans+=n-999;
if (n>=1000000) ans+=n-999999;
if (n>=1000000000) ans+=n-999999999;
if (n>=1000000000000) ans+=n-999999999999;
if (n>=1000000000000000) ans+=n-999999999999999;
cout<<ans<<endl; 
return 0;
}