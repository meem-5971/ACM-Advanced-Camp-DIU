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
while(n--){
    int x,y;
    cin>>x>>y;
    a.push_back(x);
    b.push_back(y);
}
cout<<2*(*max_element(a.begin(),a.end())+*max_element(b.begin(),b.end()))<<endl;
}
return 0;
}