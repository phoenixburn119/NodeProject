/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: akin8529
 */

#include "NodeController.h"
#include <iostream>


NodeController::NodeController()
{
	stringNode.setValue("asdfakljd");
	intNode.setValue(999);

	stringArrayNode.setValue("Words in here");
	otherArrayNode.setValue("Linked node");
	stringArrayNode.setNext(&otherArrayNode);
}

NodeController::~NodeController() {
	// TODO Auto-generated destructor stub
}

void NodeController :: start()
{
	cout << "The contents the stringNode are " << stringNode.getValue() << endl;
	cout << "The contents of the stringArrayNode are : " << stringArrayNode.getValue() << endl;
	cout << "this is connected to stringArrayNode" << (*stringArrayNode.getNext()).getValue() << endl;
}
