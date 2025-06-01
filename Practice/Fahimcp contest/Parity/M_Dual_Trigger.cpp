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
string s;
cin>>s;
int cnt=0;
int mn=INT_MAX, mx=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='1') {
        cnt++;
        mn=min(mn,i);
        mx=max(mx,i);
    }
    
}
if(cnt%2==1 ||(cnt==2 && (mx-mn)==1)) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}
return 0;
}