#pragma once

using namespace std;
template <class T>
class Stack;
{
	T* data;
	int storage;
	int num;

public: stack(int = 30);
	  stack();
	  bool push(T item);
	  T top();
	  void pop();
	  int size();
	  bool empty();
	  void clear();
	  void print();
};

template <class T>
void Stack <T>::print() {
	for (int i = 0; i < num, i++) {
		if (i != 0) {
			std cout << ",";
		}
		std::cout << data[i];
	}
	std::cout << std::endl;
}