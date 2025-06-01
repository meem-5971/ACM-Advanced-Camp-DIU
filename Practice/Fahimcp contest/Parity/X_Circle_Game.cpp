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
int mn=INT_MAX;
int id=0;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x<mn) {
        id=i;
   mn=x;
    }
}
if(n%2==1) cout<<"Mike"<<endl;
else if(id%2==1) cout<<"Mike"<<endl;
else cout<<"Joe"<<endl;
}
return 0;
}