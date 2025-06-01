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
vector<int>a(3*n);
for(int i=0;i<3*n;i++){
    cin>>a[i];
}
map<int,int>mp;
for(int i=0;i<3*n;i++){
    if(mp[a[i]]==1){
        cout<<a[i]<<" ";
    }
    mp[a[i]]++;
}
 
return 0;
}