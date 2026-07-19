#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(value) ((value) * (((value) < 0) * -1 + ((value) > 0) * 1))
                    //7 * (flase because 7 not < 0) 0 * -1 + 1 (because 7>0 is true) * 1= 7

//(value < 1) ? (value * -1) : (value) | ternary is forbidden
                // if value is negative -> value * -1 (so it become positive): else (value)
#endif