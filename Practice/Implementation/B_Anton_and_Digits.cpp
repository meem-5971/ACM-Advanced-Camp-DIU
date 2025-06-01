#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int k2,k3,k5,k6;
cin>>k2>>k3>>k5>>k6;

ll ans=0;
int lrg=min(k2,min(k5,k6));
ans+=(lrg*256);

k2-=lrg;
k2=max(0,k2);
int sm=min(k2,k3);
ans+=sm*32;

cout<<ans<<endl;


 
return 0;
}