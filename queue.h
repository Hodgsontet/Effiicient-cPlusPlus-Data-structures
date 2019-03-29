#include<iostream>

template<typename T>
class queue
{
public:
	queue();
	void pop();
	void push(T entry);
	int size();
	int front();
	int back();

private:
	int size;
	int first;
	int last;
	int capacity = 7;
	T ar[capacity];
}