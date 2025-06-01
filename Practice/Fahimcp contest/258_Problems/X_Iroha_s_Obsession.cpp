#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isValid(int k, vector<bool>dig){
    while(k>0){
        int d=k%10;
        if(dig[d]) return false;
        k/=10;
    }
    return true;
}
void solve(){
 int k,n;
 cin>>k>>n;
 vector<bool>dig(10,false);
 for(int i=0;i<n;i++){
    int x;
    cin>>x;
    dig[x]=1;
 }
while(true){
    if(isValid(k,dig)){
        cout<<k<<endl;
        return;
    }
    k++;
}
//cout<<k<<endl;
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
 
return 0;
}