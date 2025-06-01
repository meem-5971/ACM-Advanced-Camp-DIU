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
string s;
cin>>s;
bool flag=false;
int tot=0;
for(int i=0;i<s.size()-1;i++){
  if(s[i]=='(' ){
       tot++;
    }
    else tot--;
    if(tot==0) {
        flag=true;
        break;
    }
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}