#include <stdio.h>
#include <limits.h>
int main(){
    printf("SCHAR_MAX: %d\n", SCHAR_MAX);
    printf("SCHAR_MIN: %d\n", SCHAR_MIN);
    printf("UCHAR_MAX: %d\n", UCHAR_MAX);
    printf("UCHAR_MIN: %d\n", -UCHAR_MAX);
    printf("SSHORT_MAX: %d\n", SHRT_MAX);
    printf("SSHORT_MIN: %d\n", SHRT_MIN);
    printf("USHORT_MAX: %d\n", USHRT_MAX);
    printf("SINT_MAX: %d\n", INT_MAX);
    printf("SINT_MIN: %d\n", INT_MIN);
    printf("UINT_MAX: %u\n", UINT_MAX); //Int 8Bytes
    printf("SLONG_MAX: %ld\n", LONG_MAX);
    printf("SLONG_MIN: %ld\n", LONG_MIN);
    printf("ULONG_MAX: %lu\n", ULLONG_MAX); //Long 16Bytes
    return 0;
}