#ifndef MTGP64_FAST_JUMP_H
#define MTGP64_FAST_JUMP_H
/**
 * @file mtgp64_fast_jump.h
 *
 * @brief do jump using jump polynomial.
 *
 * @author Mutsuo Saito (Hiroshima University)
 * @author Makoto Matsumoto (The University of Tokyo)
 *
 * Copyright (C) 2012 Mutsuo Saito, Makoto Matsumoto,
 * Hiroshima University and The University of Tokyo.
 * All rights reserved.
 *
 * The 3-clause BSD License is applied to this software, see
 * LICENSE.txt
 */

#include "mtgp64-fast.h"

#if defined(__cplusplus)
extern "C" {
#endif
    void mtgp64_fast_jump(mtgp64_fast_t * mtgp64, const char * jump_string);

    inline static void mtgp64_copy(mtgp64_fast_t * dest, mtgp64_fast_t * src)
    {
	dest->params = src->params;
	dest->status->idx = src->status->idx;
	dest->status->size = src->status->size;
	dest->status->large_size = src->status->large_size;
	dest->status->large_mask = src->status->large_mask;
	for (int i = 0; i < dest->status->large_size; i++) {
	    dest->status->array[i] = src->status->array[i] ;
	}
    }

#if defined(__cplusplus)
}
#endif /* C++ */

#endif /* include fence */
