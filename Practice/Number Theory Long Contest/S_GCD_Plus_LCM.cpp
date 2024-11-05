#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD=1e8+10;
void solve(){
        
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
cin>>t;
while(t--){
int a,b,x,y;
cin>>a>>b;
ll gcd =__gcd(a,b);
ll lcm=a*(b/gcd);

if(gcd+lcm ==a+b){
    cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}
}
return 0;
}