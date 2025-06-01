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
for(int i=0;i<n;i++){
    cin>>a[i];
}
int ans=a[0];
int count=1;
for(int i=1;i<n;i++){
    if(ans>=a[i]) count++;
    ans=min(ans,a[i]);
}
cout<<count<<endl;
return 0;
}