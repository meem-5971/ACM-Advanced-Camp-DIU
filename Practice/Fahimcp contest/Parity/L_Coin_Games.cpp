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
int count=0;
for(int i=0;i<n;i++){
    if(s[i]=='U') count++;
}
if(count%2==0) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}
return 0;
}