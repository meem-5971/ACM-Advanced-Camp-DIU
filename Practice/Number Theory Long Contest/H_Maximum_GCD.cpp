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
ll ans=0;
for(int i=1;i<=n/2;i++){
   ll t=i*2;
   if(t<=n){
    ans=max(ans,t/2);
   }
}
cout<<ans<<endl;
}
return 0;
}