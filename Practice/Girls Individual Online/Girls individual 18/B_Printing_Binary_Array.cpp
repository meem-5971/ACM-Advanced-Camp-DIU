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
vector<int>ans;
while(n--){
    int x;
    cin>>x;
    if(x==0) ans.push_back(1);
    else ans.push_back(0);
}
for(auto u:ans) cout<<u<<" ";
cout<<endl;
}
return 0;
}