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
int n,k;
cin>>n>>k;
int sum=0;
for(int i=0;i<n;i++){
int x;
cin>>x;
sum+=x;
}
if(sum==(k*n)) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}