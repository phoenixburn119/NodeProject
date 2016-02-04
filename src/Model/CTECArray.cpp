/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: akin8529
 */

#include "CTECArray.h"
using namespace std;

template <class Type>
CTECArray<Type> :: CTECArray(int size)
{
	this->size = size;
	this->head = nullptr;

	//Defensive
	if(size <= 0)
	{
		cerr << "That is not allowed." << endl;
		return;
	}



}

template <class Type>
CTECArray<Type> :: ~CTECArray()
{
	// TODO Auto-generated destructor stub
}

template <class Type>
int CTECArray<Type> :: getSize()
{
	return this->size;
}

template <class Type>
void CTECArray<Type> :: set(int position, Type value)
{
	//We need to do bounds checking so we do not crash the program.
	if(position >= size || position < 0)
	{
		//I am out of bounds and need to do something about it
		cerr << "Position value is out of bounds." << endl;
	}
	else
	{
		//I am in bounds so I am inclusive
		ArrayNode<Type> * current = head;
		for (int spot = 0; spot < position; spot++)
		{
			if(spot != position)

			{
				current = current->getNext();
			}
			else
			{
				current->setValue(value);
			}
		}
	}
}

template <class Type>
Type* CTECArray<Type> :: get(int position)
{
	//We need to do bounds checking so we do not crash the program.
	if(position >= size || position < 0)
	{
		//I am out of bounds and need to do something about it
		cerr << "Position value is out of bounds." << endl;
		return nullptr;
	}
	else
	{
		//I am in bounds
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot<= position; spot++)
		{
			if(spot != position)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValu();
			}
		}
	}
}
