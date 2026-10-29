/*******************************************************************************
 *License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>*
 *This is free software: you are free to change and redistribute it.           *
 *******************************************************************************/
#ifndef _IBMP32_H_
#define _IBMP32_H_
#include <stdint.h>
struct ibmp32 {
	uint32_t width;
	uint32_t height;
	uint32_t data[];
};
#define ib_pixel(p,x,y) ({\
	struct ibmp32 _bp=(struct ibmp32 *)(uintptr_t)(p);\
	_bp->data+(x)+(y)*(size_t)_bp->width;\
})

#endif
