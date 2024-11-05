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
vector<int>a(n);
map<int,int>mp;
ll sum=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]%3]++;
    sum+=a[i];
}
if(sum%3==0){
    cout<<0<<endl;
}
else if(sum%3==1 && mp[1]){
    cout<<1<<endl;
}
else if(sum%3==2){
    cout<<1<<endl;
}
else{
    cout<<2<<endl;
}



}
return 0;
}