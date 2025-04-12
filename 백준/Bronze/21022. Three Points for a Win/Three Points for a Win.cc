#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);

    // 점수 입력
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < N;++i) {
        cin >> B[i];
    }
    // 점수 계산
    int total_points = 0;
    for (int i = 0; i < N; ++i) {
        total_points += (A[i] > B[i] ? 3 : (A[i] == B[i] ? 1 : 0));
    }

    // 결과 출력
    cout << total_points << endl;
}