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
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
int ans=0;
for(int i=n-1;i>=1;i--){
    if(a[i-1]!=a[i]){
        ans=i;
        break;
    }
}
if(ans<k) cout<<ans<<endl;
else cout<<-1<<endl;
 
return 0;
}