#include <stdio.h>

#include "foo.h"

int main()
{
  fprintf(stderr, "Main\n");

  do_thing("Call");

  return 0;
}
