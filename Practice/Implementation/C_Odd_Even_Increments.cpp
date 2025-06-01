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
vector<int>a(n+1);
int e1=0,o1=0,e2=0,o2=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(i%2==0){
        if(a[i]%2==0){
            e1++;
        }
        else{
            o1++;
        }
    }
    else{
        if(a[i]%2==0){
            e2++;
        }
        else{
            o2++;
        }
    }
}
if(e1 && o1) cout<<"NO"<<endl;
else if(e2 && o2) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}
return 0;
}