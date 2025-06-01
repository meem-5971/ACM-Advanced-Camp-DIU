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
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
int x=*max_element(a.begin(),a.end());
bool flag=true;

map<int,bool>mp;
mp[a[0]]=true;
for(int i=1;i<n;i++){
    if(mp[a[i]-1]==false && mp[a[i]+1]==false){
        flag=false;
        break;
    }
    else{
        mp[a[i]]=true;
    }
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}