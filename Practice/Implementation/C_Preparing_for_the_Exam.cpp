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
int n,m,k;
cin>>n>>m>>k;
map<int,int>mb;
vector<int>a(m);
for(int i=0;i<m;i++){
    cin>>a[i];
   
}
vector<int>b(k);
ll s=0;
for(int i=0;i<k;i++){
    cin>>b[i];
    mb[b[i]]++;
    
}
for(int i=0;i<m;i++){
    if(k==n || (k==n-1 && mb.find(a[i])==mb.end())){
        cout<<1;
    }
    else{
        cout<<0;
    }
}
cout<<endl;
}
return 0;
}