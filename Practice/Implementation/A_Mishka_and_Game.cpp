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
int sumx=0,sumy=0;
while(t--){
    int x,y;
    cin>>x>>y;
   if(x>y) sumx++;
   if(y>x) sumy++;
}
if(sumx>sumy) cout<<"Mishka"<<endl;
else if(sumy>sumx) cout<<"Chris"<<endl;
else cout<<"Friendship is magic!^^"<<endl;
 
return 0;
}