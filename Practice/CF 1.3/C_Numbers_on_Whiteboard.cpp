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
cout<<2<<endl;
if(n==2){
    cout<<2<<" "<<1<<endl;
    continue;
}
cout<<n<<" "<<n-1<<endl;
while(n>2){
    cout<<n<<" "<<n-2<<endl;
    n-=1;
}
}
return 0;
}