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
int n,k;
cin>>n>>k;
ll prod=1;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
    prod*=a[i];
}
if(2023%prod!=0){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
    cout<<2023/prod<<" ";
    for(int i=0;i<k-1;i++){
        cout<<1<<' ';
    }
    cout<<endl;
}

}
return 0;
}