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
int n,m,k;
cin>>n>>m>>k;
int x,y;
cin>>x>>y;
int s=x+y;
bool white=false;
if(s%2==0) white=true;
bool fnd=false;
while(k--){
    int p,q;
    cin>>p>>q;
    if((p+q)%2==0){
        if(white){
            fnd=true;
          //  cout<<1;
           // break;
        }
    }
    else{
        if(!white){
            fnd=true;
           // break;
        }
    }
}
//cout<<fnd<<endl;
if(!fnd) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}