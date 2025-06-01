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
if(x%2==0 && y%2==0) cout<<"YES"<<endl;
else if(y%2==1 && x>=2 && x%2==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}