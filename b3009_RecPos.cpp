#include <iostream>
#include <vector>
#include <algorithm>

/// ·¹Àüµå ¤»¤»
 

int main() {
	int x, y, x1, y1, x2, y2;
	std::cin >> x >> y;  std::cin >> x1 >> y1; std::cin >> x2 >> y2;

	std::cout << int(x ^ x1 ^ x2) << " " << int(y ^ y1 ^ y2) << std::endl;
}