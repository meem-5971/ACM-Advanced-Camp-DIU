#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>a(n);
int mx=INT_MIN;
for(int i=0;i<n;i++){
    cin>>a[i];
    mx=max(mx,a[i]);

}
int ans=0;
for(int i=0;i<n;i++){
if(a[i]<mx){
    ans+=(mx-a[i]);
}

}
cout<<ans<<endl;
 
return 0;
}