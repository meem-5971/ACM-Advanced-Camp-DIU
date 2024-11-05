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
vector<int>div;
for(int i=1;i*i<=n;i++){
    if(n%i==0){
        div.push_back(i);
        if(n/i!=i)
        div.push_back(n/i);
    }
}
for(auto u : div){
cout << u <<" ";
}
return 0;
}