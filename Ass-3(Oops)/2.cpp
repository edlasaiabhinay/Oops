#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<int,int>> v = { {2, 4}, {5, 7}, {1, 3}, {6, 8} };
    sort(v.begin(), v.end());

    vector<pair<int,int>> res;
    res.push_back(v[0]);

    for(int i=1;i<v.size();i++){
        auto &last = res.back();
        if(v[i].first <= last.second)
            last.second = max(last.second, v[i].second);
        else
            res.push_back(v[i]);
    }

    for(auto &p : res)
        cout << p.first << " " << p.second << endl;
}
