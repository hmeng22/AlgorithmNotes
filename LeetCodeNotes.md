# LeetCode Notes

## Notes

1. Module 10^9 + 7: const int MOD = 1e9 + 7;
2. Int overflow: typedef long long int64; 
convert to long long: 1LL * a * b
3. Vector sorting: sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
4. Swap(a, b)
5. Initlize or Clear Vector: Vector<int> ret; ret.clear();
6. sort(a.begin(),a.end(),greater<pair<int,int>>()); less, greater_equal
7. sort unordered_map
```
unordered_map<int, int> um;
vector<pair<int, int>> ret;
for(auto iter = um.begin(); iter != um.end(); iter++)  {
    ret.push_back({iter->first, iter->second});
}

map<int, int> cnt;
for (auto& x : a) cnt[x]++;
vector<int> ret;
for (auto& [k, v] : cnt) ret.push_back(v);
```
8. lower_bound()
9. __builtin_popcount(int) function is used to count the number of one’s(set bits) in an integer.
10. string split by delimeter? 
```
vector<string> splitStr(string str, char d) {
    vector<string> ret;
    string buff = "";
    for (char c : str) {
        if (c == d) {
            ret.push_back(buff);
            buff = "";
        } else {
            buff.push_back(c);
        }
    }
    if (buff.size() >= 0) ret.push_back(buff);
    return ret;
}
```
11. *max_element(a.begin(), a.end()), min_element
12. set<int> s(v.begin(), v.end());
13. int dp[N][N]


























































































## Template

```c++
#include <math.h>
#include <algorithm>
#include <climits>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) {
    cerr << name << ": " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << ": " << arg1 << " |";
    __f(comma + 1, args...);
}

#define tracev(...) __fv(#__VA_ARGS__, __VA_ARGS__)
template <typename T>
void __fv(const char* name, T& v) {
    cerr << name << ": { ";
    bool first_value = true;
    for (auto i = v.begin(); i != v.end(); ++i) {
        if (first_value) {
            first_value = false;
        } else {
            cerr << ", ";
        }
        // cerr << i - v.begin() << " : " << *i;
        cerr << *i;
    }
    cerr << " }" << endl;
}

typedef long long int64;
typedef pair<int, int> ii;
const int INT = 1 << 29;
const int MOD = 1e9 + 7;

class Solution {
   public:
};

int main(int argc, const char* argv[]) {
    Solution s;

    return 0;
}
```

```bash
#!/bin/sh
g++ $1 -o a.out -std=c++11 -stdlib=libc++
./a.out
```