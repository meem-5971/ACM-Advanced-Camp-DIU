#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2000000;
 vector<int> factors(N + 1, 0); 
vector<pair<int, int>> sorted_numbers;
void factorize(){
    for(int i=2;i<=N;i++){
        if(factors[i]==0){//i is a prime number
            for(int j=i;j<=N;j+=i){
                  int x = j;
                while (x % i == 0) {
                    factors[j]++;
                    x /= i;
                }
            }
        }
    }

    for(int i=1;i<=N;i++){
        sorted_numbers.push_back({factors[i],i});
    }
    sort(sorted_numbers.begin(),sorted_numbers.end());
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 factorize();
int t=1;


int n;
while(cin>>n && n!=0){
   cout<<"Case "<<t<<": "<<sorted_numbers[n-1].second<<'\n'; 
   t++;
}
return 0;
}
