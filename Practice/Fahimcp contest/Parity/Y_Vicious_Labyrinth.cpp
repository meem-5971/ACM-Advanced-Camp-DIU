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
int n,k;
cin>>n>>k;
vector<int>ans(n);
if(n==2){
cout<<"2 1"<<endl;
continue;
} 
if(k%2==0){
    for(int i=0;i<n;i++){
        ans[i]=n-1;
    }
    ans[n-2]=n;
}
else{
    for(int i=0;i<n-1;i++){
        ans[i]=n;
    }
    ans[n-1]=n-1;
}
for(auto a:ans){
    cout<<a<<" ";
}
cout<<endl;
}
return 0;
}