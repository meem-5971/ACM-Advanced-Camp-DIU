#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,b,d;
cin>>n>>b>>d;
vector<int>a(n);
int ans=0,sum=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<b){
        sum+=a[i];
    }
    if(sum>=d){
        ans++;
        sum=0;
    }
}
 cout<<ans<<endl;
return 0;
}