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
string a;
cin>>a;
int n=a.size();
bool flag=true;
for(int i=0;i<n/2;i++){
    if(a[i]!=a[(n/2)+i]){
        flag=false;
        break;
    }
}
if(!flag || n%2==1) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}
return 0;
}