#include <iostream>
using namespace std;

int main() {
    while(true){
        long long N, S, Answer = 0;
        cin >> N >> S;
        if(!N and !S)break;
        
        for (int i = 1; i <= N; i++) {
            for (int j = i+1; j <= N; j++) {
                int k = S - i - j;
                if (j < k && k <= N) {
                    Answer += 1;
                    cout << i << j << k << endl;
                }
            }
        }
        cout << Answer << endl;
    }
    return 0;
}