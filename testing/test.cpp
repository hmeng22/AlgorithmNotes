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
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        set<ii> s;
        s.insert({x, y});
        int n = path.size();
        for (int i = 0; i < n; i++) {
            char p = path[i];
            if (p == 'N') {
                y += 1;
            } else if (p == 'S') {
                y -= 1;
            } else if (p == 'E') {
                x += 1;
            } else if (p == 'W') {
                x -= 1;
            } else {
            }

            if (s.count({x, y}))
                return true;
            else
                s.insert({x, y});
        }
        return false;
    }
};

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

int main(int argc, const char* argv[]) {
    Solution s;

    cout << s.isPathCrossing("NES") << endl;
    cout << s.isPathCrossing("NESWW") << endl;

    // int k = 16;
    // k >>= 4;
    // int x = k & 1;
    // cout << x << endl;

    string line = "test one two three.";
    vector<string> arr = splitStr(line, ' ');

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }

    return 0;
}