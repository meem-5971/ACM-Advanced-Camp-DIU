#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=10000;
vector<int>isPrime(N,1);
vector<int> prime;
void seive(){
    isPrime[0]=isPrime[1]=0;
    for(int i=2;i<N;i++){
        // without if condition : NlogN , with if : N(log(logN))
        if(isPrime[i]){ 
            prime.push_back(i);
            for(int j=2*i;j<=N;j+=i){
                isPrime[j]=0;
            }
        }
    }
        
}
//Multiplying very big numbers
string multiplybigint(string s,int factor){
    int carry=0;
    string res="";
    reverse(s.begin(),s.end());
    for(char dig:s){
        int curr=(dig-'0')*factor+carry;
        res.push_back((curr%10) +'0');
        carry=curr/10;
    }
    while(carry){
        res.push_back((carry%10)+'0');
        carry/=10;
    }
    reverse (res.begin(),res.end());
    return res;

}

//LCM from prime factors
 string lcmCalc(const vector<int>& numbers){
    map<int,int>maxPower;
    for(int n:numbers){
        map<int,int>power;

        for(int p:prime){
            if(p*p > n) break;
            while(n%p==0){
                power[p]++;
                n/=p;
            }
        }

        if(n>1) power[n]++;
        for(auto &u:power){
            maxPower[u.first]=max(maxPower[u.first],u.second);
        }
    }

    string lcm="1";
    for(auto &u:maxPower){
        int factor=pow(u.first,u.second);
        lcm=multiplybigint(lcm,factor);
    }
    return lcm;
 }


int main(){
 seive(); // Generate prime numbers

    int t;
    cin >> t;
    for (int caseNum = 1; caseNum <= t; ++caseNum) {
        int n;
        cin >> n;
        vector<int> numbers(n);
        for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
        }
        string lcm = lcmCalc(numbers);
        cout << "Case " << caseNum << ": " << lcm << "\n";
    }


    return 0;
}