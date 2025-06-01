#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,a,b;
cin>>n>>a>>b;

vector<ll>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

ll sum=0;
for(int i=1;i<n;i++){
 sum+=min(abs(v[i]-v[i-1])*a,b);
}
 cout<<sum<<endl;
return 0;
}