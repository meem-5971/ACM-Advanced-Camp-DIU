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
int g=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    g=__gcd(g,a[i]);
}
int ans=0;
for(int i=0;i<n;i++){
a[i]/=g;
while(a[i]%2==0){
    a[i]/=2;
    ans++;
}
while(a[i]%3==0){
    a[i]/=3;
    ans++;
}
if(a[i]!=1) {
    cout<<-1<<endl;
    return 0;
}
}
cout<<ans<<endl;

return 0;
}