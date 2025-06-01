#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,t;
cin>>n>>t;
int rem=240-t;
int ans=0;
for(int i=1;i<=n;i++){
rem-=(i*5);
if(rem>=0) ans++;
else break;
}
cout<<ans<<endl;
 
return 0;
}