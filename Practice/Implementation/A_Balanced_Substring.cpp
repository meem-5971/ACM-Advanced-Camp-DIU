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
string s;
cin>>s;
int x=-1,y=-1;
for(int i=0;i<n-1;i++){
    if(s[i]!=s[i+1]){
        x=i+1;
        y=i+2;
        break;
    }
}
cout<<x<<" "<<y<<endl;
}
return 0;
}