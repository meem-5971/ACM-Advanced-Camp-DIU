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
    int a,b;
    cin>>a>>b;
    if(a==0 && b%2!=0) cout<<"NO"<<endl;
    else if(a%2!=0) cout<<"NO"<<endl;
    else if(b%2!=0 && a<2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}
return 0;
}