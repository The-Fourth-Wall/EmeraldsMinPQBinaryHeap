#include "../export/EmeraldsMinPQBinaryHeap.h" /* IWYU pragma: keep */

int main(void) {
  EmeraldsMinPQBinaryHeap *self = pq_new(20);
  pq_insert(self, (void *)20);
  pq_insert(self, (void *)15);
  pq_insert(self, (void *)8);
  pq_insert(self, (void *)10);
  pq_insert(self, (void *)5);
  pq_insert(self, (void *)7);
  pq_insert(self, (void *)6);
  pq_insert(self, (void *)2);
  pq_insert(self, (void *)9);
  pq_insert(self, (void *)1);

  pq_print(self);

  pq_fix_down(self, 5, (void *)22);
  pq_print(self);

  printf("%ld\n\n", (long)pq_get_min(self));
  printf("%ld\n\n", (long)pq_delete_min(self));

  pq_print(self);

  printf("%ld\n", (long)pq_delete_min(self));
  printf("%ld\n", (long)pq_delete_min(self));
  printf("%ld\n", (long)pq_delete_min(self));
  printf("%ld\n", (long)pq_delete_min(self));
  printf("%ld\n", (long)pq_delete_min(self));
  printf("%ld\n", (long)pq_delete_min(self));
  printf("%ld\n", (long)pq_delete_min(self));
  printf("%ld\n", (long)pq_delete_min(self));
  printf("%ld\n", (long)pq_delete_min(self));

  pq_free(self);

  return 0;
}
