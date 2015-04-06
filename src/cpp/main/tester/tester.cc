#include <iostream>
#include "../counter/counter.h"

int main() {
	BasicCounter counter_1;
	counter_1.setSeed(1);
	counter_1.setIntervalLength(3);
	counter_1.startCounter();
	counter_1.incrementCounter();
	std::cout << counter_1.getPos() << std::endl;
}
