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
int cnt=0;
for(int i=1;i*i<=n;i++){
if(n%i==0){
    if(i==n/i){
        cnt++;
    }
    else{
        cnt+=2;
    }
}
}
cout<<cnt<<endl;
}
return 0;
}