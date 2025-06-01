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
for(int i=n/2;i>=1;i--){
    cout<<i<<" ";
}
for(int i=(n/2)+1;i<=n;i++){
    cout<<i<<" ";
}
cout<<endl;
}
return 0;
}