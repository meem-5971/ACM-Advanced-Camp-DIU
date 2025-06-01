#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int k,r;
cin>>k>>r;
int i=1;
int ans=1;
while((k*i)%10!=0 && (k*i)%10!=r){
 ans++;
 i++;
}
cout<<ans<<endl;
return 0;
}