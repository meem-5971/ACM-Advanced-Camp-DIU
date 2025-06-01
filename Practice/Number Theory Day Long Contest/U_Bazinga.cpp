#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=10000000;
vector<bool>isPrime(N+2,1);
vector<ll>primes;
 vector<ll>primemulti;
void sieve(){
    isPrime[0] = isPrime[1] = false; 
    for (int i = 4; i <=N; i += 2) {
        isPrime[i] = false;
    }
    primes.push_back(2);
    for (ll i =3; i <= N; i+=2) {
        if (isPrime[i]) {
           primes.push_back(i);
           if(i<=(sqrt(N)+2)){
            for (ll j = i * i*1ll; j <= N; j += i) {
                isPrime[j] = false;
            }
           }
        }
    } 

   
    ll n=primes.size();
    for(int i=0;i<40000;i++){
        for(int j=i+1;j<40000;j++){
            if (primes[i] * primes[j] > 10527451)
                            break;
            primemulti.push_back(primes[i]*primes[j]);
        }
    }
    sort(primemulti.begin(), primemulti.end());
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 sieve();
int t;
cin>>t;
while(t--){
int n;
cin>>n;
cout<<primemulti[n-1]<<endl;
}
return 0;
}

#include <bits/stdc++.h>
using namespace std;
long long prime[100000000], nPrime;
int mark[100000002];
int ans[100000002];
vector<long long> v;

void sieve(int n)
{
    
    int limit = sqrt(n) + 2;
    mark[1] = 1;
    for (int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;
    for (int i = 3; i <= n; i += 2)
    {
        if (mark[i] == 0)
        {
            prime[nPrime++] = i;
           
            if (i <= limit)
            {
                for (int j = i * i; j <= n; j += (i * 2))
                {
                    mark[j] = 1;
                }
            }
        }
    }
}

int main()
{
   
    sieve(10000000);
    
    for (int i = 0; i < 40000; i++)
    {
        for (int j = i + 1; j < 400000; j++)
        {
            if (prime[i] * prime[j] > 10527451)
                            break;
                v.push_back(prime[i] * prime[j]);
        }
    }

    sort(v.begin(), v.end());



    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << v[n - 1] << endl;
    }
}