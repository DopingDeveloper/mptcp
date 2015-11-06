#include "gcc_check_decl.h"
#undef HAVE_DECL_TIMES
#define HAVE_DECL_TIMES 1
#include "ansidecl.h"
#include "system.h"
void cmakeRequireSymbol(int dummy,...){(void)dummy;}
int main()
{
#ifndef times
  cmakeRequireSymbol(0,&times);
#endif
  return 0;
}
