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
    int x, y; cin >> x >> y;
    
    if (y == x+1 || ((x+1) % 9 == y % 9 && x > y)) cout<<"Yes"<<endl;
        
    else cout<<"No"<<endl;
}
return 0;
}