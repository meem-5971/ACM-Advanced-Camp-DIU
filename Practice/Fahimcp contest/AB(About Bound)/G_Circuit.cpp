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
vector<int>a(2*n);
int z=0,o=0;
for(int i=0;i<2*n;i++){
cin>>a[i];
if(a[i]==0) z++;
else o++;
}
int ans1=0,ans2=0;
if(z%2==1){
cout<<1<<' '<<min(z,o)<<endl;
}
else{
    cout<<0<<' '<<min(z,o)<<endl;
}
}
return 0;
}