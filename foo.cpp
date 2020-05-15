#include <cstdio>

#include "foo.h"

int do_thing(char *thing)
{
  fprintf(stderr, "Thing: %s\n", thing);
  return 1;
}
