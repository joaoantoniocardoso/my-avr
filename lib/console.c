/** @file console.c
 *  @brief A console driver.
 *
 *  These empty function definitions are provided
 *  so that stdio will build without complaining.
 *  You will need to fill these functions in. This
 *  is the implementation of the console driver.
 *  Important details about its implementation
 *  should go in these comments.
 *
 *  @author Harry Q. Bovik (hqbovik)
 *  @author Fred Hacker (fhacker)
 *  @bug No know bugs.
 */

#include <console.h>

int
putbyte( char ch )
{
  return ch;
}

void 
putbytes( const char *s, int len )
{
}

void
set_term_color( int color )
{
}

void
get_term_color( int *color )
{
}

void
set_cursor( int row, int col )
{
}

void
get_cursor( int *row, int *col )
{
}

void
hide_cursor()
{
}

void
show_cursor()
{
}

void 
clear_console()
{
}

void
draw_char( int row, int col, int ch, int color )
{
}
