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
int x=*min_element(a.begin(),a.end());
int y=*max_element(a.begin(),a.end());
for(int i=0;i<n;i++){
    if(a[i]==x){
        cout<<x<<" "<<y<<endl;
        break;
    }
    if(a[i]==y){
        cout<<y<<" "<<x<<endl;
        break;
    }
}
}
return 0;
}