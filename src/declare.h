#ifndef DECLARE_H
#define DECLARE_H

//HEADER FILES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include "./header/mstring.h"

// CONSTANTS
#define SCALAR 4
#define BUFFER 1024 * SCALAR
#define LOWBUFFER 1024 / SCALAR

#define PROMPT "\nsMash $"
#define TERMIN "> "

#define DELIMETERS " \t\r\n"

#endif