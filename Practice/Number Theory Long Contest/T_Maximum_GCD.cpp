#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[99];

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
cin>>t;
while(t--){
int n=0;
while(cin>>a[n]){
    n++;
}
for(auto u:a){
    cout<<u;
}
int ans=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        ans=max(ans,__gcd(a[i],a[j]));
    }
}
//cout<<ans<<endl;
}
return 0;
}