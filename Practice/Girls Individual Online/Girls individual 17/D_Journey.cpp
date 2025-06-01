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
ll n,a,b,c;
cin>>n>>a>>b>>c;
ll sum=a+b+c;
if(n<=sum){
    if(n<=a){
        cout<<1<<endl;
    }
    else if(n<=(a+b)){
        cout<<2<<endl;
    }
    else cout<<3<<endl;
}
else{
    int d=n/sum;
    int rem=n%sum;
    d=3*d;
    if(rem==0){
        cout<<d<<endl;
    }
    else if(rem<=a){
        cout<<d+1<<endl;
    }
    else if(rem<=(a+b)){
        cout<<d+2<<endl;
    }
    else{
        cout<<d+3<<endl;
    }
}
}
return 0;
}