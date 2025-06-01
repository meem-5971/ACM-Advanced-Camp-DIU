#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<int>a(n);
vector<int>b(m);
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<m;i++){
    cin>>b[i];
}
int ca=max(*max_element(a.begin(),a.end()),2*(*min_element(a.begin(),a.end())));
int cb=*min_element(b.begin(),b.end());

if(cb<=ca) cout<<-1<<endl;
else cout<<ca<<endl;
 
return 0;
}