/*
           |--------------------------------------------------------|
           |  #########    #      #######   ####    ###   ####      |
           |      #       # #          #    #   #    #    #    #    |
           |      #      #####       #      ####     #    #     #   |
           |      #     #     #    #        #   #    #    #    #    |
           |      #    #       #  #######   ####    ###   ####      |
           |--------------------------------------------------------|
*/
#include <iostream>
#include <bits/stdc++.h>
#define fastIO       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll           long long int
#define ull          unsigned long int
#define vec          vector<ll>
#define mp           map<ll,ll>
#define pa           pair<ll,ll>
#define vecSort(v)   sort(v.begin(),v.end())
#define pb           push_back
#define FOF(i,a,b)   for(ll i=a; i<b; i++)
#define FOB(i,a,b)   for(ll i=a-1; i>=b; i--)
#define endl         "\n"
using namespace std;

//////////////////////  T  //  A  //  Z  //  B  //  I  //  D  //////////////////////
#define MAX 1000010
ll primelist[MAX+10];
vec primeStore;

// prime numbers calculate
void sieve() {
    memset(primelist,0,sizeof(primelist)); // if '1' non-prime, '0' prime
    primelist[0] = primelist[1] = 1;
    for(ll i=4; i<=MAX; i+=2){primelist[i] = 1;}
    for(ll i=3; i*i<=MAX; i+=2){if(!primelist[i]){for(ll j=i*i; j<=MAX; j+=i) primelist[j] = 1;}}
    for(ll i=2; i<=MAX; i++){if(!primelist[i]){primeStore.push_back(i);}}
}
//Modular Arithmetic for calculating big mod, BASE = a, POWER = p, MOD = m
ll modular_expo(ll a, ll p, ll m) {
    ll ans = 1;a = a % m;
    while(p>0){if(p%2==1) ans = (ans*a)%m;a = (a*a)%m;p /= 2;}
    return ans;
}
//prime factorization
void primeFactorial(ll n) {
    FOF(i,2,sqrt(n)+1){
        if(n%i==0){ll cnt=0;while(n%i==0){cnt++;n/=i;}cout<< i << " "<<cnt << endl;}}
    if(n>1) cout << n << " " << 1 << endl;
}
// Euclid algorithm, efficient approach for calculate GCD
ll eucAlgo(ll a, ll b) {
    if(b==0) return a;
    return eucAlgo(b,a%b);
}
// extended Euclid algorithm (value a & b is given, find x, y)
pair<ll,ll> extended_euclidGcd(ll a, ll b) {
    if(b==0) return {1,1};
    auto [x1, y1] = extended_euclidGcd(b,a%b);
    ll x = y1, y=x1-(a/b)*y1;
    return {x, y};
}

void init_code() {

    fastIO;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

//////////////////////             CODE HERE             //////////////////////

void solve(ll t){
    // lala lala
}

int main()
{
    init_code();
    ll test;
    cin>>test;
    FOF(t,1,test+1) solve(t);
    return 0;
}
