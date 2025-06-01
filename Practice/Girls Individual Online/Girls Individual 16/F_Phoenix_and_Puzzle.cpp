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
ll ans=1;
bool flag=false;
for(int i=1;i<=32;i++){
ans=ans*2;
if(ans==n){
    flag=true;
    break;
}
if(ans>n) break;
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}