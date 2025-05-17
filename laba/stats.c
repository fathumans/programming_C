#include <stdarg.h>
#include "stats.h"

int sum(int count, ...) {
    va_list args;
    va_start(args, count);
    
    int total = 0;
    for(int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }
    
    va_end(args);
    return total;
}

int max(int count, ...) {
    va_list args;
    va_start(args, count);
    
    int max_val = va_arg(args, int);
    for(int i = 1; i < count; i++) {
        int current = va_arg(args, int);
        if(current > max_val) {
            max_val = current;
        }
    }
    
    va_end(args);
    return max_val;
}

int min(int count, ...) {
    va_list args;
    va_start(args, count);
    
    int min_val = va_arg(args, int);
    for(int i = 1; i < count; i++) {
        int current = va_arg(args, int);
        if(current < min_val) {
            min_val = current;
        }
    }
    
    va_end(args);
    return min_val;
}

double average(int count, ...) {
    va_list args;
    va_start(args, count);
    
    int total = 0;
    for(int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }
    
    va_end(args);
    return (double)total / count;
}
