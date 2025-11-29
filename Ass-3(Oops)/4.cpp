#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {3, 6, 2, 28};
    int n = arr.size();
    vector<int> ans(n);
    stack<int> st;

    for(int i = n-1; i >= 0; i--) {
        while(!st.empty() && st.top() <= arr[i])
            st.pop();
        
        ans[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }

    for(int x : ans) cout << x << " ";
}
