#include<bits/stdc++.h>
using namespace std;
#define ll int
typedef unsigned long long ull;
typedef long double lld;
#define FOR(j, a, in) for (ll i=j ; i<a ; i+=in)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define mod 1000000007
typedef vector<ll> VI;
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}

ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}

ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

//void _print(ll t) {cerr << t;}
//void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


const int N1=1e5+5;
const int MOD=1e9+7;
/*vector<bool> prime(N,true);

void seive()
{
  
  prime[0]=prime[1]=false;

  for(ll i=2;i*i<N;i++)
  {
    if(prime[i])
    {
      for (ll j=i*i;j<=N;j+=i)
      {
        prime[j]=false;
      }
    }
  }
}*/
/*
class Fenwick //it is 1 based indexing,u store ur arrayy in 0 based indexing and if l,r,x are 1 based indexing,subtract 1 from each ;
{
  public:
      ll size;
      vector<ll> BIT;

      void init(ll n)
      {
        size=n+2;
        BIT.assign(size,0LL);
        //debug(BIT);
      }

      void update(ll i,ll val)//v:value to increment i:index to be updated
      {
        i++;
        while(i<=size)
        {
          BIT[i]+=val;
          i=i+(i&(-i));
        }
      }
      void range_update(ll l,ll r,ll  val)
      {
        update(l,val);
        update(r+1,-val);
      }

      ll get(ll x)
      {
        x++;
        ll res=0;
        while(x)
        {
          res=res+BIT[x];
          x-=x&(-x);
        }
        return res;
      }
};*/
void solve()
{ 
  ll n;cin>>n;
  string s;cin>>s;

  ll ones=0,zeros=0;
  for(auto i:s)
  {
    if(i=='1')
    ones++;
    else
    zeros++;
  }
  //debug(ones);debug(zeros);
  vector<ll> fact;
  for(ll i=1;i<=n;i++)
  {
    
    if(n%i==0)
    fact.PB(i);
  }

  //debug(fact);
  ll ans1=INT_MAX;
  for(auto j :fact)
  {
    vector<ll> zero(j,0),one(j,0);
    ll ans=0;
    
    FOR(0,n,1)
    {
      if(s[i]=='0')
      {
        zero[i%j]++;
      }
      else
      {
        one[i%j]++;
      }
    }
    FOR(0,j,1)
    ans1=min(zero[i]+ones-one[i],ans1);
  }
  cout<<ans1;

}

int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  //solve();
  /*v={3,5,7,11,13,17,19,23,29,31,37,41,41,47,53,59};*/
  ll t;cin>>t;
  debug(t);
  while(t--)
  {
    solve();
    cout<<"\n";
    string end="end";
    debug(end);
  }
}
  //GOOGLE
  //FOR(0,t,1)
  //{
  //  cout<<"Case #"<<i+1<<": "<<solve()<<"\n";
  //}

  //CODEFORCES
  //cout<<solve()<<"\n";

 