#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {20, 30, 40, 50,};
    int target = 60;

    unordered_map<int,int> mp;

    for(int i = 0; i < arr.size(); i++) {
        int need = target - arr[i];

        if(mp.find(need) != mp.end()) {
            cout << "Pair: " << arr[i] << ", " << need << endl;
        }

        mp[arr[i]] = i;
    }
}
