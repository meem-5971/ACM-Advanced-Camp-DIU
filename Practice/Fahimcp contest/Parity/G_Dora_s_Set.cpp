#include<bits/stdc++.h>
#define ll long long
using namespace std;
int oddcount(int n){
     
       return (n+1)/2; 
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
cin>>t;
while(t--){
int l,r;
cin>>l>>r; int cnt=0;
for(int i=l;i<=r;i++){
    if(i%2==1) cnt++;
}
cout<<cnt/2<<endl;
}
return 0;
}