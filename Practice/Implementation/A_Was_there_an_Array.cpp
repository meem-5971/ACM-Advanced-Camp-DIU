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
vector<int>b(n-2);
for(int i=0;i<n-2;i++){
    cin>>b[i];
}
bool flag=true;
for(int i=1;i<n-3;i++){
    if(b[i]==0){
        if(b[i-1]==1 && b[i+1]==1){
            flag=false;
            break;
        }
    }
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}