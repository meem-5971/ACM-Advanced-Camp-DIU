#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N=1e5+7;
int sum[N];
vector<int>divisors[N];

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

for(int i=2;i<N;i++){
    for(int j=i;j<N;j+=i){
        sum[j]+=i;
        divisors[j].push_back(i);
    }
}
for(int i=2;i<10;i++){
 for(auto div:divisors[i]){
  cout<<div<<" ";
 }
 cout<<"\n"<<sum[i]<<"\n";
}

 
return 0;
}