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
int a,b,c,d;
cin>>a>>b>>c>>d;
int x=a+b, y=c-b,z=d-c;
if(x==y && y==z){
    cout<<3<<endl;
}
else if((x==y && y!=z) || (y==z && y!=x) ||(x==z && y!=z)){
    cout<<2<<endl;
}
else{
    cout<<1<<endl;
}
}
return 0;
}