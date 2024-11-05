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
int l,r;
cin>>l>>r;
int oddc=0;
for(int i=l;i<=r;i++){
if(i%2==1){
    oddc++;
}
}
cout<<oddc/2<<endl;
}
return 0;
}