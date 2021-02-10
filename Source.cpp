#include<iostream>

int main() {
	void recursivePrint(int &i);
	int iterator = 100;

	recursivePrint(iterator);
}

void recursivePrint(int& i) {
	if (i > 0) {
		std::cout << i << "\n";
		i--;
		recursivePrint(i);
	}
	else
		return;
}