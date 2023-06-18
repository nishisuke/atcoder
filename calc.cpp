
long long powm(long long a, long long n, long long m) {
    long long res = 1LL;
    a %= m;
    while (n > 0) {
      if (n & 1) res = res * a % m;
      a = a * a % m;
      n >>= 1;
    }
    return res;
}


vector<pair<long long, long long> > prime_factorize(long long n) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= n; ++a) {
        if (n % a != 0) continue;
        long long ex = 0; // 指数

        while (n % a == 0) {
            ++ex;
            n /= a;
        }

        res.push_back({a, ex});
    }

    if (n != 1) res.push_back({n, 1});
    return res;
}

int main() {

}
