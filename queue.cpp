#include"queue.h"



template<typename T>
queue<T>::queue()
{
  ar = new T[7];
	first= -1;//|0| 1|2 |3 |4 |5 |6|
	last=-1;  //| |  |  |  |  |  | |
	used=0;
}
template<typename T>
void queue<T>:: pop()
{
  if(used == 0)
  {
  	std::cout<<"queue empty"<<'\n';
  }

  else first = (first+1)%7; used--;
}

template<typename T>
void queue<T>::push(T entry)
{
	if(used == capacity)
  {
  	std::cout<<"queue full"<<'\n';
  }



 if(first > -1) 
{
last = (last+1)%7;
ar[last] = entry; 
    
        used++;
}


        if(first ==- 1)
      {
        last = (last +1)%7;
        first++;
        ar[last] = entry; 
      
        used++;

       }
 


}

template <class T>
T queue<T>::front( )
{
  return ar[first];
}
template<class T>
T queue<T>::back()
{
  return ar[last];

}


