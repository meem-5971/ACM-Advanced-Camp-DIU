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

int w1=max(a,b);
int w2=max(c,d);
int l1=min(a,b);
int l2=min(c,d);

if(l1>w2 || l2>w1){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}

}
return 0;
}