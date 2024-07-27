#pragma once
class Time {
public:
	Time();  
	Time(int hours, int minutes, int seconds);
	void display() const;
	Time  plus(const Time& t2) const;
private:
	int hours;
	int minutes;
	int seconds;
	void normalTime();
};