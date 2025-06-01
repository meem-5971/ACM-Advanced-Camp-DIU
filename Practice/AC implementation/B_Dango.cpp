#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
string s;
cin>>s;
int ans=-1;
int cnt=0;
bool found=false;
for(int i=0;i<n;i++){
  if(s[i]=='o'){
   cnt++;
   ans=max(ans,cnt);
}
else cnt=0;
}
if(ans==0 || ans==n) cout<<-1<<endl;
else cout<<ans<<endl;
 
return 0;
}