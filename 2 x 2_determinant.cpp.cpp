#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    pair <int, int> arr[]={{a,b},{c,d}};
    int determinant= arr[0].first*arr[1].second-arr[0].second*arr[1].first;

    cout << determinant;

return 0;

}