#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {800, 840, 850, 1100, 1400, 1900};
    int dep[] = {810, 1200, 1120, 1150, 1800, 2010};
    int n = 6;

    sort(arr, arr+n);
    sort(dep, dep+n);

    int i=0, j=0, plat=0, maxPlat=0;

    while(i<n && j<n){
        if(arr[i] <= dep[j]) {
            plat++;
            maxPlat = max(maxPlat, plat);
            i++;
        } else {
            plat--;
            j++;
        }
    }

    cout << "Minimum platforms needed = " << maxPlat;
}
