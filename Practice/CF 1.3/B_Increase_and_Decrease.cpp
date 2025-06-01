#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
int n;
cin>>n;
vector<int>a(n);
ll sum=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}
if(sum%n==0) cout<<n<<endl;
else cout<<n-1<<endl;
 
return 0;
}