#include "main.h"
/**
 *_islower - Begin Here
 *@c: Character ASCII code
 * *return 1 if lower case and 0 otherwise
 *Return: Value 0 (true)
 **/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}

