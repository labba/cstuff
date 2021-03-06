#ifndef __LOAD_H__
#define __LOAD_H__
 

/* -- memory allocations -- */

typedef void * (*PFN_malloc) (size_t sz);
typedef void   (*PFN_free) (void *ptr);
typedef void * (*PFN_calloc) (size_t count, size_t size );
typedef void * (*PFN_realloc) ( void *ptr, size_t size );
typedef int    (*PFN_mallopt) (int param, int value);

#endif

