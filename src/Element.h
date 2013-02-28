/*
 * Element.h
 *
 *  Created on: 26 févr. 2013
 *      Author: quentin
 */



#ifndef ELEMENT_H_
#define ELEMENT_H_

class Element {
private:
	Position pos;

public:
	Element();
	virtual ~Element();
	const Position& getPos() const;
	void setPos(const Position& pos);
};

#endif /* ELEMENT_H_ */
