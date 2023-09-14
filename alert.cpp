#include <emscripten.h>

#ifdef WITH_SIMD
#pragma message("Compiling with SIMD support")
#else
#pragma message("Compiling without SIMD support")
#endif

int main() 
{

#ifdef WITH_SIMD
    EM_ASM({ alert("Alert module loaded with SIMD support!\n"); });
#else
    EM_ASM({ alert("Alert module loaded without SIMD support!\n"); });
#endif

  return 0;
}