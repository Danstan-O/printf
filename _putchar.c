#include <unistd.h>
#include "main.h"

int print(char c)
{
return (write(1, &c, c));
}
