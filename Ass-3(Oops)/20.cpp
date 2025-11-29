#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    vector<int> ropes = {5, 2, 7, 12};
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int r : ropes) pq.push(r);

    int totalCost = 0;

    while(pq.size() > 1) {
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();

        int cost = a + b;
        totalCost += cost;
        pq.push(cost);
    }

    cout << "Minimum cost = " << totalCost;
}