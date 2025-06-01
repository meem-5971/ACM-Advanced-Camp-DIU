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
int a,b,c;
cin>>a>>b>>c;
if((a>b && a<c) || (a>c && a<b)){
    cout<<a<<endl;
}
else if((b>a && b<c) || (b>c && b<a)){
    cout<<b<<endl;
}
else{
    cout<<c<<endl;
}
}
return 0;
}