#ifndef FILEA_SUITE_H_
#define FILEA_SUITE_H_

#include "CUnit/Basic.h"
#include "fileA.h"


int init_suite_fileA(void);

int clean_suite_fileA(void);

void testNormalValuesA(void);

void testErrorValuesA(void);

#endif  /* FILEA_SUITE_H_ */
