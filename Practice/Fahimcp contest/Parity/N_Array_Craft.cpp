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
int n,x,y;
cin>>n>>x>>y;
x--;y--;
vector<int>a(n);
int val=-1;
for(int i=y-1;i>=0;i--){
   a[i]=val;
   val=-val;
}
val=-1;
for(int i=x+1;i<n;i++){
   a[i]=val;
   val=-val;
}
for(int i=y;i<=x;i++){
    a[i]=1;
}
for(auto u:a){
    cout<<u<<" ";
}
cout<<endl;
}
return 0;
}