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
for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    if(i%2==1) a.push_back(x);
}
cout<<*max_element(a.begin(),a.end())<<endl;
}
return 0;
}