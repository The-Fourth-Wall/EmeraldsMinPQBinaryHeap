#include "../libs/cSpec/export/cSpec.h"
#include "min_pq_binary_heap_base/min_pq_binary_heap_base.module.spec.h"

int main(void) {
  cspec_run_suite("all", { T_min_pq_binary_heap_base(); });
}
