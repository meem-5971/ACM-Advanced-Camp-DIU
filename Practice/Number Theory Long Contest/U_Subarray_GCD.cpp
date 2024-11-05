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
vector<int>a(n+1);
int ans;
for(int i=1;i<=n;i++){
    cin>>a[i];
    if(i==1){
        ans=a[i];
    }
    else{
        ans=__gcd(ans,a[i]);
    }
}
if(ans==1){
    cout<<n<<endl;
}
else{
    cout<<-1<<endl;
}

}
return 0;
}