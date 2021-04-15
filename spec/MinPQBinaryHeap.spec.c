#include "MinPQBinaryHeap.spec.h"

module(T_MinPQBinaryHeap, {
    describe("#get_value", {
        it("returns `Hello, World!`", {
            assert_that_charptr("Hello, World!" equals to "Hello, World!");
        });
    });
});

spec_suite({
    T_MinPQBinaryHeap();
});

spec({
    run_spec_suite("all");
});
