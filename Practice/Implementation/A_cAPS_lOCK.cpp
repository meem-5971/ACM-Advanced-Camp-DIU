#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
int n=s.size();
string p=s;
string q=s;

for(int i=0;i<n;i++){
   if(i==0){
    char c=toupper(s[i]);
    char d=tolower(s[i]);
    q[i]=c;
    p[i]=d;
   }
   else{
    char d=tolower(s[i]);
    p[i]=q[i]=d;
   }
}
if(s==p || s==q){
    cout<<s<<endl;
}
else{
    cout << (char)toupper(s[0]);
    for (int i = 1; i < n; i++) {
        cout << (char)tolower(s[i]);
    }
}
 
return 0;
}