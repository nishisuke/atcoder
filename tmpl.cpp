// https://atcoder.github.io/ac-library/production/document_ja/
#include <atcoder/all>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define sizeint(x) ((int)(x).size())

#ifdef _DEBUG
#define _choose5(_1,_2,_3,_4,_5,name,...) name
#define _debug_1(x1) cout<<#x1<<": "<<x1<<endl
#define _debug_2(x1,x2) cout<<#x1<<": "<<x1<<", "#x2<<": "<<x2<<endl
#define _debug_3(x1,x2,x3) cout<<#x1<<": "<<x1<<", "#x2<<": "<<x2<<", "#x3<<": "<<x3<<endl
#define _debug_4(x1,x2,x3,x4) cout<<#x1<<": "<<x1<<", "#x2<<": "<<x2<<", "#x3<<": "<<x3<<", "#x4<<": "<<x4<<endl
#define _debug_5(x1,x2,x3,x4,x5) cout<<#x1<<": "<<x1<<", "#x2<<": "<<x2<<", "#x3<<": "<<x3<<", "#x4<<": "<<x4<<", "#x5<<": "<<x5<<endl
#define debug(...) _choose5(__VA_ARGS__,_debug_5,_debug_4,_debug_3,_debug_2,_debug_1)(__VA_ARGS__)
#define debug_arr(x) dev::parr(x)
#else
#define debug(...)
#define debug_arr(x) 
#endif

using namespace std;
using namespace atcoder;
using ll=long long;
template<typename T> bool chmax(T &a, T b) { return (a < b) ? (a = b, true) : false; }
template<typename T> bool chmin(T &a, T b) { return (a > b) ? (a = b, true) : false; }
const char NL = '\n';
bool can = false;
string S,T;
int H,K,L,M,N,P,Q,R,V,W,X,Y,Z,cnt=0;
vector<int> mvxy = {0,1,0,-1,0};
const int MOD=1000000007;

namespace dev {
  template<typename T>
  void parr(vector<T> &a) {
    for (auto i : a) cout << i << ", ";
    cout << NL;
  }
}
template<typename T> void println(T t) { cout << t << NL; }

void solve() {
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  solve();
}
