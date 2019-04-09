#ifndef QUEUE_H
#define QUEUE_H
#include<iostream>
#include<cassert>

template<typename T>
class queue
{
public:
	queue();
	void pop();
	void push(T entry);
	int size();
	
	T front();
        T back();
	static const int capacity = 7;

private:
	int used;
	int first;
	int last;
	
	T* ar;
};


#include "queue.cpp" 


#endif
