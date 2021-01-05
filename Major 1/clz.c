/*
 * clz.c
 *
 *  Created on: Oct 14, 2020
 *      Author: zachb
 */

#include "major1.h"

int countLeadingZeroes(int x) {
	int ret = 0;
	for(int i=31;i>=0;i--) {
		if( (x>>i) | 0 == 0) {
			ret++;
		}
		else {
			break;
		}
	}

	return ret;
}
