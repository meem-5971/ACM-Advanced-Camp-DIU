#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,q;
cin>>n>>q;
vector<int>a(n);

for(int i=0;i<n;i++){
    cin>>a[i];
}
int x=*max_element(a.begin(),a.end());
int y=*min_element(a.begin(),a.end());

while(q--){
    int p;
    cin>>p;
    if(p>=y && p<=x) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
 
return 0;
}