#ifndef CLYDE_H_INCLUDED
#define CLYDE_H_INCLUDED
#include "Ghost.h"
#include "functions.h"
/** Class that derives from Ghost */
class Clyde : public Ghost
{
public:
	/*constructor for Clyde*/
	Clyde();
	/*destructor for Clyde*/
	~Clyde();

	/*Overrided function from class Ghost*/
	void moveBehaviour(char** &arr2)override;
};

#endif  //	CLYDE_H_INCLUDED