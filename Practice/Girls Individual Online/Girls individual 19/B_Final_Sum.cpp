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
int n,q;
cin>>n>>q;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
map<int,int>mp;
mp[0]=a[0];
ll sum=a[0];
for(int i=1;i<n;i++){
sum+=a[i];
mp[i]=sum;
}
while(q--){
    int l,r;
    cin>>l>>r;
    if(abs(r-l)%2==0) sum++;
}
cout<<sum<<endl;
}
return 0;
}