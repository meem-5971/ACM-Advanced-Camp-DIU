#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 
int n;
cin>>n;
vector<int>prime_factors;
for(int i=2;i<=sqrt(n);++i){
    while(n%i==0){
        prime_factors.push_back(i);
        n/=i;
    }
}
if(n>1){
    prime_factors.push_back(n);
}

for(auto u : prime_factors){
 cout<<u<<" ";
}

return 0;
}