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
ll n;
cin>>n;
bool flag=true;
int a=1,b=1,c=1;
for(int i=2;i*i<=n;i++){
    if(n%i==0){
    a=i;
    n/=a;
    break;
    }
}

for(int i=a+1;i*i<n;i++){
    if(n%i==0){
    b=i;
   c=n/i;
   break;
    }
}
if(b<c){
    cout<<"YES"<<endl;
    cout<<a<<" "<<b<<" "<<c<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}