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
int a,b;
cin>>a>>b;
if(a==b) cout<<0<<endl;
else if(a>b && (a-b)%2==1){
    cout<<2<<endl;
}
else if(a<b && (a-b)%2==0){
    cout<<2<<endl;
}
else{
    cout<<1<<endl;
}
}
return 0;
}