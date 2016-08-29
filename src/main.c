/**
* @file main.c
* @brief this is the main
*
* @author joaoantoniocardoso
*
* @date 8/26/2016
*/

#include "main.h"
#include "../lib/globalDefines.h"
#include "../lib/ATmega328.h"

uint8   var1;       //!< Brief description of this variable
uint16  var2;       //!< A more complete description like thins could use more
                    //!< than one line if necessary.

/// @Brief description which ends at this dot. Details follow
/// here...
/// @param a The first argument of the sum.
/// @param b The second argument of the sum.
int soma(int a, int b)
{
	return a+b;
}

//! A normal member taking two arguments and returning an integer value.
/*!
  @param a an integer argument.
  @param s a constant character pointer.
  @return The test results
  @sa soma(int a, int b), main(void)
*/
int testMe(int a,const char *s);

int main(void)
{
	for(;;);		//!< 	main loop
}
