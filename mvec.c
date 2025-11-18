/* SPDX-License-Identifier: Unlicense */
#include <math.h>

typedef double [[gnu::vector_size(16)]] v2df;
typedef float [[gnu::vector_size(16)]] v4sf;

v2df
_ZGVbN2v_exp(v2df x)
{
	x[0] = exp(x[0]);
	x[1] = exp(x[1]);
	return x;
}

v4sf
_ZGVbN4v_expf(v4sf x)
{
	x[0] = expf(x[0]);
	x[1] = expf(x[1]);
	x[2] = expf(x[2]);
	x[3] = expf(x[3]);
	return x;
}

v2df
_ZGVbN2v_log(v2df x)
{
	x[0] = log(x[0]);
	x[1] = log(x[1]);
	return x;
}

v4sf
_ZGVbN4v_logf(v4sf x)
{
	x[0] = logf(x[0]);
	x[1] = logf(x[1]);
	x[2] = logf(x[2]);
	x[3] = logf(x[3]);
	return x;
}

v2df
_ZGVbN2v_sin(v2df x)
{
	x[0] = sin(x[0]);
	x[1] = sin(x[1]);
	return x;
}

v2df
_ZGVbN2vv_pow(v2df x, v2df y)
{
	x[0] = pow(x[0], y[0]);
	x[1] = pow(x[1], y[1]);
	return x;
}
