#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        
}
int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m,h,k;
cin>>n>>m>>h>>k;

string s;
cin>>s;
set<pair<int,int>> p;
int l=0,r=0,d=0,u=0;
for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    p.insert({x, y});

}
int x = 0, y = 0;
for (char d : s) {
  if (d == 'L') x--;
  else if (d == 'R') x++;
  else if (d == 'U') y++;
  else y--;
  h--;
  if (h < 0) { 
    cout << "No\n"; 
    return 0; 
}
  if (h < k) {
    auto it = p.find({x, y});
    if (it != p.end()) {
      p.erase(it);
      h = k;
    }
  }
}
cout << "Yes\n";
 
return 0;
}