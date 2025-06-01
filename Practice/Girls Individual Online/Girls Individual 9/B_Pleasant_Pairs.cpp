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
vector<int>a(n+2);
vector<int>id(2*n+1,-1);
for(int i=1;i<=n;i++){
cin>>a[i];
id[a[i]]=i;
}
int ans=0;
for(int i=3;i<2*n;i++){
    for(int j=1;j*j<i;j++){
        if(i%j==0 && id[j]!=-1 && id[i/j]!=-1 && id[j]+id[i/j]==i){
            ans++;
        }
    }
}
cout<<ans<<endl;
}
return 0;
}