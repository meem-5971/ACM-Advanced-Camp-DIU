#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,k;
cin>>n>>k;
int ans=-2000000000;
while(n--){
    int f,t;
    cin>>f>>t;
    int cur=f;
    if(t>k){
        cur-=(t-k);
    }
ans=max(ans,cur);
}
cout<<ans<<endl;
 
return 0;
}