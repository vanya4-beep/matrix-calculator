#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d,e,f,g,h,i;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;

    pair <int, pair<int,int>> arr[]={{a,{b,c}},{d,{e,f}},{g,{h,i}}};
    int determinant= arr[0].first*(arr[1].second.first * arr[2].second.second - arr[1].second.second * arr [2].second.first)
    - arr[0].second.first*(arr[1].first* arr[2].second.second - arr[1].second.second *arr[2].first)
    +arr[0].second.second*(arr[1].first*arr[2].second.first - arr[1].second.first*arr[2].first);

    cout << determinant;

return 0;

}