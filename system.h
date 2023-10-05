// Copyright 2023 Kai D. Gonzalez

#ifndef SYSTEM_H
#define SYSTEM_H

#define MAX_BUFFERSIZE 10
#define MAX_KWSZ 4
#define MAX_VOIDSZ 100
#define _VCPU_DEFAULT_ALLOC 1L

/* KEYWORDS */
#define KW_MOVE "MOVE" // move n bytes into pointer
#define KW_COPY "COPY" // copy x byte over y amount of times
#define KW_PUTS                                                               \
  "PUTS" // add data to the pointer (assuming we have enough memory to perform
         // the action)
#define KW_BEGIN "BEGIN" // start the program
#define KW_END "END"     // exit the program
#define KW_LET "LET"     // print the * ptr
#define KW_HALT "HALT"   // do not exit at all

typedef void *vcpu_info_t;
typedef int vcpu_nmemnum_t;

typedef struct
{
  vcpu_nmemnum_t stl; /* statement line */
  vcpu_nmemnum_t pl;  /* place in the pointer */

  vcpu_info_t *ptr; /* pointer to the data */
} vcpu_output_t;

#endif
