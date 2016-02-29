/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: akin8529
 */

#include "CTECList.h"

template<class Type>
CTECList::CTECList()
{
	this->size = 0;
	this->head = nullprt;
	this->end = nullprt;

}

template<class Type>
CTECList::~CTECList() {
	// TODO Auto-generated destructor stub
}

template<class Type>
Type CTECList<Type> :: removeFromFront()
{
	//Check that not removing from empty list
	assert(this->size > 0);
	//Declare an variable of the type to return.
	Type thingToRemove;
	//Create a pointer to what is after head.
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = this->head->getNext();
	//Get what had is holding!
	thingToRemove = this->head->getValue();
	//Delete what head is pointing to.
	delete this->head;
	//Set head to the new head.
	this->head= newHead;

	return thingToRemove;
}

template<class Type>
Type CTECList<Type> :: removeFromFont()
{
	//Find the next spot.
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	//Remove head
	delete head;
	//Move head to next spot.
	head = newHead;
}

template <class Type>
void CTECList<Type> :: calculateSize()
{
	assert(size >= 0);

	int count = 0;
	if(head == nullptr)
	{
		size = count
	}
	else
	{
		count++;
		ArrayNode<Type> * current = head;
		while(current->getNext() != nullptr)
		{
			count++;
			current = current->getNext();
		}
		size = count;
	}
}
