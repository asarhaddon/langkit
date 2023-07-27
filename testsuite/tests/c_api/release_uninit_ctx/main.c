#include <stdio.h>

#include "libfoolang.h"

int
main (void)
{
  foo_analysis_context ctx = foo_allocate_analysis_context ();

  foo_release_uninitialized_analysis_context (ctx);

  puts ("main.c: Done.");
  return 0;
}
