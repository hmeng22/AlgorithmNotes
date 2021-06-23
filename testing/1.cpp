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
    bool check(vector<vector<int>> g, int n) {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (g[i][j] != 0) return false;
            }
        }
        return true;
    }

    void p(vector<vector<int>> g, int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << g[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    void dfs(vector<vector<int>> grid, int n, int cur, int count, int& ret) {
        if (check(grid, n) && count < ret) {
            ret = count;
        }

        for (int i = cur; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                p(grid, n);
                swap(grid[i], grid[j]);
                p(grid, n);
                dfs(grid, n, cur + 1, count++, ret);
            }
        }
    }

    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        int ret = 0;

        dfs(grid, n, 0, 0, ret);

        return ret;
    }
};

int main(int argc, const char* argv[]) {
    Solution s;

    vector<vector<int>> t{{0, 0, 1}, {1, 1, 0}, {1, 0, 0}};
    cout << s.minSwaps(t);

    return 0;
}