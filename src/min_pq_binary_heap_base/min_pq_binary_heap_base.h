#ifndef __MIN_PQ_BINARY_HEAP_BASE_H_
#define __MIN_PQ_BINARY_HEAP_BASE_H_

#include "../../libs/EmeraldsBool/export/EmeraldsBool.h"

#include <stdio.h>  /* printf */
#include <stdlib.h> /* malloc, free */

typedef struct EmeraldsMinPQBinaryHeap {
  void **A;
  size_t size;
  size_t max_size;
} EmeraldsMinPQBinaryHeap;

/**
 * @func: pq_new
 * @brief Allocated new memory space for the PQ
 * @param max_size -> The maximum size to store
 * @return EmeraldsMinPQBinaryHeap* -> The newly created object
 */
EmeraldsMinPQBinaryHeap *pq_new(size_t max_size);

/**
 *
 * @brief Checks whether the structure is empty or not
 * @param self -> The PQ object
 * @return true -> if empty else false
 */
bool pq_is_empty(EmeraldsMinPQBinaryHeap *self);

/**
 * @func: pq_get_min
 * @brief Get the minimum element (ON THE MIN_PQ ITS JUST `pq[0]`)
 * @param self -> The PQ object
 * @return void* -> The value of the minimum element
 */
void *pq_get_min(EmeraldsMinPQBinaryHeap *self);

/**
 * @func: pq_delete_min
 * @brief Deletes the minimum element and fixes the heap
 * @param self -> The PQ object
 * @return void* -> The element deleted
 */
void *pq_delete_min(EmeraldsMinPQBinaryHeap *self);

/**
 * @func: pq_fix_up
 * @brief Balance the heap upwards
 * @param self -> The PQ object
 * @param i -> The index of the element to fix
 * @param key -> The value of the element to fix
 */
void pq_fix_up(EmeraldsMinPQBinaryHeap *self, size_t index, void *key);

/**
 * @func: pq_fix
 * @brief Balance the heap downwards
 * @param self -> The PQ object
 * @param i -> The index of the element to fix
 * @param key -> The value of the element to fix
 */
void pq_fix_down(EmeraldsMinPQBinaryHeap *self, size_t index, void *key);

/**
 * @func: pq_insert
 * @brief Insert a new node on the priory queue
 * @param self -> The PQ object
 * @param key -> The value of the new element
 */
void pq_insert(EmeraldsMinPQBinaryHeap *self, void *key);

/**
 * @func: pq_print
 * @brief Prints the current elements of the PQ
 * @param self -> The PQ object
 */
void pq_print(EmeraldsMinPQBinaryHeap *self);

/**
 * @func: pq_reset
 * @brief Resets the priority queue by freeling the structure and reallocating
 * space
 * @param self -> The PQ object
 */
void pq_reset(EmeraldsMinPQBinaryHeap *self);

/**
 * @func: pq_free
 * @brief Frees the priority queue
 * @param self -> The PQ object
 */
void pq_free(EmeraldsMinPQBinaryHeap *self);

#endif
