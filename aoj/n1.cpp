#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    double num[100][2];
    
    // 座標の入力
    for(int i = 0; i < n; i++) {
        cin >> num[i][0];
    }
    
        // 座標の入力
    for(int i = 0; i < n; i++) {
        cin >> num[i][1];
    }

    double d1 = 0.0, d2 = 0.0, d3 = 0.0, dInf = 0.0;

    for(int i = 0; i < n; i++) {
        double tmp = abs(num[i][0] - num[i][1]);
        d1 += tmp;
        d2 += pow(tmp, 2);
        d3 += pow(tmp, 3);
        dInf = max(dInf, tmp); // p=∞の場合は各差の最大値を取る
    }

    d2 = pow(d2, 1.0 / 2); // p=2の場合の総和の平方根
    d3 = pow(d3, 1.0 / 3); // p=3の場合の総和の立方根

    // 結果の出力
    cout << fixed << setprecision(6);
    cout <<  d1 << endl;
    cout <<  d2 << endl;
    cout <<  d3 << endl;
    cout <<  dInf << endl;

    return 0;
}
