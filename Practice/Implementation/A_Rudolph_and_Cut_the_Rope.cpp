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
int ans=0;
while(n--){
    int x,y;
    cin>>x>>y;
    if(x>y) ans++;
}
cout<<ans<<endl;
}
return 0;
}