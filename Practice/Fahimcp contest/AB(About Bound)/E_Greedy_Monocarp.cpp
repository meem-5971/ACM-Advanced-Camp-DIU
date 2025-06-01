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
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a.rbegin(),a.rend());
int s=a[0];
int s1=0;
for(int i=1;i<n;i++){
    s+=a[i];
    if(s>k){
        s-=a[i];
        break;
    }
}
cout<<k-s<<endl;
}
return 0;
}