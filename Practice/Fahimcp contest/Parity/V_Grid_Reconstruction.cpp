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
vector<int>a(n);
vector<int>b(n);
int x=2*n;
for(int i=0;i<n;i+=2){
a[i]=x;
x-=2;
}
//x+=2;
for(int i=n-1;i>0;i-=2){
a[i]=x;
x-=2;
}
int y=1;
for(int i=0;i<n;i+=2){
b[i]=y;
y+=2;
}
for(int i=1;i<n;i+=2){
b[i]=y;
y+=2;
}
for(auto u:a){
    cout<<u<<" ";
}
cout<<endl;
for(auto u:b){
    cout<<u<<" ";
}
cout<<endl;
}
return 0;
}