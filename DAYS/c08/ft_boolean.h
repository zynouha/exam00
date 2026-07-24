#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
#include <unistd.h>

# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments. \n"
# define ODD_MSG "I have an odd numbers of arguments. \n"
# define SUCCESS 0 
# define EVEN(nbr) nbr % 2 == 0 //macro

typedef int t_bool; //not macro
//those all are "MACROS": A macro is just a piece of text that gets replaced by other text before your code is even compiled.
// It's not a variable, not a function, not a type — it's literally a find-and-replace operation that happens automatically.


#endif