#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll getodd(int n){
      if(n%2==0) return n/2;
      else return (n/2)+1;  
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
cin>>t;
while(t--){
int x,y;
cin>>x>>y;
int cnt=getodd(x)-getodd(x-y);
if(cnt%2==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}