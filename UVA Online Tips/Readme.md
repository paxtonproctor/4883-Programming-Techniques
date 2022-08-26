*when using scan or print*

short x;
// "%hd" or "%hi" for decimel conversion
// "%ho" for octal conversion
// "%hx" for hexadecimel conversion

unsigned short x;
// "%hu" for decimel conversion
// nothing for octal or hex input.
// Actually octal and hex input are not meant to be preceded by a "-".
// They are interpreted as a group of 3 or 4 bit respectively.

long long x;
// "%lld" or "lli" for decimel

long long int x;
// same as before.
// long is basically a type modifier rather than a type specifier.
// when you write "long" then "long int" is implied

long int x;
// "%ld" or "%li" for dec
// "%lo" for octal
// "%lx" for hex

long double x;
// "%Lf"

unsigned long x;
// "%lu"

unsigned int x;
// "%u"

unsigned double x;
unsigned long double x;
// floating point number are always signed (so far i know)

unsigned char c;
// "%c"

**Speed Tips**
