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
int cnt=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==2) cnt++;
}
if(cnt%2==1){
    cout<<-1<<endl;
    continue;
}
else if(cnt==0){
    cout<<1<<endl;
    continue;
}
int d=cnt/2;
int ans=0,res=0;
for(int i=0;i<n;i++){
  if(a[i]==2) ans++;
  if(ans==d) {
    res=i+1;
    break;
}

}
cout<<res<<endl;
}
return 0;
}