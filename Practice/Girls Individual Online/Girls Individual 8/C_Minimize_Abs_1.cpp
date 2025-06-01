#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,l,r;
cin>>n>>l>>r;

vector<int>a(n);

for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<l){
        cout<<l<<" ";
    }
    else if(a[i]>r){
        cout<<r<<" ";
    }
    else{
        cout<<a[i]<<" ";
    }
}
 
return 0;
}