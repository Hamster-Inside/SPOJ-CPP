#include <iostream>

int main() {
	
	int count = 0;
	int k;
	int numLoop;
	std::cin >> numLoop;
	for (int i = 0; i < numLoop; i++) {
		std::cin >> k;
		if (k == 1) {
			std::cout << "NIE" << std::endl;
			continue;
		}
		for (int j = 1; j < k + 1; j++) {
			int c = k % j;
			if (c == 0) {
				count++;
			}
			if (count > 2) {
				std::cout << "NIE" << std::endl;
				break;
			}
		}
		if (count <= 2) {
			std::cout << "TAK" << std::endl;
		}
		count = 0;
	}
}