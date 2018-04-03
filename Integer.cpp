#include "Integer.h"
using MyLibrary::Integer;


Integer::Integer(int val)
{
   value = val;
}

Integer::~Integer()
{
}

int Integer::getValue()
{
   return value;
}
