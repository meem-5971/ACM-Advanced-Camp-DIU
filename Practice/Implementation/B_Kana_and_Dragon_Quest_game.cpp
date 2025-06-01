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
int x,n,m;
cin>>x>>n>>m;
int p=n,q=m;
while(n && (x/2)+10<x){
    if(x<=0) break;
    x=(x/2)+10;
  
    n--;
   
}
if(x<=m*10) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}