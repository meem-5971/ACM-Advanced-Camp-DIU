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
vector<int>e;
vector<int>o;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%2==0){
        e.push_back(a[i]);
    }
    else{
        o.push_back(a[i]);
    }
}

sort(e.rbegin(),e.rend());
sort(o.rbegin(),o.rend());

int ans=-1;
if(e.size()>=2) ans=max(ans, e[0]+e[1]);
if(o.size()>=2) ans=max(ans,o[0]+o[1]);

cout<<ans<<endl;



return 0;
}