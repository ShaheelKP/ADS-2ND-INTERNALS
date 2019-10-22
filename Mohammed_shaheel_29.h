#ifndef _INCLUDED_HEAP_
#define _INCLUDED_HEAP_

#include <stdint.h>
#define HEAP_MAX_SIZE 32

typedef struct _heap_ Heap;

typedef struct _event_ Event;


struct _Event_{
uint32_t time;
uint32_t aircraftno;
uint32_t takeoff;
};


struct  _heap_
{
	uint32_t	size;
	Event **data[HEAP_MAX_SIZE]	;
};


Event create_new(uint32_t time,uint32_t aircraftno,uint32_t takeoff);
Heap heap_new(Event **data, uint32_t len);
Heap* heap_sort(Heap *heap);
Heap* heap_insert(Heap *heap, Event *key);
Heap* heap_test(Heap *heap);
Event* heap_get_min(Heap *heap);
Event* heap_extract_min(Heap *heap);
uint32_t heap_size(Heap *heap);
#endif
