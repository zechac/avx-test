/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2018. All rights reserved.
 * Description: avx2neon test head file
 * Author: xuqimeng
 * Create: 2019-11-05
*/
#ifndef AVX2NEON_TEST_H
#define AVX2NEON_TEST_H

#define TRUE 1
#define FALSE 0

#define DEFAULT_EPSILON_F32 1e-4
#define DEFAULT_EPSILON_F64 1e-8

#include "immintrin.h"

typedef enum {
  
    UT_MM512_MASK_SWIZZLE_EPI32_NONE,
    UT_MM512_MASK_SWIZZLE_EPI32_DCBA,
    UT_MM512_MASK_SWIZZLE_EPI32_CDAB,
    UT_MM512_MASK_SWIZZLE_EPI32_BADC,
    UT_MM512_MASK_SWIZZLE_EPI32_AAAA,
    UT_MM512_MASK_SWIZZLE_EPI32_BBBB,
    UT_MM512_MASK_SWIZZLE_EPI32_CCCC,
    UT_MM512_MASK_SWIZZLE_EPI32_DDDD,
    UT_MM512_MASK_SWIZZLE_EPI32_DACB,
    UT_MM512_MASK_SHUFFLELO_EPI16
} InstructionTest;

const char *RunTest(InstructionTest test, int *flag);

int IsEqualFloat32x4(__m128 a, const float32_t *x, float epsilon);
int IsEqualFloat64x2(__m128d a, const float64_t *x, float epsilon);
int test_mm512_mask_swizzle_epi32_NONE();
int test_mm512_mask_swizzle_epi32_DCBA();
int test_mm512_mask_swizzle_epi32_CDAB();
int test_mm512_mask_swizzle_epi32_BADC();
int test_mm512_mask_swizzle_epi32_AAAA();
int test_mm512_mask_swizzle_epi32_BBBB();
int test_mm512_mask_swizzle_epi32_CCCC();
int test_mm512_mask_swizzle_epi32_DDDD();
int test_mm512_mask_swizzle_epi32_DACB();
int test_mm512_mask_shufflelo_epi16();

#endif
