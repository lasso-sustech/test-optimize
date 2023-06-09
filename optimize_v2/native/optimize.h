#ifndef __OPTIMIZE_H__
#define __OPTIMIZE_H_

float init_throttle_fraction(int, float const *const, float const *const);
void fraction_to_throttle(float, int, float const *const, float const *const, float *const);
float update_throttle_fraction(int, float const *const, float const *const);

#endif
