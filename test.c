#include "data.h"

#include <stdio.h>

main ()
{
  vcpu_output_t output;

  vcpu_start (&output);

  vcpu_alloc (&output);

  vcpu_byte (&output);

  vcpu_put (&output, 'h');

  vcpu_next (&output);

  vcpu_byte (&output);

  vcpu_put (&output, '\0');

  vcpu_next (&output);

  vcpu_print (&output);
}
