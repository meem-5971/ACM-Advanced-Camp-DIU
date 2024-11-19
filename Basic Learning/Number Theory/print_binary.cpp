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
 
int num;
cin>>num;
for(int i=10;i>=0;i--){
   // cout<<((num>>i)&1);
    cout<<((num>>i)&1);

} 
return 0;
}