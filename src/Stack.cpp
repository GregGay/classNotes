#include "Stack.h"
#include <assert.h>
#include <iostream>

Stack::stack() {
	top =0;
	numElements=0;
}

Stack::~Stack() {
	while (numElements!=0) {
		std::cout<<"popping"<<top->getValue()<<std::endl;
		pop();
	}
	/*Node* temp;
	for (int i=1; i<numElements; ++i) {
		//pop();
		temp=top;
		top=temp->getNext();
		delete temp;
	}*/
}

void Stack::push(int i) {
	Node* temp = new Node(i);
	temp->setNext(top);
	top=temp;
	numElements++;
}

int Stack::pop() {
	Node* temp=top;
	int result = temp->getValue();
	top=temp->getNext();
	delete temp;
	return result;
}

int Stack::peek() {
	assert(numElements!=0);
	return top->getValue();
}

int Stack::size() {
	return numElements;
}
