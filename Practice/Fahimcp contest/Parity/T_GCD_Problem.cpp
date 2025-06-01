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
if(n%2==0){
    cout<<"2 "<<n-3<<" 1"<<endl;
}
else{
    int num=(n-1)/2;
    if(num%2==0) cout<<num-1<<" "<<num+1<<" 1"<<endl;
    else cout<<num-2<<" "<<num+2<<" 1"<<endl;
}
}
return 0;
}