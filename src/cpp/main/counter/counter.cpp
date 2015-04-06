#include "counter.h"
#include <iostream>

void BasicCounter::setSeed(int num) {
	seed = num;
}

void BasicCounter::setIntervalLength(int num) {
	interval_length = num;
}

void BasicCounter::startCounter() {
	pos = seed;
}

void BasicCounter::incrementCounter() {
	try {
		if (pos < seed + interval_length) {
			pos++;
		} else {
			throw "Counter reached end of interval!";
		}
	} catch (const char* msg) {
		std::cerr << msg << std::endl;
	}
}
