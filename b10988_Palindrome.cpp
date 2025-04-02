#include <iostream>
#include <algorithm>


int main() {
	std::ios_base::sync_with_stdio(false);

	std::string inputs;
	std::cin >> inputs;

	for (int i = 0; i <= inputs.length() / 2; i++) {
		if (inputs[i] != inputs[inputs.length() - i - 1]) {
			std::cout << 0;
			return 0;
		}
	}
	std::cout << 1;
	return 0;

}
