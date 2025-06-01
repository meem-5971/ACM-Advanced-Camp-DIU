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
if(n>=1 && n<=9){
    cout<<1<<endl<<n<<endl;
}
else{
    vector<int>ans;
    int cnt=0;
    int i=1;
    while(n>0){
        if(n%10>0)
     ans.push_back((n%10)*i);
     i*=10;
     n=n/10;
    
    }
    cout<<ans.size()<<endl;
    for(auto u:ans){
        cout<<u<<" ";
    }
    cout<<endl;
}
}

return 0;
}