#include <iostream>
using namespace std;

// 함수 프로토타입 선언
double SumAll(double arr[]);
double ArgAll(double arr[]);
void SortAll(double arr[], int n);

int main() {
    double Arr[5];
    int num = 5;

    cout << "첫 번째 숫자 입력:";
    cin >> Arr[0];
    cout << "두 번째 숫자 입력:";
    cin >> Arr[1];
    cout << "세 번째 숫자 입력:";
    cin >> Arr[2];
    cout << "네 번째 숫자 입력:";
    cin >> Arr[3];
    cout << "다섯 번째 숫자 입력:";
    cin >> Arr[4];

    double Sum = Arr[0] + Arr[1] + Arr[2] + Arr[3] + Arr[4];
    double Arg = Sum / 5;

    cout << "총합: " << Sum << endl;
    cout << "평균: " << Arg << endl;
    cout << "----------" << endl;

    double FunSum = SumAll(Arr);
    double FunArg = ArgAll(Arr);

    cout << "(함수) 총합: " << FunSum << endl;
    cout << "(함수) 평균: " << FunArg << endl;

    // 버블 정렬
    cout << "버블 정렬: ";
    SortAll(Arr, num);

    return 0;
}

// 함수 정의
double SumAll(double arr[]) {
    return arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
}

double ArgAll(double arr[]) {
    return (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;
}

void SortAll(double arr[], int n)
{
    double temp;
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[j + 1]) { // 내림차순 정렬
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 정렬 결과 출력
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
