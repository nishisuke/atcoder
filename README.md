# atcoder
```
g++ -std=gnu++17 -Wall -Wextra -O2 -DONLINE_JUDGE -I/opt/boost/gcc/include -L/opt/boost/gcc/lib -I/opt/ac-library -o ./a.out ./Main.cpp
```




```
#define p(s) cout<<(s)<<'\n'
```

https://github.com/drken1215/algorithm/tree/master



$ g++ -std=c++14 -D_DEBUG -o a a.cpp
のようにコンパイルすることで、マクロ_DEBUGが定義されます。

提出した先ではこのマクロが定義されないので、このマクロの存在によって分岐するコードを書くと手元と提出先で別の挙動をさせることができます。

例えば、

#ifdef _DEBUG
#define debug(x) cout<<#x<<": "<<x<<endl
#else
#define debug(x)




```
template<class T> using V = std::vector<T>; // usingはテンプレート化できる
```


```
https://blog.hamayanhamayan.com/entry/2021/05/13/211037
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
//#pragma GCC optimize ("-O3")
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }
```


