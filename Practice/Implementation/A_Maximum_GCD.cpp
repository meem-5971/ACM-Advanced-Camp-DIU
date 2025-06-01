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
int n;
cin>>n;
int ans=0;
for(int i=n;i>=1;i--){
    if(i%2==0){
        ans=i/2;
        break;
    }
}
cout<<ans<<endl;
}
return 0;
}