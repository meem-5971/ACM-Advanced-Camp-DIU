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
for(int i=0;i<n;i++){
    cin>>a[i];
}
int mn=*min_element(a.begin(),a.end());
int mx=*max_element(a.begin(),a.end());
cout<<(mx-mn)*(n-1)<<endl;
}
return 0;
}