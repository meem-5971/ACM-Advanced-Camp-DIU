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
int cnt=0;
bool flag=false;
if(n==2){
    if(a[0]==0 && a[1]==0) cout<<0<<endl;
    else cout<<1<<endl;
    continue;
}
if(n==1){
    if(a[0]==0) cout<<0<<endl;
    else cout<<1<<endl;
    continue;
}
vector<int>ans;
for(int i=0;i<n-1;i++){
    if(i==0 && a[i]!=0) ans.push_back(i);
    else if(a[i]==0 && a[i+1]!=0){
      ans.push_back(i);
       
    }
}
if(ans.size()>1) cout<<2<<endl;
else if(ans.size()==1) cout<<1<<endl;
else cout<<0<<endl;
}
return 0;
}