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
for(int i=0;i<n;i++){
    cin>>a[i];
}
int f=0,s=0;
int i=0,j=n-1;
while(i<=j){
    if(f<s) f+=a[i++];
    else s+=a[j--];
}
cout<<max(s,f)<<endl;

}
return 0;
}