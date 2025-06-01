#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
set<int>s;
int a,b,c,d;
cin>>a>>b>>c>>d;
s.insert(a);
s.insert(b);
s.insert(c);
s.insert(d);
cout<<4-s.size()<<endl;
 
return 0;
}