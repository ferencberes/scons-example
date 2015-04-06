#ifndef COUNTER_H
#define COUNTER_H

class BasicCounter {
public:
	BasicCounter() : seed(0), interval_length(10), pos(0) {}

	void setSeed(int num);
	void setIntervalLength(int num);
	int getSeed() { return seed;}
	int getIntervalLength() {return interval_length;}
	int getPos() {return pos;}
	void startCounter();
	void incrementCounter();

private:
	int seed;
	int interval_length;
	int pos;

};

#endif
