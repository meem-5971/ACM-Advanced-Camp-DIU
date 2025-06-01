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
int x,y;
cin>>x>>y;
int ans=abs(x+y);
if(abs(x-y)>=2){
    ans+=abs(x-y);
    ans--;
}
cout<<ans<<endl;
}
return 0;
}