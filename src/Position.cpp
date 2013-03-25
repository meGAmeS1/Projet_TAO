/*
 * Position.cpp
 *
 *  Created on: 26 févr. 2013
 *      Author: quentin
 */

#include "Position.h"
#include "econio.h"

Position::Position() {
	// TODO Auto-generated constructor stub

}

Position::Position(int _a, int _o):abs(_a),ord(_o){}

ostream& operator << (ostream & Out, const Position& Cpl)
{
    textcolor(GREEN);
    Out<< "("<<Cpl.getAbs()<<";"<<Cpl.getOrd()<<")";
    textcolor(LIGHTGRAY);
    return Out;
}

bool operator != (const Position& _pos1, const Position& _pos2){
    if((_pos1.getAbs()!=_pos2.getAbs()) && ((_pos1.getOrd()!=_pos2.getOrd()))) return true;

    return false;
}

bool Position:: operator < (const Position & p) const
{
 return ((abs< p.abs) || ((abs==p.abs) && (ord<p.ord)));
}

int Position::getAbs() const {
	return abs;
}

void Position::setAbs(int abs) {
	this->abs = abs;
}

int Position::getOrd() const {
	return ord;
}

void Position::setOrd(int ord) {
	this->ord = ord;
}

Position::~Position() {
	// TODO Auto-generated destructor stub
}

