#include "gtest/gtest.h"
#include "point_array.h"
//
// Created by 忘尘 on 2022/4/7.
//

TEST(TEST_POINT, TEST_POINT_ARRAY) {
    FlexArray *f1 = (FlexArray *)malloc(sizeof(FlexArray) + 10 * sizeof(int32_t));
    f1->length = 1000;
    for (int32_t i = 0; i < 10; i++) {
        f1->data[i] = i;
    }
    void *ptr = CreatePointArray(1500);
    SetPointValue(ptr, 1234, f1);

    FlexArray *f2 = (FlexArray *)GetPointValue(ptr, 1234);
    printf("%d %d %d %d", f2->length, f2->data[0], f2->data[1], f2->data[2]);
}