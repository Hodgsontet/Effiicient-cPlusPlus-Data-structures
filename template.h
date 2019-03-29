
#ifndef  TEMPLATE_h
#define  TEMPLATE_h 

#include<iostream>


template<typename T>
class Stack
{
public:
Stack();
void pop();
void push(T entry);
int size();
void display();

void empty();

private:
	int capacity = 10;
	T* ar;
	int top = -1;
};


template<typename T>
Stack< T>::Stack()
{
	ar = new T[capacity];
}


template<typename T>
void Stack<T>::pop()
{
	if(top == -1)
	{
		std::cout<<"STACK UNDERFLOW------";
	}
	else top--;
}

template<typename T>
void Stack<T>::push(T entry)
{
	if(top ==capacity-1)
	{
		std::cout<<"STACK OVERFLOW------";
	}
	else
	 ar[top+1] = entry; top++;


}
template<typename T>
int Stack<T>::size()
{
  return top+1;
}

template<typename T>
void Stack<T>::display()
{
	std::cout<<"_____"<<'\n';
	for(int i = 0; i<top; i++)
	{
		std::cout<<"| "<<ar[i]<<" |"<<'\n';
	}
}



#endif
