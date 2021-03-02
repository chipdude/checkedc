//---------------------------------------------------------------------//
// Wrapper header file that excludes Checked-C-specific declarations   //
// if implicit inclusion of checked header files is disabled.          //
//                                                                     //
/////////////////////////////////////////////////////////////////////////


#ifdef NO_IMPLICIT_INCLUDE_CHECKED_HDRS
#include_next <fenv.h>
#else
#include <fenv_checked.h>
#endif
