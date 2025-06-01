#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int p=0,c=0;
int ans=0;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
  if(x==-1){
    if(p==0) c++;
    else p--;
  }
  else p+=x;
}
cout<<c<<endl;
 
return 0;
}