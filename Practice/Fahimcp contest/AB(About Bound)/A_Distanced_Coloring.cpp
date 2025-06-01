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
int a,b,k;
cin>>a>>b>>k;
if(a>=k && b>=k){
    cout<<k*k<<endl;
}
else if(a<k && b<k){
    cout<<a*b<<endl;
}
else{
    cout<<min(a,b)*k<<endl;
}
}
return 0;
}