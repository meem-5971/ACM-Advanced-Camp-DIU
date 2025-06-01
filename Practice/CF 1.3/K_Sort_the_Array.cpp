#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>a(n);
vector<int>b(n);

for(int i=0;i<n;i++){
    cin>>a[i];
    b[i]=a[i];
}
 sort(b.begin(),b.end());

 int l=0,r=0;
 vector<int>c;
 for(int i=0;i<n;i++){
    if(a[i]!=b[i]){ 
        l=i;
        break;
    }
 }
 for(int i=n-1;i>=0;i--){
    if(a[i]!=b[i]){
        r=i;
        break;
    }
 }
 for(int i=l;i<=r;i++){
    c.push_back(a[i]);
 }
 reverse(c.begin(),c.end());
 vector<int>ans;
 for(int i=0;i<l;i++){
    ans.push_back(a[i]);
 }
 for(int i:c){
    ans.push_back(i);
 }
 for(int i=r+1;i<n;i++){
    ans.push_back(a[i]);
 }
 if(ans==b){
  cout<<"yes"<<endl<<l+1<<" "<<r+1<<endl;
 }
 else{
    cout<<"no"<<endl;
 }
return 0;
}