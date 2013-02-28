/*
 * Position.h
 *
 *  Created on: 26 févr. 2013
 *      Author: quentin
 */

#ifndef POSITION_H_
#define POSITION_H_

#include <iostream>
using namespace std;

class Position {
private:
	int abs;
	int ord;
public:
	Position();
	Position(int, int);
	virtual ~Position();
	int getAbs() const;
	void setAbs(int abs);
	int getOrd() const;
	void setOrd(int ord);
};

ostream& operator << (ostream &, const Position&);

#endif /* POSITION_H_ */
