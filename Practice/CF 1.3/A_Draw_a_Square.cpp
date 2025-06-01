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
int l,r,d,u;
cin>>l>>r>>d>>u;
if(abs(l)==abs(r)&& abs(r)==abs(d) && abs(d)==abs(u)) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
return 0;
}