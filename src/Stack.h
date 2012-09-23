#ifndef __STACK_H__
#define __STACK_H__

//#include "Node.h"

class Stack {
	private:
	  Node* top;
	  int numElements;

	public:
 	  StacK();
	  ~Stack();//destructor
	  void push(nt value);
	  int pop();
	  int peek();
	  int size();
};

#endif
