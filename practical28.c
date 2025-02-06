#include <stdio.h>  // #include: Includes standard input-output header file

#define PI 3.14159   // #define: Defines a macro PI

#undef PI  // #undef: Undefines the macro PI

#define FEATURE_ENABLED  // Defining a feature flag

int main() {
    
    #ifdef PI  
        printf("PI is defined: %f\n", PI);
    #else
        printf("PI is not defined\n");
    #endif

    #ifndef MAX_SIZE  
        #define MAX_SIZE 100  // Defining MAX_SIZE only if it's not already defined
    #endif

    printf("Max Size: %d\n", MAX_SIZE);

    #ifdef FEATURE_ENABLED
        printf("Feature is enabled!\n");
    #else
        printf("Feature is disabled!\n");
    #endif

    return 0;
}

