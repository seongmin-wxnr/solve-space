#include <iostream>
#include <vector>

// ������ ���� ����

int main() {
	std::ios_base::sync_with_stdio(false); // ǥ�� ����� ����ȭ ����
	std::cin.tie(NULL); // ����� ���� ����

	std::vector<int> dw_xfactor;
	std::vector<int> size_counter; // �⺻ ������ ����
	int absolute_value, x;
	int dfx = 0;
	while (true) {
		std::cin >> x;
		if (x == -1) {
			break;
		}
		else if (x <= 0) {
			break;
		}

		for (int i = 1; i <= x; i++) {
			absolute_value = x % i;
			if (absolute_value == 0) {
				dw_xfactor.push_back(i);
			}
		}
		dw_xfactor.resize(dw_xfactor.size());
		size_counter.resize(x);
		for (int xf = 0; xf < dw_xfactor.size(); xf++) {
			dfx = dfx + dw_xfactor[xf];
			//std::cout << dw_xfactor[xf] << std::endl;

		}
		int xr = dfx - size_counter.size();
		if (xr == x) {
			//std::cout << x << " :: TRUE" << std::endl;
			std::cout << xr << " = ";
			for (int df1 = 0; df1 < dw_xfactor.size() - 1; df1++) {
				std::cout << dw_xfactor[df1] << " + ";
			}
		}
		else if (xr != x) {
			std::cout << x << " is NOT perfect" << std::endl;
		}

		dfx = int{};
		xr = int{};
		dw_xfactor.clear();
	}
	return 0;
}