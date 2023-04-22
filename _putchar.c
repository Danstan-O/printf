#include <unistd.h>
#include "main.h"

int putchar(char c)
{
return (write(1, &c, c));
}
