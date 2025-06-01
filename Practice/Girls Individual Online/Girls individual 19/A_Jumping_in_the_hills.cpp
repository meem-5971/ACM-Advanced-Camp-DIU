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
int n,u,d;
cin>>n>>u>>d;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
map<int,int>mp;
for(int i=1;i<n;i++){
    mp[i]=abs(a[i-1]-a[i]);
}
bool flag=true;
bool para=false;
int i=0;
for(i=1;i<n;i++){
    if(a[i]==a[i-1]) continue;
    if(a[i]>a[i-1] && mp[i]<=u){
       continue;
        
    } 
    else if( a[i]<a[i-1] && mp[i]<=d) {
        continue;
        
    } 
    else if(a[i]<a[i-1] && para==false){
        para=true;
      continue;
        
    }
    else{
        flag=false;
       // id=i;
        break;
    }
}
cout<<i<<endl;
}
return 0;
}