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
int n,x;
cin>>n>>x;
vector<int>a(n);
int cnt=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%2==1) cnt++;
}
int ev=abs(cnt-n);
if(cnt==0){
    cout<<"No"<<endl;
}
else if(x==n){
    if(cnt%2==1){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}
else{
    if(x%2==1){
        cout<<"Yes"<<endl;
    }
    else{
        if(ev>0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}

}
return 0;
}