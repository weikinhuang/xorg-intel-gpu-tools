/*
 * Copyright © 2018 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#ifndef __IGT_MATRIX_H__
#define __IGT_MATRIX_H__

/**
 * igt_vec4:
 * @d: vector elements
 *
 * A 4 element column vector (4x1 matrix).
 */
struct igt_vec4 {
	float d[4];
};

/**
 * igt_mat4:
 * @d: matrix elements
 *
 * A 4x4 column major matrix.
 */
struct igt_mat4 {
	float d[16];
};

void igt_matrix_print(const struct igt_mat4 *m);
struct igt_mat4 igt_matrix_identity(void);
struct igt_mat4 igt_matrix_scale(float x, float y, float z);
struct igt_mat4 igt_matrix_translate(float x, float y, float z);
struct igt_vec4 igt_matrix_transform(const struct igt_mat4 *m,
				     const struct igt_vec4 *v);
struct igt_mat4 igt_matrix_multiply(const struct igt_mat4 *a,
				    const struct igt_mat4 *b);

#endif /* __IGT_MATRIX_H__ */
