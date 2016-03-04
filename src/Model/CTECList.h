/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: akin8529
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

template<class Type>
class CTECList: public Node<Type>
{
private:
	CTECList<int> * size;
	CTECList<String> * head;
	//head : ArrayNode<Type>;
	end : ArrayNode<Type>;
public:
	CTECList();
	virtual ~CTECList();

};

#endif /* MODEL_CTECLIST_H_ */
