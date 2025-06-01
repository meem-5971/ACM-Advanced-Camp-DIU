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
vector<ll>a(n);
ll sum=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}
ll p=sum/n;
ll q=sum%n;
sort(a.begin(),a.end());
ll tot=0;
for(int i=0;i<n-q;i++){
    tot+=abs(a[i]-p);
}
for(int i=n-q;i<n;i++){
    tot+=abs(a[i]-(p+1));
}
cout<<tot/2<<endl;
 
return 0;
}