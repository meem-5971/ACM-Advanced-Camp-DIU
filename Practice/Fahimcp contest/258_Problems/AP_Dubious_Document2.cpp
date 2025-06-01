#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
       string s,t;
       cin>>s>>t;
       int start=0;
       for(int i=s.size()-t.size();i>=0;i--){
            bool paici=true;
            start=i;
            for(int j=0;j<t.size();j++){
                  if(s[i+j]==t[j] || s[i+j]=='?') continue;
                  else{
                        paici=false;
                        break;
                  }
            }
            if(paici){
            for(int k=0;k<s.size();k++){
                  if(start<=k && k<start+t.size()){
                        cout<<t[k-start];
                  }
                  else if(s[k]=='?') cout<<'a';
                  else cout<<s[k];
            }
            cout<<endl;return;
       }
       }
       cout<<"UNRESTORABLE"<<endl;return;


}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();

return 0;
}