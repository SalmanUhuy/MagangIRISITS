#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    size_t resultA = 0;
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
        if (a+apple[apple_i] >= s && a+apple[apple_i] <= t) {
            resultA++;
        }
    }
    vector<int> orange(n);
    size_t resultB = 0;
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
        if (b+orange[orange_i] >= s && b+orange[orange_i] <= t) {
            resultB++;
        }
    }
    cout << resultA << endl;
    cout << resultB << endl;
    return 0;
} 
