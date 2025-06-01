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
set<int>s;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
    s.insert(a[i]);
}
vector<char>ans;
ans.push_back('R');
if(s.size()==1) cout<<"NO"<<endl;

else{
    bool flag=false;
for(int i=1;i<n;i++){
    if(a[i]==a[i-1] && flag==false){
        ans.push_back('B');
        flag=true;
    }
    else {
    if(i==n-1 && flag==false) ans.push_back('B');
    else  ans.push_back('R');  
    }
}
cout<<"YES"<<endl;
for(auto u:ans){
    cout<<u;
}
cout<<endl;
}
}
return 0;
}