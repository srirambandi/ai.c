#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct Parameter{
    int *data;
    int *grad;
} Parameter;