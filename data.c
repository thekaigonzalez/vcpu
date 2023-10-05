#include "data.h"

#include <malloc.h>

// allocate the entire void* block
void
vcpu_alloc (vcpu_output_t *o)
{
  o->ptr = malloc (_VCPU_DEFAULT_ALLOC);
}

// re-allocates the current byte
void
vcpu_byte (vcpu_output_t *o)
{
  o->ptr[o->pl] = malloc (_VCPU_DEFAULT_ALLOC);
}

/* ANB - Allocate Next Byte (Allocates the next byte) */
void
vcpu_anb (vcpu_output_t *o)
{
  o->ptr[o->pl+1] = malloc(_VCPU_DEFAULT_ALLOC);
}

// moves the memory pointer over
void
vcpu_next (vcpu_output_t *o)
{
  o->pl++;
}

// literally just vcpu_byte()
void
vcpu_nbyte (vcpu_output_t *o)
{
  vcpu_byte (o);
}

// set the current memory cell to N
void
vcpu_put (vcpu_output_t *o, void *n)
{
  o->ptr[o->pl] = n;
}

void
vcpu_print (vcpu_output_t *o)
{
  printf("vcpu: %s\n", o->ptr);
}

void
vcpu_start (vcpu_output_t *o)
{
  o->pl = 0;
}
