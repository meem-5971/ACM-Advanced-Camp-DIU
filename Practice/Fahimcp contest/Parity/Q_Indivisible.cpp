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
if(n==1){
    cout<<1<<endl;
}
else if(n==2){
    cout<<1<<" "<<2<<endl;
}
else if(n%2==1){
    cout<<-1<<endl;
}
else{
    vector<int>a(n);
    iota(a.begin(),a.end(),1);
  for(int i=0;i<n-1;i+=2){
 swap(a[i],a[i+1]);
  }
  for(auto u:a){
    cout<<u<<" ";
  }
  cout<<endl;
}
}
return 0;
}