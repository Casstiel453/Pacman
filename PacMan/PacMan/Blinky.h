#ifndef BLINKY_H_INCLUDED
#define BLINKY_H_INCLUDED
#include "Ghost.h"
#include "functions.h"

/** Class that derives from Ghost */
class Blinky : public Ghost
{
public:
	/*constructor for Blinky*/
	Blinky();
	/*destructor for Blinky*/
	~Blinky();


	/*Overrided function from class Ghost*/
	void moveBehaviour(char** &arr2) override;
};

#endif  //	BLINKY_H_INCLUDED