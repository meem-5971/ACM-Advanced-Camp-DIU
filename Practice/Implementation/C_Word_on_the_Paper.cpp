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
char a[8][8];
string ans="";
for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        cin>>a[i][j];
        if(a[i][j]!='.'){
            ans+=a[i][j];
        }
    }
}
cout<<ans<<endl;
}
return 0;
}