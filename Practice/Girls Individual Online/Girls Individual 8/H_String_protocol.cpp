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
int res=0;
for(int i=0;i<s.size();i++){
    if(s[i]==s[i+1]){
     i++; 
    }
    res++;
   
}
cout<<res<<endl;
}
return 0;
}