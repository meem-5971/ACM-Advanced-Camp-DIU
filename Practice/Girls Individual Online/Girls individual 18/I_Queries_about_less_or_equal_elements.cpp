#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a.begin(),a.end());
while(m--){
    int x;
    cin>>x;
    cout<<upper_bound(a.begin(),a.end(),x)-a.begin()<<" ";
}
return 0;
}