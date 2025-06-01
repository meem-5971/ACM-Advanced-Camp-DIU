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
int n,x;
cin>>n>>x;
int ans=1;
int apt=2;
if(n<3) cout<<1<<endl;
else{
    while(apt<n){
        apt+=x;
        ans++;
    }
    cout<<ans<<endl;
}
}
return 0;
}