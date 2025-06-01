#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
   ll a,b,n;
   cin>>a>>b>>n; 
   if(a%n)
   cout<<((b/n)-(a/n))<<endl;
   else cout<<((b/n)-(a/n))+1<<endl;  
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
solve();
return 0;
}