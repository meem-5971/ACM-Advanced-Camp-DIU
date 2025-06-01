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
queue<int>a;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    a.push(x);
}
while(a.size()>1){
int m=a.front();a.pop();
int n=a.front();a.pop();
int x=(m+n)-1;
a.push(x);
}
cout<<a.front()<<endl;
}
return 0;
}