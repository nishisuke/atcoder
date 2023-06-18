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
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
```
