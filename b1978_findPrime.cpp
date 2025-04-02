#include <iostream>
#include <vector>

// 문제1

/*

문제 -
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

입력 -
첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.

출력 -
주어진 수들 중 소수의 개수를 출력한다.


입출력 예제 - 
4					3
1 3 5 7     
*/
int main() {
    int a1;
    std::cin >> a1;
    int ax;
    int ar = 0;
    for (int i = 0; i < a1; i++) {
         
        std::cin >> ax;
        int az = 0;
        for (int i = 1; i <= ax; i++) {
            if (ax % i == 0) {
                az++;
            }
        }
        if (az == 2) {
            ar++;
        }
    }
    std::cout << ar;
    return 0;
}
