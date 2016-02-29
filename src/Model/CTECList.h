/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: akin8529
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

class CTECList {
private:
	size : int;
	head : ArrayNode<Type>;
	end : ArrayNode<Type>;
public:
	CTECList();
	virtual ~CTECList();
};

#endif /* MODEL_CTECLIST_H_ */
