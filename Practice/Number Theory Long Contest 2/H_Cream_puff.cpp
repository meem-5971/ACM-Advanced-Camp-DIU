#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e12+7;

vector<ll>divisors;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
ll n;
cin>>n;

set<ll>ans;
for(ll i=1;i<=sqrt(n);i++){
   if(n%i==0){
        ans.insert(i);
        ans.insert(n/i);

   }
}
for(auto &u:ans){
    cout<<u<<endl;
}
return 0;
}