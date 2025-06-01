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
int a,b,n;
cin>>a>>b>>n;
int cnt=0;
while(1){
    if(a>n || b>n) break;
 if(a<b){
    a+=b;
 }
 else{
    b+=a;
 }
 cnt++;
}
cout<<cnt<<endl;
}
return 0;
}