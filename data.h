// Copyright 2023 Kai D. Gonzalez

/* functions to send data in and out of an output type */

#include "system.h"

void vcpu_alloc (vcpu_output_t *o); // allocate `a` amount of memory

void vcpu_byte (vcpu_output_t *o); // set 1 byte of memory
void vcpu_anb (vcpu_output_t *o); // allocates the next byte of memory
void vcpu_next (vcpu_output_t *o); // moves to the next point of memory

void vcpu_nbyte (vcpu_output_t *o); // set 1 byte of memory then move to
                                    // the next byte (unallocated)

void vcpu_put (vcpu_output_t *o, void *n); // sets the current place to n

void vcpu_print(vcpu_output_t *o); // print the memory 

void vcpu_start(vcpu_output_t *o); // set point to 0
