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
int n,d;
cin>>n>>d;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a.begin(),a.end());
if(a[n-1]<=d || a[0]+a[1]<=d){
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;
}
return 0;
}