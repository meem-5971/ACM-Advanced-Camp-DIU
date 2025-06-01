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
int n=0;
vector<int>pq(3);
int a,b,c;
cin>>a>>b>>c;

for(int i=1;i<=5;i++){
   if(a<=b && a<=c) a++;
   else if(b<=a && b<=c) b++;
   else c++;
}
cout<<a*b*c<<endl;
}
return 0;
}