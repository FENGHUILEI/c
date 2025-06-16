#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

auto getFactors(int n){
    vector<int> v;
    for(int i = 1; i * i <= n; ++i){
        if(n % i == 0){
            v.push_back(i);
            if(i != n / i) v.push_back(n / i);
        }
    }
    sort(v.begin(), v.end());

    return v;
}

int main(){
    int n;
    cin >> n;
    auto factors = getFactors(n);
    for(auto f : factors){
        cout << f << " ";
    }
    cout << endl;
    return 0;
}