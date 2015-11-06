/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[2])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 4960 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 4968 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 4960 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 4968 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 4754 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (PLUS, TImode, operands)",
    __builtin_constant_p 
#line 4754 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, TImode, operands))
    ? (int) 
#line 4754 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, TImode, operands))
    : -1 },
#line 5858 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 5858 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 5858 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 9669 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands)",
    __builtin_constant_p 
#line 9669 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    ? (int) 
#line 9669 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    : -1 },
#line 733 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands)",
    __builtin_constant_p 
#line 733 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands))
    ? (int) 
#line 733 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands))
    : -1 },
#line 11550 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11550 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11550 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 1942 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1942 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1942 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 2971 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (EQ, V16QImode, operands)",
    __builtin_constant_p 
#line 2971 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V16QImode, operands))
    ? (int) 
#line 2971 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V16QImode, operands))
    : -1 },
#line 20690 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && INTVAL (operands[4]) + SSE_REGPARM_MAX * 16 - 16 < 128\n\
   && INTVAL (operands[4]) + INTVAL (operands[2]) * 16 >= -128",
    __builtin_constant_p 
#line 20690 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[4]) + SSE_REGPARM_MAX * 16 - 16 < 128
   && INTVAL (operands[4]) + INTVAL (operands[2]) * 16 >= -128)
    ? (int) 
#line 20690 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && INTVAL (operands[4]) + SSE_REGPARM_MAX * 16 - 16 < 128
   && INTVAL (operands[4]) + INTVAL (operands[2]) * 16 >= -128)
    : -1 },
#line 17972 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 17972 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 17972 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
#line 1627 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE3",
    __builtin_constant_p 
#line 1627 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE3)
    ? (int) 
#line 1627 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE3)
    : -1 },
#line 11785 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, QImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 11785 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 11785 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 11525 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 11525 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 11525 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 2220 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 2220 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 2220 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 14684 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_GNU_TLS",
    __builtin_constant_p 
#line 14684 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
    ? (int) 
#line 14684 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
    : -1 },
#line 3907 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2",
    __builtin_constant_p 
#line 3907 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2)
    ? (int) 
#line 3907 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2)
    : -1 },
#line 4279 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4279 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4279 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 8980 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8980 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8980 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 10149 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NEG, HImode, operands)",
    __builtin_constant_p 
#line 10149 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NEG, HImode, operands))
    ? (int) 
#line 10149 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NEG, HImode, operands))
    : -1 },
#line 13766 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 13766 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 13766 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 4725 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4725 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE_MATH)
    ? (int) 
#line 4725 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE_MATH)
    : -1 },
#line 8203 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 8203 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 8203 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 15023 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15023 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15023 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 1963 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && (! MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 1963 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && (! MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    ? (int) 
#line 1963 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && (! MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    : -1 },
#line 15169 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15169 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15169 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
  { "(TARGET_64BIT) && ( reload_completed)",
    __builtin_constant_p (
#line 5097 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 5099 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 5097 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 5099 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 8522 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_binary_operator_ok (IOR, DImode, operands)",
    __builtin_constant_p 
#line 8522 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, DImode, operands))
    ? (int) 
#line 8522 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (IOR, DImode, operands))
    : -1 },
#line 20725 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_PREFETCH_SSE || TARGET_3DNOW",
    __builtin_constant_p 
#line 20725 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE || TARGET_3DNOW)
    ? (int) 
#line 20725 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE || TARGET_3DNOW)
    : -1 },
#line 7757 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 7757 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 7757 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 3200 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && true_regnum (operands[0]) == true_regnum (operands[1])",
    __builtin_constant_p 
#line 3200 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    ? (int) 
#line 3200 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    : -1 },
#line 4226 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4226 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4226 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 2779 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "optimize_size\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && (reload_in_progress || reload_completed\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], XFmode))",
    __builtin_constant_p 
#line 2779 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    ? (int) 
#line 2779 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    : -1 },
#line 5293 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   &&  ix86_match_ccmode (insn, CCGCmode)",
    __builtin_constant_p 
#line 5293 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   &&  ix86_match_ccmode (insn, CCGCmode))
    ? (int) 
#line 5293 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   &&  ix86_match_ccmode (insn, CCGCmode))
    : -1 },
#line 2252 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && GET_CODE (operands[1]) == MEM\n\
   && constant_pool_reference_p (operands[1])",
    __builtin_constant_p 
#line 2252 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && GET_CODE (operands[1]) == MEM
   && constant_pool_reference_p (operands[1]))
    ? (int) 
#line 2252 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && GET_CODE (operands[1]) == MEM
   && constant_pool_reference_p (operands[1]))
    : -1 },
#line 20464 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(TARGET_K8 || TARGET_GENERIC64) && !optimize_size",
    __builtin_constant_p 
#line 20464 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((TARGET_K8 || TARGET_GENERIC64) && !optimize_size)
    ? (int) 
#line 20464 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((TARGET_K8 || TARGET_GENERIC64) && !optimize_size)
    : -1 },
#line 5582 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5582 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5582 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 897 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands)",
    __builtin_constant_p 
#line 897 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands))
    ? (int) 
#line 897 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands))
    : -1 },
#line 18996 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL",
    __builtin_constant_p 
#line 18996 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL)
    ? (int) 
#line 18996 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL)
    : -1 },
#line 3131 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && ANY_QI_REG_P (operands[0])\n\
   && (ANY_QI_REG_P (operands[1]) || GET_CODE (operands[1]) == MEM)\n\
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 3131 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && ANY_QI_REG_P (operands[0])
   && (ANY_QI_REG_P (operands[1]) || GET_CODE (operands[1]) == MEM)
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    ? (int) 
#line 3131 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && ANY_QI_REG_P (operands[0])
   && (ANY_QI_REG_P (operands[1]) || GET_CODE (operands[1]) == MEM)
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    : -1 },
  { "(!TARGET_64BIT) && ( reload_completed)",
    __builtin_constant_p (
#line 12740 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT) && 
#line 12742 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 12740 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT) && 
#line 12742 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 11645 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL)",
    __builtin_constant_p 
#line 11645 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    ? (int) 
#line 11645 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    : -1 },
  { "(TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4205 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4205 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 12247 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL)",
    __builtin_constant_p 
#line 12247 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    ? (int) 
#line 12247 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    : -1 },
#line 18986 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_QIMODE_MATH",
    __builtin_constant_p 
#line 18986 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
    ? (int) 
#line 18986 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
    : -1 },
#line 699 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 699 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 699 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 14842 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_GNU2_TLS",
    __builtin_constant_p 
#line 14842 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS)
    ? (int) 
#line 14842 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS)
    : -1 },
  { "(TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4279 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4285 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4279 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4285 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 1147 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && operands[1] == constm1_rtx\n\
   && (TARGET_PENTIUM || optimize_size)",
    __builtin_constant_p 
#line 1147 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx
   && (TARGET_PENTIUM || optimize_size))
    ? (int) 
#line 1147 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx
   && (TARGET_PENTIUM || optimize_size))
    : -1 },
#line 3829 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && !TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 3829 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !TARGET_MIX_SSE_I387)
    ? (int) 
#line 3829 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !TARGET_MIX_SSE_I387)
    : -1 },
#line 10973 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || TARGET_DOUBLE_WITH_ADD)))",
    __builtin_constant_p 
#line 10973 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    ? (int) 
#line 10973 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    : -1 },
#line 12350 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL)",
    __builtin_constant_p 
#line 12350 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    ? (int) 
#line 12350 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    : -1 },
#line 12539 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12539 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12539 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 17802 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed",
    __builtin_constant_p 
#line 17802 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed)
    ? (int) 
#line 17802 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed)
    : -1 },
  { "(TARGET_XADD) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 230 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_XADD) && 
#line 22 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_64BIT))
    ? (int) (
#line 230 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_XADD) && 
#line 22 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_64BIT))
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && ( reload_completed)",
    __builtin_constant_p (
#line 5062 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && 
#line 5068 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 5062 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && 
#line 5068 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 18908 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_CMOVE\n\
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)",
    __builtin_constant_p 
#line 18908 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    ? (int) 
#line 18908 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    : -1 },
#line 8282 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, QImode, operands)",
    __builtin_constant_p 
#line 8282 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands))
    ? (int) 
#line 8282 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands))
    : -1 },
#line 1579 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL || optimize_size",
    __builtin_constant_p 
#line 1579 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL || optimize_size)
    ? (int) 
#line 1579 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL || optimize_size)
    : -1 },
#line 311 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 311 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    ? (int) 
#line 311 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    : -1 },
#line 19450 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_STACK_PROBE",
    __builtin_constant_p 
#line 19450 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_STACK_PROBE)
    ? (int) 
#line 19450 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_STACK_PROBE)
    : -1 },
#line 9640 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 9640 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 9640 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 2236 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && reload_completed",
    __builtin_constant_p 
#line 2236 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed)
    ? (int) 
#line 2236 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed)
    : -1 },
#line 5382 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 5382 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 5382 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 3095 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V4SImode, operands)",
    __builtin_constant_p 
#line 3095 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V4SImode, operands))
    ? (int) 
#line 3095 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V4SImode, operands))
    : -1 },
#line 2078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode)",
    __builtin_constant_p 
#line 2078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    ? (int) 
#line 2078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    : -1 },
#line 6738 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6738 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6738 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
  { "(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 1313 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1315 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 1313 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1315 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 7500 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!optimize_size && !TARGET_USE_CLTD",
    __builtin_constant_p 
#line 7500 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!optimize_size && !TARGET_USE_CLTD)
    ? (int) 
#line 7500 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!optimize_size && !TARGET_USE_CLTD)
    : -1 },
#line 1557 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL || optimize_size",
    __builtin_constant_p 
#line 1557 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size)
    ? (int) 
#line 1557 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_size)
    : -1 },
#line 772 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (SMIN, V4HImode, operands)",
    __builtin_constant_p 
#line 772 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands))
    ? (int) 
#line 772 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands))
    : -1 },
#line 565 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (PLUS, V2SImode, operands)",
    __builtin_constant_p 
#line 565 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V2SImode, operands))
    ? (int) 
#line 565 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V2SImode, operands))
    : -1 },
#line 3209 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && !SSE_REG_P (operands[0]) && !MMX_REG_P (operands[0])",
    __builtin_constant_p 
#line 3209 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !SSE_REG_P (operands[0]) && !MMX_REG_P (operands[0]))
    ? (int) 
#line 3209 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !SSE_REG_P (operands[0]) && !MMX_REG_P (operands[0]))
    : -1 },
#line 13040 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_USE_BT || reload_completed)",
    __builtin_constant_p 
#line 13040 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed))
    ? (int) 
#line 13040 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed))
    : -1 },
#line 10808 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || TARGET_DOUBLE_WITH_ADD)))",
    __builtin_constant_p 
#line 10808 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    ? (int) 
#line 10808 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    : -1 },
#line 659 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 659 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 659 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 19014 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE) || TARGET_SSE_MATH",
    __builtin_constant_p 
#line 19014 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE) || TARGET_SSE_MATH)
    ? (int) 
#line 19014 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE) || TARGET_SSE_MATH)
    : -1 },
#line 8333 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, QImode, operands)",
    __builtin_constant_p 
#line 8333 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands))
    ? (int) 
#line 8333 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands))
    : -1 },
#line 12777 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)",
    __builtin_constant_p 
#line 12777 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands))
    ? (int) 
#line 12777 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands))
    : -1 },
#line 9573 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_SSE_MATH\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands)",
    __builtin_constant_p 
#line 9573 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    ? (int) 
#line 9573 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    : -1 },
#line 8092 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, DImode, operands)",
    __builtin_constant_p 
#line 8092 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands))
    ? (int) 
#line 8092 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands))
    : -1 },
#line 11136 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))",
    __builtin_constant_p 
#line 11136 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    ? (int) 
#line 11136 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    : -1 },
#line 762 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (UMIN, V8QImode, operands)",
    __builtin_constant_p 
#line 762 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands))
    ? (int) 
#line 762 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands))
    : -1 },
#line 6693 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6693 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6693 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
  { "(TARGET_CMOVE) && ( reload_completed)",
    __builtin_constant_p (
#line 14443 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 14445 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 14443 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 14445 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 19750 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode) && ! optimize_size",
    __builtin_constant_p 
#line 19750 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode) && ! optimize_size)
    ? (int) 
#line 19750 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode) && ! optimize_size)
    : -1 },
#line 572 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)",
    __builtin_constant_p 
#line 572 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode))
    ? (int) 
#line 572 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode))
    : -1 },
#line 5900 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 5900 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 5900 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 9720 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH && reload_completed",
    __builtin_constant_p 
#line 9720 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && reload_completed)
    ? (int) 
#line 9720 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && reload_completed)
    : -1 },
#line 2971 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (EQ, V4SImode, operands)",
    __builtin_constant_p 
#line 2971 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V4SImode, operands))
    ? (int) 
#line 2971 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V4SImode, operands))
    : -1 },
#line 10620 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])\n\
   && GET_MODE_SIZE (GET_MODE (operands[0])) <= 4",
    __builtin_constant_p 
#line 10620 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1])
   && GET_MODE_SIZE (GET_MODE (operands[0])) <= 4)
    ? (int) 
#line 10620 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1])
   && GET_MODE_SIZE (GET_MODE (operands[0])) <= 4)
    : -1 },
#line 1179 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1179 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1179 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 12124 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12124 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12124 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 11862 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 11862 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 11862 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
#line 15304 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15304 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 15304 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 10647 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])",
    __builtin_constant_p 
#line 10647 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    ? (int) 
#line 10647 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    : -1 },
#line 12646 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, HImode, operands)",
    __builtin_constant_p 
#line 12646 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands))
    ? (int) 
#line 12646 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands))
    : -1 },
#line 9563 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands)",
    __builtin_constant_p 
#line 9563 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    ? (int) 
#line 9563 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    : -1 },
#line 1926 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_PENTIUM || optimize_size)\n\
   && reload_completed\n\
   && operands[1] == constm1_rtx",
    __builtin_constant_p 
#line 1926 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_PENTIUM || optimize_size)
   && reload_completed
   && operands[1] == constm1_rtx)
    ? (int) 
#line 1926 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_PENTIUM || optimize_size)
   && reload_completed
   && operands[1] == constm1_rtx)
    : -1 },
#line 20601 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!SIBLING_CALL_P (insn) && !TARGET_64BIT",
    __builtin_constant_p 
#line 20601 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn) && !TARGET_64BIT)
    ? (int) 
#line 20601 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn) && !TARGET_64BIT)
    : -1 },
#line 12553 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands)",
    __builtin_constant_p 
#line 12553 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands))
    ? (int) 
#line 12553 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, DImode, operands))
    : -1 },
#line 18438 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)",
    __builtin_constant_p 
#line 18438 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
    ? (int) 
#line 18438 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
    : -1 },
#line 4198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 1022 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1022 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1022 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
#line 4035 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && reload_completed",
    __builtin_constant_p 
#line 4035 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed)
    ? (int) 
#line 4035 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed)
    : -1 },
#line 9283 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
    && !(INTVAL (operands[2]) & ~(255 << 8))\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 9283 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 9283 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 9331 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_unary_operator_ok (NEG, TImode, operands)",
    __builtin_constant_p 
#line 9331 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_unary_operator_ok (NEG, TImode, operands))
    ? (int) 
#line 9331 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_unary_operator_ok (NEG, TImode, operands))
    : -1 },
#line 480 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands)",
    __builtin_constant_p 
#line 480 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    ? (int) 
#line 480 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    : -1 },
#line 2752 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_MODE (operands[0]) == XFmode\n\
       || GET_MODE (operands[0]) == DFmode)\n\
   && !ANY_FP_REG_P (operands[1])",
    __builtin_constant_p 
#line 2752 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && !ANY_FP_REG_P (operands[1]))
    ? (int) 
#line 2752 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && !ANY_FP_REG_P (operands[1]))
    : -1 },
#line 1383 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT",
    __builtin_constant_p 
#line 1383 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT)
    ? (int) 
#line 1383 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT)
    : -1 },
#line 13119 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !TARGET_USE_BT",
    __builtin_constant_p 
#line 13119 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT)
    ? (int) 
#line 13119 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT)
    : -1 },
#line 9150 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)",
    __builtin_constant_p 
#line 9150 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
    ? (int) 
#line 9150 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
    : -1 },
#line 12083 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_CMOVE",
    __builtin_constant_p 
#line 12083 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE)
    ? (int) 
#line 12083 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE)
    : -1 },
#line 10042 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 10042 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 10042 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 19468 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && flag_pic",
    __builtin_constant_p 
#line 19468 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && flag_pic)
    ? (int) 
#line 19468 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && flag_pic)
    : -1 },
#line 1305 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW)\n\
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 1305 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    ? (int) 
#line 1305 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    : -1 },
#line 8309 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, QImode, operands)\n\
   && ix86_match_ccmode (insn,\n\
			 GET_CODE (operands[2]) == CONST_INT\n\
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 8309 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)
   && ix86_match_ccmode (insn,
			 GET_CODE (operands[2]) == CONST_INT
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 8309 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)
   && ix86_match_ccmode (insn,
			 GET_CODE (operands[2]) == CONST_INT
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
#line 5012 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)",
    __builtin_constant_p 
#line 5012 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    ? (int) 
#line 5012 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    : -1 },
#line 674 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 674 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 674 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 3078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V8HImode, operands)",
    __builtin_constant_p 
#line 3078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V8HImode, operands))
    ? (int) 
#line 3078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V8HImode, operands))
    : -1 },
#line 17955 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 17955 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 17955 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
#line 10398 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))",
    __builtin_constant_p 
#line 10398 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    ? (int) 
#line 10398 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    : -1 },
#line 15139 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15139 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15139 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 14013 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(peep2_reg_dead_p (3, operands[1])\n\
    || operands_match_p (operands[1], operands[3]))\n\
   && ! reg_overlap_mentioned_p (operands[3], operands[0])",
    __builtin_constant_p 
#line 14013 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0]))
    ? (int) 
#line 14013 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0]))
    : -1 },
#line 8581 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8581 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8581 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
  { "(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 1160 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1162 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
( reload_completed))
    ? (int) (
#line 1160 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1162 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
( reload_completed))
    : -1 },
#line 2280 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], SFmode))",
    __builtin_constant_p 
#line 2280 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], SFmode)))
    ? (int) 
#line 2280 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], SFmode)))
    : -1 },
#line 11295 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && INTVAL (operands[2]) == 63\n\
   && (TARGET_USE_CLTD || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 11295 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 63
   && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 11295 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 63
   && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 692 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)",
    __builtin_constant_p 
#line 692 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode))
    ? (int) 
#line 692 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode))
    : -1 },
#line 12893 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, QImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12893 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12893 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 2099 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ((optimize > 0 && flag_peephole2)\n\
		    ? flow2_completed : reload_completed)\n\
   && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode)",
    __builtin_constant_p 
#line 2099 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		    ? flow2_completed : reload_completed)
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    ? (int) 
#line 2099 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		    ? flow2_completed : reload_completed)
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    : -1 },
#line 2060 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_check_movabs (insn, 1)",
    __builtin_constant_p 
#line 2060 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 1))
    ? (int) 
#line 2060 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 1))
    : -1 },
#line 9196 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(! TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 9196 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 9196 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 1331 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 1331 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    ? (int) 
#line 1331 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    : -1 },
#line 7028 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_QIMODE_MATH\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 7028 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 7028 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 4385 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 4385 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
    ? (int) 
#line 4385 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
    : -1 },
#line 2399 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 2399 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    ? (int) 
#line 2399 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    : -1 },
#line 3509 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "!TARGET_SSE2 && TARGET_SSE\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 3509 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 3509 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 5534 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5534 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5534 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 4129 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4129 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4129 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 8262 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, HImode, operands)",
    __builtin_constant_p 
#line 8262 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands))
    ? (int) 
#line 8262 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands))
    : -1 },
#line 11814 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 11814 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 11814 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
#line 20338 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!optimize_size \n\
   && (INTVAL (operands[2]) == 3\n\
       || INTVAL (operands[2]) == 5\n\
       || INTVAL (operands[2]) == 9)",
    __builtin_constant_p 
#line 20338 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!optimize_size 
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    ? (int) 
#line 20338 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!optimize_size 
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    : -1 },
#line 17944 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 17944 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 17944 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
    : -1 },
#line 15583 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387",
    __builtin_constant_p 
#line 15583 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387)
    ? (int) 
#line 15583 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387)
    : -1 },
#line 10336 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, DImode, operands)",
    __builtin_constant_p 
#line 10336 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, DImode, operands))
    ? (int) 
#line 10336 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, DImode, operands))
    : -1 },
#line 6244 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCZmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 6244 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 6244 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 576 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, DImode, operands)",
    __builtin_constant_p 
#line 576 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, DImode, operands))
    ? (int) 
#line 576 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, DImode, operands))
    : -1 },
#line 6763 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6763 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6763 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
#line 13807 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_SIMODE_FIOP\n\
   && FLOAT_MODE_P (GET_MODE (operands[3]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[3])\n\
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))\n\
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode\n\
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0])))",
    __builtin_constant_p 
#line 13807 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
    ? (int) 
#line 13807 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
    : -1 },
#line 20625 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!SIBLING_CALL_P (insn) && TARGET_64BIT",
    __builtin_constant_p 
#line 20625 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn) && TARGET_64BIT)
    ? (int) 
#line 20625 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn) && TARGET_64BIT)
    : -1 },
#line 6677 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6677 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6677 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 9039 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, HImode, operands)",
    __builtin_constant_p 
#line 9039 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands))
    ? (int) 
#line 9039 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands))
    : -1 },
#line 1163 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1163 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1163 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 1915 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (!TARGET_USE_MOV0 || optimize_size)\n\
   && reload_completed",
    __builtin_constant_p 
#line 1915 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && (!TARGET_USE_MOV0 || optimize_size)
   && reload_completed)
    ? (int) 
#line 1915 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && (!TARGET_USE_MOV0 || optimize_size)
   && reload_completed)
    : -1 },
#line 19716 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "! optimize_size\n\
   && get_attr_length (insn) >= ix86_cost->large_insn\n\
   && TARGET_SPLIT_LONG_MOVES",
    __builtin_constant_p 
#line 19716 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! optimize_size
   && get_attr_length (insn) >= ix86_cost->large_insn
   && TARGET_SPLIT_LONG_MOVES)
    ? (int) 
#line 19716 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! optimize_size
   && get_attr_length (insn) >= ix86_cost->large_insn
   && TARGET_SPLIT_LONG_MOVES)
    : -1 },
#line 20228 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "optimize_size || !TARGET_SUB_ESP_4",
    __builtin_constant_p 
#line 20228 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(optimize_size || !TARGET_SUB_ESP_4)
    ? (int) 
#line 20228 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(optimize_size || !TARGET_SUB_ESP_4)
    : -1 },
#line 9940 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && (reload_completed || !(TARGET_SSE2 && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 9940 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && (reload_completed || !(TARGET_SSE2 && TARGET_SSE_MATH)))
    ? (int) 
#line 9940 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && (reload_completed || !(TARGET_SSE2 && TARGET_SSE_MATH)))
    : -1 },
#line 9210 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 9210 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 9210 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 245 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands)",
    __builtin_constant_p 
#line 245 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands))
    ? (int) 
#line 245 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands))
    : -1 },
#line 6488 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (MINUS, TImode, operands)",
    __builtin_constant_p 
#line 6488 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, TImode, operands))
    ? (int) 
#line 6488 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, TImode, operands))
    : -1 },
#line 1052 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE\n\
   && (!TARGET_SSE_MATH || !SSE_FLOAT_MODE_P (GET_MODE (operands[0])))\n\
   && FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1052 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (!TARGET_SSE_MATH || !SSE_FLOAT_MODE_P (GET_MODE (operands[0])))
   && FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1052 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (!TARGET_SSE_MATH || !SSE_FLOAT_MODE_P (GET_MODE (operands[0])))
   && FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
#line 16107 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "standard_80387_constant_p (operands[3]) == 2",
    __builtin_constant_p 
#line 16107 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(standard_80387_constant_p (operands[3]) == 2)
    ? (int) 
#line 16107 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(standard_80387_constant_p (operands[3]) == 2)
    : -1 },
#line 15485 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387 && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 15485 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 && TARGET_MIX_SSE_I387)
    ? (int) 
#line 15485 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 && TARGET_MIX_SSE_I387)
    : -1 },
#line 2686 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && ! (ANY_FP_REG_P (operands[0]) || \n\
	 (GET_CODE (operands[0]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))\n\
   && ! (ANY_FP_REG_P (operands[1]) || \n\
	 (GET_CODE (operands[1]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[1]))))",
    __builtin_constant_p 
#line 2686 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ! (ANY_FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) || 
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    ? (int) 
#line 2686 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ! (ANY_FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) || 
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    : -1 },
#line 1137 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && !TARGET_SSE",
    __builtin_constant_p 
#line 1137 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE)
    ? (int) 
#line 1137 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE)
    : -1 },
#line 6283 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGCmode)\n\
   && (INTVAL (operands[2]) & 0xff) != 0x80",
    __builtin_constant_p 
#line 6283 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xff) != 0x80)
    ? (int) 
#line 6283 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xff) != 0x80)
    : -1 },
#line 20261 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "optimize_size || !TARGET_ADD_ESP_8",
    __builtin_constant_p 
#line 20261 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(optimize_size || !TARGET_ADD_ESP_8)
    ? (int) 
#line 20261 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(optimize_size || !TARGET_ADD_ESP_8)
    : -1 },
#line 2963 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed && !SSE_REG_P (operands[0])\n\
   && !SSE_REG_P (operands[1])",
    __builtin_constant_p 
#line 2963 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed && !SSE_REG_P (operands[0])
   && !SSE_REG_P (operands[1]))
    ? (int) 
#line 2963 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed && !SSE_REG_P (operands[0])
   && !SSE_REG_P (operands[1]))
    : -1 },
#line 897 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands)",
    __builtin_constant_p 
#line 897 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands))
    ? (int) 
#line 897 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands))
    : -1 },
#line 219 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
  { "!TARGET_64BIT && TARGET_CMPXCHG8B && flag_pic",
    __builtin_constant_p 
#line 219 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(!TARGET_64BIT && TARGET_CMPXCHG8B && flag_pic)
    ? (int) 
#line 219 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(!TARGET_64BIT && TARGET_CMPXCHG8B && flag_pic)
    : -1 },
#line 8895 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_binary_operator_ok (XOR, DImode, operands)",
    __builtin_constant_p 
#line 8895 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, DImode, operands))
    ? (int) 
#line 8895 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_binary_operator_ok (XOR, DImode, operands))
    : -1 },
#line 12599 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, SImode, operands)",
    __builtin_constant_p 
#line 12599 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands))
    ? (int) 
#line 12599 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands))
    : -1 },
#line 20310 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "optimize_size",
    __builtin_constant_p 
#line 20310 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(optimize_size)
    ? (int) 
#line 20310 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(optimize_size)
    : -1 },
#line 15103 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_HIMODE_FIOP && !TARGET_SSE_MATH",
    __builtin_constant_p 
#line 15103 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP && !TARGET_SSE_MATH)
    ? (int) 
#line 15103 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP && !TARGET_SSE_MATH)
    : -1 },
#line 3109 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size) && reload_completed",
    __builtin_constant_p 
#line 3109 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size) && reload_completed)
    ? (int) 
#line 3109 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((!TARGET_ZERO_EXTEND_WITH_AND || optimize_size) && reload_completed)
    : -1 },
#line 4152 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4152 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4152 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 17908 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 17908 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 17908 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 784 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (AND, V4SFmode, operands)",
    __builtin_constant_p 
#line 784 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V4SFmode, operands))
    ? (int) 
#line 784 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V4SFmode, operands))
    : -1 },
#line 20496 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 3\n\
   /* Validate MODE for lea.  */\n\
   && ((!TARGET_PARTIAL_REG_STALL\n\
	&& (GET_MODE (operands[0]) == QImode\n\
	    || GET_MODE (operands[0]) == HImode))\n\
       || GET_MODE (operands[0]) == SImode \n\
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))\n\
   /* We reorder load and the shift.  */\n\
   && !rtx_equal_p (operands[1], operands[3])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[4])\n\
   /* Last PLUS must consist of operand 0 and 3.  */\n\
   && !rtx_equal_p (operands[0], operands[3])\n\
   && (rtx_equal_p (operands[3], operands[6])\n\
       || rtx_equal_p (operands[3], operands[7]))\n\
   && (rtx_equal_p (operands[0], operands[6])\n\
       || rtx_equal_p (operands[0], operands[7]))\n\
   /* The intermediate operand 0 must die or be same as output.  */\n\
   && (rtx_equal_p (operands[0], operands[5])\n\
       || peep2_reg_dead_p (3, operands[0]))",
    __builtin_constant_p 
#line 20496 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 3
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode 
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   /* We reorder load and the shift.  */
   && !rtx_equal_p (operands[1], operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[4])
   /* Last PLUS must consist of operand 0 and 3.  */
   && !rtx_equal_p (operands[0], operands[3])
   && (rtx_equal_p (operands[3], operands[6])
       || rtx_equal_p (operands[3], operands[7]))
   && (rtx_equal_p (operands[0], operands[6])
       || rtx_equal_p (operands[0], operands[7]))
   /* The intermediate operand 0 must die or be same as output.  */
   && (rtx_equal_p (operands[0], operands[5])
       || peep2_reg_dead_p (3, operands[0])))
    ? (int) 
#line 20496 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) <= 3
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode 
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   /* We reorder load and the shift.  */
   && !rtx_equal_p (operands[1], operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[4])
   /* Last PLUS must consist of operand 0 and 3.  */
   && !rtx_equal_p (operands[0], operands[3])
   && (rtx_equal_p (operands[3], operands[6])
       || rtx_equal_p (operands[3], operands[7]))
   && (rtx_equal_p (operands[0], operands[6])
       || rtx_equal_p (operands[0], operands[7]))
   /* The intermediate operand 0 must die or be same as output.  */
   && (rtx_equal_p (operands[0], operands[5])
       || peep2_reg_dead_p (3, operands[0])))
    : -1 },
#line 15250 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_SIMODE_FIOP\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15250 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 15250 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 19586 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && (GET_MODE (operands[0]) == HImode\n\
       || (GET_MODE (operands[0]) == QImode \n\
	   && (TARGET_PROMOTE_QImode || optimize_size)))",
    __builtin_constant_p 
#line 19586 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    ? (int) 
#line 19586 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    : -1 },
#line 761 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 761 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 761 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 8662 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, HImode, operands)",
    __builtin_constant_p 
#line 8662 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands))
    ? (int) 
#line 8662 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands))
    : -1 },
#line 6653 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6653 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6653 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 11500 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_USE_CLTD || optimize_size)\n\
   && INTVAL (operands[2]) == 31\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11500 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_CLTD || optimize_size)
   && INTVAL (operands[2]) == 31
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11500 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_CLTD || optimize_size)
   && INTVAL (operands[2]) == 31
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 1435 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2DFmode, operands)",
    __builtin_constant_p 
#line 1435 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2DFmode, operands))
    ? (int) 
#line 1435 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2DFmode, operands))
    : -1 },
#line 681 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
    && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 681 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 681 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 19797 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!optimize_size\n\
   && peep2_regno_dead_p (0, FLAGS_REG)\n\
   && ((TARGET_PENTIUM \n\
        && (GET_CODE (operands[0]) != MEM\n\
            || !memory_displacement_operand (operands[0], QImode)))\n\
       || (TARGET_K6 && long_memory_operand (operands[0], QImode)))",
    __builtin_constant_p 
#line 19797 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], QImode))))
    ? (int) 
#line 19797 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], QImode))))
    : -1 },
#line 2702 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed || TARGET_80387",
    __builtin_constant_p 
#line 2702 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed || TARGET_80387)
    ? (int) 
#line 2702 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed || TARGET_80387)
    : -1 },
#line 2409 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 2409 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    ? (int) 
#line 2409 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    : -1 },
#line 9083 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, QImode, operands)",
    __builtin_constant_p 
#line 9083 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands))
    ? (int) 
#line 9083 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands))
    : -1 },
#line 15978 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))\n\
   && !reload_completed && !reload_in_progress",
    __builtin_constant_p 
#line 15978 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))
   && !reload_completed && !reload_in_progress)
    ? (int) 
#line 15978 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))
   && !reload_completed && !reload_in_progress)
    : -1 },
#line 4198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 4587 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4587 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387)
    ? (int) 
#line 4587 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387)
    : -1 },
#line 6705 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6705 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6705 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 5670 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5670 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5670 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 867 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands)",
    __builtin_constant_p 
#line 867 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands))
    ? (int) 
#line 867 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands))
    : -1 },
#line 12092 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ((optimize > 0 && flag_peephole2)\n\
		     ? flow2_completed : reload_completed)",
    __builtin_constant_p 
#line 12092 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		     ? flow2_completed : reload_completed))
    ? (int) 
#line 12092 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		     ? flow2_completed : reload_completed))
    : -1 },
#line 2058 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 2058 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE3 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 2058 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE3 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 13696 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_CMOVE && TARGET_80387\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 13696 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 13696 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 2447 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && ((optimize_size || !TARGET_INTEGER_DFMODE_MOVES) && !TARGET_64BIT)\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], DFmode))",
    __builtin_constant_p 
#line 2447 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ((optimize_size || !TARGET_INTEGER_DFMODE_MOVES) && !TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    ? (int) 
#line 2447 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ((optimize_size || !TARGET_INTEGER_DFMODE_MOVES) && !TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    : -1 },
#line 7417 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !optimize_size && !TARGET_USE_CLTD",
    __builtin_constant_p 
#line 7417 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && !optimize_size && !TARGET_USE_CLTD)
    ? (int) 
#line 7417 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && !optimize_size && !TARGET_USE_CLTD)
    : -1 },
#line 6818 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6818 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6818 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 19063 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_80387 && TARGET_CMOVE\n\
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)",
    __builtin_constant_p 
#line 19063 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    ? (int) 
#line 19063 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    : -1 },
#line 841 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands)",
    __builtin_constant_p 
#line 841 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands))
    ? (int) 
#line 841 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands))
    : -1 },
#line 230 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
  { "TARGET_XADD",
    __builtin_constant_p 
#line 230 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_XADD)
    ? (int) 
#line 230 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_XADD)
    : -1 },
#line 9169 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(!TARGET_PARTIAL_REG_STALL || optimize_size)",
    __builtin_constant_p 
#line 9169 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size))
    ? (int) 
#line 9169 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_size))
    : -1 },
#line 4170 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4170 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4170 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 5815 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 5815 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 5815 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 825 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (XOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 825 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    ? (int) 
#line 825 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    : -1 },
#line 2996 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed && TARGET_ZERO_EXTEND_WITH_AND && !optimize_size",
    __builtin_constant_p 
#line 2996 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed && TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
    ? (int) 
#line 2996 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed && TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
    : -1 },
#line 129 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_64BIT && TARGET_MMX\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 129 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 129 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
  { "(TARGET_SSE_MATH) && ( reload_completed)",
    __builtin_constant_p (
#line 9594 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH) && 
#line 9596 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 9594 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH) && 
#line 9596 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 15195 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 15195 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 15195 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 12588 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12588 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12588 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 154 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 154 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 154 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 1278 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_SSE",
    __builtin_constant_p 
#line 1278 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_SSE)
    ? (int) 
#line 1278 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_SSE)
    : -1 },
#line 13666 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 13666 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 13666 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 7805 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 7805 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 7805 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 1108 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW_A",
    __builtin_constant_p 
#line 1108 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW_A)
    ? (int) 
#line 1108 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW_A)
    : -1 },
#line 3092 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_ZERO_EXTEND_WITH_AND && !optimize_size",
    __builtin_constant_p 
#line 3092 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
    ? (int) 
#line 3092 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
    : -1 },
#line 8490 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && ANY_QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
    && !(~INTVAL (operands[2]) & ~255)\n\
    && !(INTVAL (operands[2]) & 128)\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8490 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8490 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 11022 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 11022 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 11022 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
#line 12797 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12797 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12797 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 15368 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_HIMODE_FIOP",
    __builtin_constant_p 
#line 15368 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP)
    ? (int) 
#line 15368 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP)
    : -1 },
#line 3119 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed \n\
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)\n\
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1]))",
    __builtin_constant_p 
#line 3119 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed 
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1])))
    ? (int) 
#line 3119 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed 
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1])))
    : -1 },
#line 19864 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && true_regnum (operands[2]) != 0\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 19864 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && true_regnum (operands[2]) != 0
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 19864 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && true_regnum (operands[2]) != 0
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 6206 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 6206 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 6206 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 1379 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 1379 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    ? (int) 
#line 1379 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    : -1 },
#line 12148 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12148 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 12148 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 2567 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && ((!optimize_size && TARGET_INTEGER_DFMODE_MOVES) || TARGET_64BIT)\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], DFmode))",
    __builtin_constant_p 
#line 2567 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ((!optimize_size && TARGET_INTEGER_DFMODE_MOVES) || TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    ? (int) 
#line 2567 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && ((!optimize_size && TARGET_INTEGER_DFMODE_MOVES) || TARGET_64BIT)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    : -1 },
#line 2409 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 2409 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    ? (int) 
#line 2409 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    : -1 },
#line 10766 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || TARGET_DOUBLE_WITH_ADD)))",
    __builtin_constant_p 
#line 10766 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    ? (int) 
#line 10766 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    : -1 },
#line 10666 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 10666 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 10666 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 20673 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT",
    __builtin_constant_p 
#line 20673 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT)
    ? (int) 
#line 20673 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT)
    : -1 },
#line 14974 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 14974 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 14974 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 393 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands)",
    __builtin_constant_p 
#line 393 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands))
    ? (int) 
#line 393 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands))
    : -1 },
#line 139 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
  { "TARGET_CMPXCHG",
    __builtin_constant_p 
#line 139 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_CMPXCHG)
    ? (int) 
#line 139 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_CMPXCHG)
    : -1 },
#line 19783 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!optimize_size\n\
   && peep2_regno_dead_p (0, FLAGS_REG)\n\
   && ((TARGET_PENTIUM \n\
        && (GET_CODE (operands[0]) != MEM\n\
            || !memory_displacement_operand (operands[0], HImode)))\n\
       || (TARGET_K6 && long_memory_operand (operands[0], HImode)))",
    __builtin_constant_p 
#line 19783 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], HImode))))
    ? (int) 
#line 19783 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], HImode))))
    : -1 },
#line 1506 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands)",
    __builtin_constant_p 
#line 1506 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands))
    ? (int) 
#line 1506 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands))
    : -1 },
#line 3101 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_ZERO_EXTEND_WITH_AND || optimize_size",
    __builtin_constant_p 
#line 3101 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
    ? (int) 
#line 3101 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_size)
    : -1 },
#line 15334 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 15334 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 15334 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 4068 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode))",
    __builtin_constant_p 
#line 4068 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)))
    ? (int) 
#line 4068 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)))
    : -1 },
#line 10060 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 10060 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 10060 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 20785 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_3DNOW && !TARGET_64BIT",
    __builtin_constant_p 
#line 20785 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_3DNOW && !TARGET_64BIT)
    ? (int) 
#line 20785 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_3DNOW && !TARGET_64BIT)
    : -1 },
#line 1268 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX",
    __builtin_constant_p 
#line 1268 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX)
    ? (int) 
#line 1268 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX)
    : -1 },
#line 20044 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "exact_log2 (INTVAL (operands[2])) >= 0\n\
   && REGNO (operands[0]) == REGNO (operands[1])\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20044 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[2])) >= 0
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20044 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[2])) >= 0
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 6806 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6806 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6806 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 9528 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, QImode, operands)",
    __builtin_constant_p 
#line 9528 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands))
    ? (int) 
#line 9528 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands))
    : -1 },
#line 11764 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL)",
    __builtin_constant_p 
#line 11764 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    ? (int) 
#line 11764 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    : -1 },
#line 367 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)",
    __builtin_constant_p 
#line 367 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    ? (int) 
#line 367 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    : -1 },
#line 19662 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!optimize_size && !TARGET_PUSH_MEMORY\n\
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))",
    __builtin_constant_p 
#line 19662 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!optimize_size && !TARGET_PUSH_MEMORY
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0)))
    ? (int) 
#line 19662 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!optimize_size && !TARGET_PUSH_MEMORY
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0)))
    : -1 },
#line 2813 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!optimize_size\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && (reload_in_progress || reload_completed\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], XFmode))",
    __builtin_constant_p 
#line 2813 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    ? (int) 
#line 2813 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!optimize_size
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && (reload_in_progress || reload_completed
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    : -1 },
#line 8631 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8631 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8631 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
  { "(TARGET_SSE) && ( reload_completed)",
    __builtin_constant_p (
#line 3452 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 3454 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 3452 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 3454 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 15320 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 15320 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 15320 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
  { "(TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4279 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4285 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4279 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4285 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 10069 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 10069 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 10069 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 4719 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4719 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE_MATH)
    ? (int) 
#line 4719 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE_MATH)
    : -1 },
#line 20448 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(TARGET_K8 || TARGET_GENERIC64) && !optimize_size\n\
   && satisfies_constraint_K (operands[2])",
    __builtin_constant_p 
#line 20448 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((TARGET_K8 || TARGET_GENERIC64) && !optimize_size
   && satisfies_constraint_K (operands[2]))
    ? (int) 
#line 20448 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((TARGET_K8 || TARGET_GENERIC64) && !optimize_size
   && satisfies_constraint_K (operands[2]))
    : -1 },
#line 15103 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_SIMODE_FIOP && !TARGET_SSE_MATH",
    __builtin_constant_p 
#line 15103 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP && !TARGET_SSE_MATH)
    ? (int) 
#line 15103 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP && !TARGET_SSE_MATH)
    : -1 },
#line 5118 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands)",
    __builtin_constant_p 
#line 5118 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
    ? (int) 
#line 5118 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
    : -1 },
#line 19769 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!optimize_size\n\
   && peep2_regno_dead_p (0, FLAGS_REG)\n\
   && ((TARGET_PENTIUM \n\
        && (GET_CODE (operands[0]) != MEM\n\
            || !memory_displacement_operand (operands[0], SImode)))\n\
       || (TARGET_K6 && long_memory_operand (operands[0], SImode)))",
    __builtin_constant_p 
#line 19769 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], SImode))))
    ? (int) 
#line 19769 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!optimize_size
   && peep2_regno_dead_p (0, FLAGS_REG)
   && ((TARGET_PENTIUM 
        && (GET_CODE (operands[0]) != MEM
            || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_K6 && long_memory_operand (operands[0], SImode))))
    : -1 },
#line 19080 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed",
    __builtin_constant_p 
#line 19080 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed)
    ? (int) 
#line 19080 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed)
    : -1 },
#line 19957 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD\n\
   && (! TARGET_USE_MOV0 || optimize_size)\n\
   && GENERAL_REG_P (operands[0])\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 19957 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_size)
   && GENERAL_REG_P (operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 19957 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_size)
   && GENERAL_REG_P (operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 8945 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8945 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8945 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 1313 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1313 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1313 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 5624 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCZmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5624 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5624 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
  { "(TARGET_64BIT && TARGET_CMOVE) && ( reload_completed)",
    __builtin_constant_p (
#line 14504 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE) && 
#line 14506 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 14504 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE) && 
#line 14506 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 9474 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands)",
    __builtin_constant_p 
#line 9474 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands))
    ? (int) 
#line 9474 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands))
    : -1 },
#line 867 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands)",
    __builtin_constant_p 
#line 867 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands))
    ? (int) 
#line 867 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands))
    : -1 },
#line 20192 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(INTVAL (operands[3]) == -1\n\
    || INTVAL (operands[3]) == 1\n\
    || INTVAL (operands[3]) == 128)\n\
   && ix86_match_ccmode (insn, CCGCmode)\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 20192 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((INTVAL (operands[3]) == -1
    || INTVAL (operands[3]) == 1
    || INTVAL (operands[3]) == 128)
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 20192 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((INTVAL (operands[3]) == -1
    || INTVAL (operands[3]) == 1
    || INTVAL (operands[3]) == 128)
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 7297 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM",
    __builtin_constant_p 
#line 7297 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
    ? (int) 
#line 7297 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
    : -1 },
#line 12282 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12282 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 12282 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 9183 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, QImode, operands)",
    __builtin_constant_p 
#line 9183 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands))
    ? (int) 
#line 9183 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands))
    : -1 },
#line 8732 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, QImode, operands)",
    __builtin_constant_p 
#line 8732 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands))
    ? (int) 
#line 8732 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands))
    : -1 },
#line 4793 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands)",
    __builtin_constant_p 
#line 4793 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
    ? (int) 
#line 4793 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (PLUS, DImode, operands))
    : -1 },
#line 4105 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 || SSE_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 4105 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 4105 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (SFmode))
    : -1 },
  { "(TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 17908 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)) && 
#line 17912 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 17908 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !(reload_completed || reload_in_progress)) && 
#line 17912 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 1430 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW",
    __builtin_constant_p 
#line 1430 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW)
    ? (int) 
#line 1430 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW)
    : -1 },
#line 11612 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11612 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11612 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 19496 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && ((GET_MODE (operands[0]) == HImode \n\
	&& ((!optimize_size && !TARGET_FAST_PREFIX)\n\
            /* ??? next two lines just !satisfies_constraint_K (...) */\n\
	    || GET_CODE (operands[2]) != CONST_INT\n\
	    || satisfies_constraint_K (operands[2])))\n\
       || (GET_MODE (operands[0]) == QImode \n\
	   && (TARGET_PROMOTE_QImode || optimize_size)))",
    __builtin_constant_p 
#line 19496 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode 
	&& ((!optimize_size && !TARGET_FAST_PREFIX)
            /* ??? next two lines just !satisfies_constraint_K (...) */
	    || GET_CODE (operands[2]) != CONST_INT
	    || satisfies_constraint_K (operands[2])))
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    ? (int) 
#line 19496 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode 
	&& ((!optimize_size && !TARGET_FAST_PREFIX)
            /* ??? next two lines just !satisfies_constraint_K (...) */
	    || GET_CODE (operands[2]) != CONST_INT
	    || satisfies_constraint_K (operands[2])))
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    : -1 },
#line 4279 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4279 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4279 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 1472 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM",
    __builtin_constant_p 
#line 1472 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    ? (int) 
#line 1472 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    : -1 },
#line 7317 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 7317 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 7317 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 2971 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (EQ, V8HImode, operands)",
    __builtin_constant_p 
#line 2971 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V8HImode, operands))
    ? (int) 
#line 2971 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (EQ, V8HImode, operands))
    : -1 },
#line 9501 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, HImode, operands)",
    __builtin_constant_p 
#line 9501 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands))
    ? (int) 
#line 9501 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands))
    : -1 },
#line 12371 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, QImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12371 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12371 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 775 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 775 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 775 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 3828 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_64BIT",
    __builtin_constant_p 
#line 3828 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_64BIT)
    ? (int) 
#line 3828 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_64BIT)
    : -1 },
#line 6523 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands)",
    __builtin_constant_p 
#line 6523 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
    ? (int) 
#line 6523 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
    : -1 },
#line 20006 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "peep2_regno_dead_p (0, FLAGS_REG) && REGNO (operands[0]) == REGNO (operands[1])",
    __builtin_constant_p 
#line 20006 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG) && REGNO (operands[0]) == REGNO (operands[1]))
    ? (int) 
#line 20006 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG) && REGNO (operands[0]) == REGNO (operands[1]))
    : -1 },
#line 4519 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4519 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_MIX_SSE_I387)
    ? (int) 
#line 4519 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_MIX_SSE_I387)
    : -1 },
#line 20236 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "optimize_size || !TARGET_SUB_ESP_8",
    __builtin_constant_p 
#line 20236 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(optimize_size || !TARGET_SUB_ESP_8)
    ? (int) 
#line 20236 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(optimize_size || !TARGET_SUB_ESP_8)
    : -1 },
#line 3483 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE && reload_completed",
    __builtin_constant_p 
#line 3483 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed)
    ? (int) 
#line 3483 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed)
    : -1 },
#line 1764 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DFmode, operands)",
    __builtin_constant_p 
#line 1764 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DFmode, operands))
    ? (int) 
#line 1764 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DFmode, operands))
    : -1 },
#line 10108 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 10108 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 10108 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 4960 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[2])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)",
    __builtin_constant_p 
#line 4960 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    ? (int) 
#line 4960 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    : -1 },
#line 3051 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DImode, operands)",
    __builtin_constant_p 
#line 3051 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DImode, operands))
    ? (int) 
#line 3051 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DImode, operands))
    : -1 },
#line 12921 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, QImode, operands)",
    __builtin_constant_p 
#line 12921 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands))
    ? (int) 
#line 12921 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands))
    : -1 },
#line 6573 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, DImode, operands)",
    __builtin_constant_p 
#line 6573 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands))
    ? (int) 
#line 6573 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands))
    : -1 },
#line 2090 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode) && 1",
    __builtin_constant_p 
#line 2090 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode) && 1)
    ? (int) 
#line 2090 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode) && 1)
    : -1 },
#line 12198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 12198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 2405 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES",
    __builtin_constant_p 
#line 2405 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES)
    ? (int) 
#line 2405 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES)
    : -1 },
#line 11326 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 11326 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 11326 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 2046 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_check_movabs (insn, 0)",
    __builtin_constant_p 
#line 2046 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 0))
    ? (int) 
#line 2046 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 0))
    : -1 },
#line 4329 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1])))",
    __builtin_constant_p 
#line 4329 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    ? (int) 
#line 4329 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    : -1 },
#line 4704 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && TARGET_80387\n\
   && FLOAT_MODE_P (GET_MODE (operands[0]))",
    __builtin_constant_p 
#line 4704 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[0])))
    ? (int) 
#line 4704 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[0])))
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT || TARGET_CMPXCHG8B)",
    __builtin_constant_p (
#line 139 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 27 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_64BIT || TARGET_CMPXCHG8B))
    ? (int) (
#line 139 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 27 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_64BIT || TARGET_CMPXCHG8B))
    : -1 },
#line 20415 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(TARGET_K8 || TARGET_GENERIC64) && !optimize_size\n\
   && !satisfies_constraint_K (operands[2])",
    __builtin_constant_p 
#line 20415 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((TARGET_K8 || TARGET_GENERIC64) && !optimize_size
   && !satisfies_constraint_K (operands[2]))
    ? (int) 
#line 20415 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((TARGET_K8 || TARGET_GENERIC64) && !optimize_size
   && !satisfies_constraint_K (operands[2]))
    : -1 },
#line 9765 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed && SSE_REG_P (operands[0])",
    __builtin_constant_p 
#line 9765 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed && SSE_REG_P (operands[0]))
    ? (int) 
#line 9765 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed && SSE_REG_P (operands[0]))
    : -1 },
#line 263 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (SMIN, V2SFmode, operands)",
    __builtin_constant_p 
#line 263 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMIN, V2SFmode, operands))
    ? (int) 
#line 263 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMIN, V2SFmode, operands))
    : -1 },
#line 3840 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && TARGET_64BIT",
    __builtin_constant_p 
#line 3840 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT)
    ? (int) 
#line 3840 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT)
    : -1 },
#line 20749 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_PREFETCH_SSE && !TARGET_64BIT",
    __builtin_constant_p 
#line 20749 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE && !TARGET_64BIT)
    ? (int) 
#line 20749 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE && !TARGET_64BIT)
    : -1 },
#line 3061 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && ANY_QI_REG_P (operands[0])\n\
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 3061 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && ANY_QI_REG_P (operands[0])
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    ? (int) 
#line 3061 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && ANY_QI_REG_P (operands[0])
   && (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    : -1 },
#line 20645 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "SIBLING_CALL_P (insn) && TARGET_64BIT",
    __builtin_constant_p 
#line 20645 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn) && TARGET_64BIT)
    ? (int) 
#line 20645 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn) && TARGET_64BIT)
    : -1 },
#line 1569 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL",
    __builtin_constant_p 
#line 1569 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL)
    ? (int) 
#line 1569 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL)
    : -1 },
#line 20034 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "exact_log2 (INTVAL (operands[1])) >= 0\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20034 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20034 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 2848 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
   && GET_MODE (operands[0]) == XFmode\n\
   && ! (ANY_FP_REG_P (operands[0]) || \n\
	 (GET_CODE (operands[0]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))\n\
   && ! (ANY_FP_REG_P (operands[1]) || \n\
	 (GET_CODE (operands[1]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[1]))))",
    __builtin_constant_p 
#line 2848 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && GET_MODE (operands[0]) == XFmode
   && ! (ANY_FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) || 
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    ? (int) 
#line 2848 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
   && GET_MODE (operands[0]) == XFmode
   && ! (ANY_FP_REG_P (operands[0]) || 
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) || 
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    : -1 },
#line 15120 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15120 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15120 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 8191 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 8191 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 8191 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 10138 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, HImode, operands)",
    __builtin_constant_p 
#line 10138 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands))
    ? (int) 
#line 10138 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands))
    : -1 },
#line 19601 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && TARGET_CMOVE\n\
   && (GET_MODE (operands[0]) == HImode\n\
       || (GET_MODE (operands[0]) == QImode \n\
	   && (TARGET_PROMOTE_QImode || optimize_size)))",
    __builtin_constant_p 
#line 19601 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && TARGET_CMOVE
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    ? (int) 
#line 19601 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && TARGET_CMOVE
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode 
	   && (TARGET_PROMOTE_QImode || optimize_size))))
    : -1 },
#line 5334 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5334 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5334 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 4129 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4129 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4129 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 522 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands)",
    __builtin_constant_p 
#line 522 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    ? (int) 
#line 522 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    : -1 },
#line 4068 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode))",
    __builtin_constant_p 
#line 4068 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)))
    ? (int) 
#line 4068 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)))
    : -1 },
#line 4856 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 4856 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 4856 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 12933 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(! TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 12933 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 12933 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
  { "(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && ( reload_completed)",
    __builtin_constant_p (
#line 18996 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 18998 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 18996 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 18998 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 31 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
  { "TARGET_64BIT && TARGET_CMPXCHG16B",
    __builtin_constant_p 
#line 31 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B)
    ? (int) 
#line 31 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B)
    : -1 },
#line 2134 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE && !TARGET_64BIT\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 2134 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 2134 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 18350 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SINGLE_STRINGOP || optimize_size",
    __builtin_constant_p 
#line 18350 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SINGLE_STRINGOP || optimize_size)
    ? (int) 
#line 18350 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SINGLE_STRINGOP || optimize_size)
    : -1 },
#line 9624 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH && reload_completed",
    __builtin_constant_p 
#line 9624 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH && reload_completed)
    ? (int) 
#line 9624 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH && reload_completed)
    : -1 },
#line 887 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands)",
    __builtin_constant_p 
#line 887 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands))
    ? (int) 
#line 887 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands))
    : -1 },
#line 20767 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_PREFETCH_SSE && TARGET_64BIT",
    __builtin_constant_p 
#line 20767 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE && TARGET_64BIT)
    ? (int) 
#line 20767 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE && TARGET_64BIT)
    : -1 },
#line 3095 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DImode, operands)",
    __builtin_constant_p 
#line 3095 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DImode, operands))
    ? (int) 
#line 3095 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DImode, operands))
    : -1 },
#line 4143 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4143 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4143 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 2814 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands)",
    __builtin_constant_p 
#line 2814 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    ? (int) 
#line 2814 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    : -1 },
#line 15250 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_HIMODE_FIOP\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15250 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 15250 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 4161 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4161 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4161 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 8925 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, DImode, operands)",
    __builtin_constant_p 
#line 8925 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands))
    ? (int) 
#line 8925 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands))
    : -1 },
#line 3289 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(reload_completed\n\
    && dead_or_set_p (insn, operands[1])\n\
    && !reg_mentioned_p (operands[1], operands[0]))",
    __builtin_constant_p 
#line 3289 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((reload_completed
    && dead_or_set_p (insn, operands[1])
    && !reg_mentioned_p (operands[1], operands[0])))
    ? (int) 
#line 3289 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((reload_completed
    && dead_or_set_p (insn, operands[1])
    && !reg_mentioned_p (operands[1], operands[0])))
    : -1 },
#line 3051 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V16QImode, operands)",
    __builtin_constant_p 
#line 3051 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V16QImode, operands))
    ? (int) 
#line 3051 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V16QImode, operands))
    : -1 },
#line 14993 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 14993 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 14993 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 4226 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4226 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4226 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 3937 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && !TARGET_64BIT",
    __builtin_constant_p 
#line 3937 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE3 && !TARGET_64BIT)
    ? (int) 
#line 3937 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE3 && !TARGET_64BIT)
    : -1 },
#line 20324 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "INTVAL (operands[2]) == 3\n\
   || INTVAL (operands[2]) == 5\n\
   || INTVAL (operands[2]) == 9",
    __builtin_constant_p 
#line 20324 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 3
   || INTVAL (operands[2]) == 5
   || INTVAL (operands[2]) == 9)
    ? (int) 
#line 20324 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 3
   || INTVAL (operands[2]) == 5
   || INTVAL (operands[2]) == 9)
    : -1 },
#line 934 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_HIMODE_FIOP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 934 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 934 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
#line 11682 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, HImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 11682 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 11682 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 13681 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 13681 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 13681 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 12399 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 12399 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    ? (int) 
#line 12399 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    : -1 },
#line 7511 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "optimize_size || TARGET_USE_CLTD",
    __builtin_constant_p 
#line 7511 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(optimize_size || TARGET_USE_CLTD)
    ? (int) 
#line 7511 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(optimize_size || TARGET_USE_CLTD)
    : -1 },
#line 6751 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6751 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6751 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
#line 12680 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, QImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12680 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12680 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 7133 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 7133 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 7133 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 9984 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 9984 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387))
    ? (int) 
#line 9984 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387))
    : -1 },
#line 13782 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))\n\
   && SELECT_CC_MODE (GET_CODE (operands[0]),\n\
		      operands[1], operands[2]) == CCFPmode\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 13782 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 13782 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 9368 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && ix86_unary_operator_ok (NEG, DImode, operands)",
    __builtin_constant_p 
#line 9368 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ix86_unary_operator_ok (NEG, DImode, operands))
    ? (int) 
#line 9368 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ix86_unary_operator_ok (NEG, DImode, operands))
    : -1 },
#line 7902 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && INTVAL (operands[1]) > 0\n\
   && INTVAL (operands[2]) >= 0\n\
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32\n\
   && (GET_MODE (operands[0]) == SImode\n\
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)\n\
       || GET_MODE (operands[0]) == HImode\n\
       || GET_MODE (operands[0]) == QImode)",
    __builtin_constant_p 
#line 7902 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    ? (int) 
#line 7902 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    : -1 },
#line 6067 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 6067 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 6067 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 8674 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, HImode, operands)",
    __builtin_constant_p 
#line 8674 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands))
    ? (int) 
#line 8674 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands))
    : -1 },
#line 8114 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 8114 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 8114 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 7780 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)\n\
    && ix86_match_ccmode (insn,\n\
 			 GET_CODE (operands[1]) == CONST_INT\n\
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 7780 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn,
 			 GET_CODE (operands[1]) == CONST_INT
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 7780 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    && ix86_match_ccmode (insn,
 			 GET_CODE (operands[1]) == CONST_INT
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 179 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 22 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_64BIT))
    ? (int) (
#line 179 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 22 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_64BIT))
    : -1 },
#line 7919 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && INTVAL (operands[1]) > 0\n\
   && INTVAL (operands[2]) >= 0\n\
   /* Ensure that resulting mask is zero or sign extended operand.  */\n\
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32\n\
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64\n\
	   && INTVAL (operands[1]) > 32))\n\
   && (GET_MODE (operands[0]) == SImode\n\
       || GET_MODE (operands[0]) == DImode\n\
       || GET_MODE (operands[0]) == HImode\n\
       || GET_MODE (operands[0]) == QImode)",
    __builtin_constant_p 
#line 7919 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64
	   && INTVAL (operands[1]) > 32))
   && (GET_MODE (operands[0]) == SImode
       || GET_MODE (operands[0]) == DImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    ? (int) 
#line 7919 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64
	   && INTVAL (operands[1]) > 32))
   && (GET_MODE (operands[0]) == SImode
       || GET_MODE (operands[0]) == DImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    : -1 },
#line 10580 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 10580 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 10580 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 12907 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(! TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12907 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12907 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 912 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])",
    __builtin_constant_p 
#line 912 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    ? (int) 
#line 912 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    : -1 },
#line 254 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (SMAX, V2SFmode, operands)",
    __builtin_constant_p 
#line 254 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMAX, V2SFmode, operands))
    ? (int) 
#line 254 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (SMAX, V2SFmode, operands))
    : -1 },
#line 9131 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)",
    __builtin_constant_p 
#line 9131 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
    ? (int) 
#line 9131 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_size))
    : -1 },
#line 4513 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4513 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && TARGET_SSE_MATH))
    ? (int) 
#line 4513 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && TARGET_SSE_MATH))
    : -1 },
#line 4240 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4240 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4240 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 2552 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands)",
    __builtin_constant_p 
#line 2552 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    ? (int) 
#line 2552 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    : -1 },
#line 742 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (UMAX, V8QImode, operands)",
    __builtin_constant_p 
#line 742 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands))
    ? (int) 
#line 742 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands))
    : -1 },
#line 19737 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "! optimize_size && get_attr_length (insn) >= ix86_cost->large_insn\n\
  && TARGET_SPLIT_LONG_MOVES",
    __builtin_constant_p 
#line 19737 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! optimize_size && get_attr_length (insn) >= ix86_cost->large_insn
  && TARGET_SPLIT_LONG_MOVES)
    ? (int) 
#line 19737 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! optimize_size && get_attr_length (insn) >= ix86_cost->large_insn
  && TARGET_SPLIT_LONG_MOVES)
    : -1 },
#line 9008 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 9008 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 9008 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 10704 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])",
    __builtin_constant_p 
#line 10704 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    ? (int) 
#line 10704 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    : -1 },
#line 9745 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), XFmode, operands)",
    __builtin_constant_p 
#line 9745 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), XFmode, operands))
    ? (int) 
#line 9745 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), XFmode, operands))
    : -1 },
#line 19554 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   /* Ensure that the operand will remain sign-extended immediate.  */\n\
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode)\n\
   && ! TARGET_FAST_PREFIX\n\
   && ! optimize_size",
    __builtin_constant_p 
#line 19554 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode)
   && ! TARGET_FAST_PREFIX
   && ! optimize_size)
    ? (int) 
#line 19554 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode)
   && ! TARGET_FAST_PREFIX
   && ! optimize_size)
    : -1 },
#line 1194 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && reload_completed",
    __builtin_constant_p 
#line 1194 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && reload_completed)
    ? (int) 
#line 1194 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && reload_completed)
    : -1 },
#line 14697 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_SUN_TLS",
    __builtin_constant_p 
#line 14697 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SUN_TLS)
    ? (int) 
#line 14697 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SUN_TLS)
    : -1 },
#line 3482 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "0",
    __builtin_constant_p 
#line 3482 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(0)
    ? (int) 
#line 3482 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(0)
    : -1 },
#line 7428 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (optimize_size || TARGET_USE_CLTD)",
    __builtin_constant_p 
#line 7428 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && (optimize_size || TARGET_USE_CLTD))
    ? (int) 
#line 7428 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && (optimize_size || TARGET_USE_CLTD))
    : -1 },
#line 5466 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 5466 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 5466 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 8152 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "optimize_size || (TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)",
    __builtin_constant_p 
#line 8152 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(optimize_size || (TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL))
    ? (int) 
#line 8152 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(optimize_size || (TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL))
    : -1 },
#line 3494 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 3494 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 3494 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 19038 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE) || (TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 19038 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE) || (TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 19038 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE) || (TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 19098 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE",
    __builtin_constant_p 
#line 19098 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE)
    ? (int) 
#line 19098 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE)
    : -1 },
#line 2389 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands)",
    __builtin_constant_p 
#line 2389 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    ? (int) 
#line 2389 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    : -1 },
#line 15523 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387 && TARGET_SSE2 && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 15523 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 && TARGET_SSE2 && TARGET_MIX_SSE_I387)
    ? (int) 
#line 15523 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 && TARGET_SSE2 && TARGET_MIX_SSE_I387)
    : -1 },
#line 752 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (SMAX, V4HImode, operands)",
    __builtin_constant_p 
#line 752 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands))
    ? (int) 
#line 752 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands))
    : -1 },
#line 11361 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 11361 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 11361 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 2863 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && GET_CODE (operands[1]) == MEM\n\
   && (GET_MODE (operands[0]) == XFmode\n\
       || GET_MODE (operands[0]) == SFmode || GET_MODE (operands[0]) == DFmode)\n\
   && constant_pool_reference_p (operands[1])",
    __builtin_constant_p 
#line 2863 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && GET_CODE (operands[1]) == MEM
   && (GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == SFmode || GET_MODE (operands[0]) == DFmode)
   && constant_pool_reference_p (operands[1]))
    ? (int) 
#line 2863 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && GET_CODE (operands[1]) == MEM
   && (GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == SFmode || GET_MODE (operands[0]) == DFmode)
   && constant_pool_reference_p (operands[1]))
    : -1 },
#line 10080 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 10080 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 10080 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 3078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V16QImode, operands)",
    __builtin_constant_p 
#line 3078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V16QImode, operands))
    ? (int) 
#line 3078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V16QImode, operands))
    : -1 },
#line 20369 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && !optimize_size \n\
   && (INTVAL (operands[2]) == 3\n\
       || INTVAL (operands[2]) == 5\n\
       || INTVAL (operands[2]) == 9)",
    __builtin_constant_p 
#line 20369 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !optimize_size 
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    ? (int) 
#line 20369 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !optimize_size 
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    : -1 },
#line 19408 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_STACK_PROBE",
    __builtin_constant_p 
#line 19408 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_STACK_PROBE)
    ? (int) 
#line 19408 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_STACK_PROBE)
    : -1 },
#line 982 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE && TARGET_64BIT",
    __builtin_constant_p 
#line 982 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT)
    ? (int) 
#line 982 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT)
    : -1 },
#line 3051 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V4SImode, operands)",
    __builtin_constant_p 
#line 3051 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V4SImode, operands))
    ? (int) 
#line 3051 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V4SImode, operands))
    : -1 },
#line 18973 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_CMOVE\n\
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)",
    __builtin_constant_p 
#line 18973 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    ? (int) 
#line 18973 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    : -1 },
#line 10892 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 10892 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 10892 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
#line 867 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands)",
    __builtin_constant_p 
#line 867 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands))
    ? (int) 
#line 867 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands))
    : -1 },
#line 18549 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "! optimize_size || TARGET_INLINE_ALL_STRINGOPS",
    __builtin_constant_p 
#line 18549 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! optimize_size || TARGET_INLINE_ALL_STRINGOPS)
    ? (int) 
#line 18549 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! optimize_size || TARGET_INLINE_ALL_STRINGOPS)
    : -1 },
#line 9677 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 9677 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 9677 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
#line 9659 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands)",
    __builtin_constant_p 
#line 9659 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    ? (int) 
#line 9659 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    : -1 },
#line 11539 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 11539 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 11539 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 11696 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 11696 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    ? (int) 
#line 11696 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    : -1 },
#line 4630 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE2 && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4630 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && TARGET_MIX_SSE_I387)
    ? (int) 
#line 4630 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && TARGET_MIX_SSE_I387)
    : -1 },
  { "(TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4279 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4285 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4279 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && !(reload_completed || reload_in_progress)) && 
#line 4285 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 841 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands)",
    __builtin_constant_p 
#line 841 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands))
    ? (int) 
#line 841 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands))
    : -1 },
#line 3078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V4SImode, operands)",
    __builtin_constant_p 
#line 3078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V4SImode, operands))
    ? (int) 
#line 3078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V4SImode, operands))
    : -1 },
#line 8548 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, DImode, operands)",
    __builtin_constant_p 
#line 8548 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands))
    ? (int) 
#line 8548 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands))
    : -1 },
#line 5759 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5759 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5759 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 12859 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, HImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12859 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12859 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 1548 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands)",
    __builtin_constant_p 
#line 1548 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands))
    ? (int) 
#line 1548 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands))
    : -1 },
#line 15067 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15067 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15067 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 2073 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && reload_completed",
    __builtin_constant_p 
#line 2073 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE3 && reload_completed)
    ? (int) 
#line 2073 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE3 && reload_completed)
    : -1 },
#line 897 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands)",
    __builtin_constant_p 
#line 897 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands))
    ? (int) 
#line 897 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands))
    : -1 },
#line 2899 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands)",
    __builtin_constant_p 
#line 2899 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    ? (int) 
#line 2899 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    : -1 },
#line 1362 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_SSE || TARGET_3DNOW_A",
    __builtin_constant_p 
#line 1362 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A)
    ? (int) 
#line 1362 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A)
    : -1 },
#line 15268 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15268 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15268 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
  { "(TARGET_SSE2 && TARGET_SSE_MATH) && ( reload_completed)",
    __builtin_constant_p (
#line 9690 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH) && 
#line 9692 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 9690 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH) && 
#line 9692 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 7716 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 7716 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 7716 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 19970 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode\n\
    || GET_MODE (operands[0]) == HImode)\n\
   && (! TARGET_USE_MOV0 || optimize_size)\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 19970 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode
    || GET_MODE (operands[0]) == HImode)
   && (! TARGET_USE_MOV0 || optimize_size)
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 19970 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode
    || GET_MODE (operands[0]) == HImode)
   && (! TARGET_USE_MOV0 || optimize_size)
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 19428 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_STACK_PROBE",
    __builtin_constant_p 
#line 19428 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_STACK_PROBE)
    ? (int) 
#line 19428 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_STACK_PROBE)
    : -1 },
#line 4906 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 4906 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 4906 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 15514 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387 || (TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15514 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 15514 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 2919 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 2919 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 2919 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 4569 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 4569 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387))
    ? (int) 
#line 4569 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387))
    : -1 },
#line 5720 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGCmode)\n\
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000",
    __builtin_constant_p 
#line 5720 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000)
    ? (int) 
#line 5720 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffffffff) != 0x80000000)
    : -1 },
#line 12573 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12573 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12573 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 15049 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 15049 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 15049 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 9413 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NEG, DImode, operands)",
    __builtin_constant_p 
#line 9413 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, DImode, operands))
    ? (int) 
#line 9413 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, DImode, operands))
    : -1 },
#line 887 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands)",
    __builtin_constant_p 
#line 887 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands))
    ? (int) 
#line 887 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands))
    : -1 },
#line 6719 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6719 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6719 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 3543 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 3543 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 3543 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 793 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 793 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 793 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 10725 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))",
    __builtin_constant_p 
#line 10725 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    ? (int) 
#line 10725 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    : -1 },
#line 30 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
  { "!TARGET_64BIT && TARGET_CMPXCHG8B && !flag_pic",
    __builtin_constant_p 
#line 30 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(!TARGET_64BIT && TARGET_CMPXCHG8B && !flag_pic)
    ? (int) 
#line 30 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(!TARGET_64BIT && TARGET_CMPXCHG8B && !flag_pic)
    : -1 },
#line 2389 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands)",
    __builtin_constant_p 
#line 2389 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    ? (int) 
#line 2389 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    : -1 },
#line 19047 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE\n\
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)",
    __builtin_constant_p 
#line 19047 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    ? (int) 
#line 19047 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    : -1 },
#line 1983 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1983 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1983 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 15456 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && reload_completed\n\
   && FLOAT_MODE_P (GET_MODE (operands[0]))",
    __builtin_constant_p 
#line 15456 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed
   && FLOAT_MODE_P (GET_MODE (operands[0])))
    ? (int) 
#line 15456 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed
   && FLOAT_MODE_P (GET_MODE (operands[0])))
    : -1 },
#line 3735 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 3735 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations)
    ? (int) 
#line 3735 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations)
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT && TARGET_CMPXCHG16B)",
    __builtin_constant_p (
#line 139 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 28 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B))
    ? (int) (
#line 139 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 28 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B))
    : -1 },
#line 12632 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, HImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12632 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12632 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 11597 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11597 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11597 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 3051 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V8HImode, operands)",
    __builtin_constant_p 
#line 3051 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V8HImode, operands))
    ? (int) 
#line 3051 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V8HImode, operands))
    : -1 },
#line 1425 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && ((!TARGET_USE_MOV0 && !TARGET_PARTIAL_REG_STALL) || optimize_size)",
    __builtin_constant_p 
#line 1425 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && ((!TARGET_USE_MOV0 && !TARGET_PARTIAL_REG_STALL) || optimize_size))
    ? (int) 
#line 1425 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && ((!TARGET_USE_MOV0 && !TARGET_PARTIAL_REG_STALL) || optimize_size))
    : -1 },
#line 238 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 238 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 238 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 10439 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || TARGET_DOUBLE_WITH_ADD)))",
    __builtin_constant_p 
#line 10439 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    ? (int) 
#line 10439 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    : -1 },
#line 4279 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4279 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4279 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 3673 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 3673 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 3673 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 12612 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)",
    __builtin_constant_p 
#line 12612 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands))
    ? (int) 
#line 12612 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands))
    : -1 },
#line 8706 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, QImode, operands)",
    __builtin_constant_p 
#line 8706 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands))
    ? (int) 
#line 8706 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands))
    : -1 },
#line 11177 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || TARGET_DOUBLE_WITH_ADD)))",
    __builtin_constant_p 
#line 11177 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    ? (int) 
#line 11177 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD))))
    : -1 },
#line 9553 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH && TARGET_MIX_SSE_I387\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands)",
    __builtin_constant_p 
#line 9553 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    ? (int) 
#line 9553 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), SFmode, operands))
    : -1 },
#line 1047 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands)",
    __builtin_constant_p 
#line 1047 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    ? (int) 
#line 1047 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    : -1 },
#line 10193 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, QImode, operands)",
    __builtin_constant_p 
#line 10193 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands))
    ? (int) 
#line 10193 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands))
    : -1 },
#line 3992 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 3992 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations)
    ? (int) 
#line 3992 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations)
    : -1 },
#line 19821 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && (true_regnum (operands[2]) != 0\n\
       || satisfies_constraint_K (operands[3]))\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 19821 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (true_regnum (operands[2]) != 0
       || satisfies_constraint_K (operands[3]))
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 19821 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (true_regnum (operands[2]) != 0
       || satisfies_constraint_K (operands[3]))
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 11312 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 11312 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 11312 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 5188 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, DImode, operands)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5188 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5188 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 4731 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4731 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 4731 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
#line 8170 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(optimize_size || !TARGET_PARTIAL_REG_STALL) && reload_completed",
    __builtin_constant_p 
#line 8170 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((optimize_size || !TARGET_PARTIAL_REG_STALL) && reload_completed)
    ? (int) 
#line 8170 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((optimize_size || !TARGET_PARTIAL_REG_STALL) && reload_completed)
    : -1 },
#line 2830 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands)",
    __builtin_constant_p 
#line 2830 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    ? (int) 
#line 2830 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    : -1 },
#line 14906 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_GNU2_TLS",
    __builtin_constant_p 
#line 14906 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS)
    ? (int) 
#line 14906 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS)
    : -1 },
#line 18964 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_HIMODE_MATH",
    __builtin_constant_p 
#line 18964 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)
    ? (int) 
#line 18964 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)
    : -1 },
#line 11799 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, QImode, operands)\n\
   && (! TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 11799 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 11799 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (! TARGET_PARTIAL_REG_STALL || optimize_size)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 6323 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 6323 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 6323 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 6117 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 6117 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 6117 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 934 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_SIMODE_FIOP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 934 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 934 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
#line 14169 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT",
    __builtin_constant_p 
#line 14169 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT)
    ? (int) 
#line 14169 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT)
    : -1 },
#line 13731 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))\n\
   && SELECT_CC_MODE (GET_CODE (operands[0]),\n\
		      operands[1], operands[2]) == CCFPmode\n\
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0]))",
    __builtin_constant_p 
#line 13731 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    ? (int) 
#line 13731 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !ix86_use_fcomi_compare (GET_CODE (operands[0]))
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && ix86_fp_jump_nontrivial_p (GET_CODE (operands[0])))
    : -1 },
#line 1037 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1037 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1037 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
#line 8217 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 8217 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 8217 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 9457 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, SImode, operands)",
    __builtin_constant_p 
#line 9457 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands))
    ? (int) 
#line 9457 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands))
    : -1 },
#line 9581 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH",
    __builtin_constant_p 
#line 9581 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH)
    ? (int) 
#line 9581 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE_MATH)
    : -1 },
#line 4198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 4198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 4198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 4476 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4476 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387)
    ? (int) 
#line 4476 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387)
    : -1 },
#line 15154 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15154 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15154 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 9232 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 9232 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 9232 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 9932 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && (reload_completed || !TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 9932 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && (reload_completed || !TARGET_SSE_MATH))
    ? (int) 
#line 9932 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && (reload_completed || !TARGET_SSE_MATH))
    : -1 },
#line 9051 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, HImode, operands)",
    __builtin_constant_p 
#line 9051 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands))
    ? (int) 
#line 9051 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands))
    : -1 },
#line 11958 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed",
    __builtin_constant_p 
#line 11958 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed)
    ? (int) 
#line 11958 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed)
    : -1 },
#line 10018 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NOT, DImode, operands)",
    __builtin_constant_p 
#line 10018 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, DImode, operands))
    ? (int) 
#line 10018 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, DImode, operands))
    : -1 },
#line 3946 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && TARGET_64BIT",
    __builtin_constant_p 
#line 3946 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_64BIT)
    ? (int) 
#line 3946 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_64BIT)
    : -1 },
#line 4129 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4129 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4129 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 12763 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12763 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12763 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 11895 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL)",
    __builtin_constant_p 
#line 11895 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    ? (int) 
#line 11895 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    : -1 },
#line 13257 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 || TARGET_SSE",
    __builtin_constant_p 
#line 13257 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || TARGET_SSE)
    ? (int) 
#line 13257 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || TARGET_SSE)
    : -1 },
#line 218 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands)",
    __builtin_constant_p 
#line 218 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands))
    ? (int) 
#line 218 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands))
    : -1 },
#line 1723 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DFmode, operands)",
    __builtin_constant_p 
#line 1723 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DFmode, operands))
    ? (int) 
#line 1723 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DFmode, operands))
    : -1 },
#line 10536 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_CMOVE",
    __builtin_constant_p 
#line 10536 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_CMOVE)
    ? (int) 
#line 10536 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_CMOVE)
    : -1 },
#line 20799 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_3DNOW && TARGET_64BIT",
    __builtin_constant_p 
#line 20799 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_3DNOW && TARGET_64BIT)
    ? (int) 
#line 20799 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_3DNOW && TARGET_64BIT)
    : -1 },
#line 20354 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (INTVAL (operands[2]) == 3\n\
       || INTVAL (operands[2]) == 5\n\
       || INTVAL (operands[2]) == 9)",
    __builtin_constant_p 
#line 20354 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    ? (int) 
#line 20354 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    : -1 },
#line 3095 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V16QImode, operands)",
    __builtin_constant_p 
#line 3095 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V16QImode, operands))
    ? (int) 
#line 3095 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V16QImode, operands))
    : -1 },
#line 12447 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 12447 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    ? (int) 
#line 12447 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    : -1 },
#line 18425 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size)",
    __builtin_constant_p 
#line 18425 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
    ? (int) 
#line 18425 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
    : -1 },
#line 8469 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
    && !(~INTVAL (operands[2]) & ~(255 << 8))\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8469 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8469 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 7854 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 7854 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 7854 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 19525 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   /* Ensure that the operand will remain sign-extended immediate.  */\n\
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode)\n\
   && ! optimize_size\n\
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)\n\
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))",
    __builtin_constant_p 
#line 19525 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode)
   && ! optimize_size
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode)))
    ? (int) 
#line 19525 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode)
   && ! optimize_size
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode)))
    : -1 },
#line 11484 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11484 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11484 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 15553 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 15553 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387))
    ? (int) 
#line 15553 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(TARGET_SSE2 && TARGET_SSE_MATH) || TARGET_MIX_SSE_I387))
    : -1 },
#line 14253 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_can_use_return_insn_p ()",
    __builtin_constant_p 
#line 14253 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_can_use_return_insn_p ())
    ? (int) 
#line 14253 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_can_use_return_insn_p ())
    : -1 },
  { "(TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4205 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4205 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 20613 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "SIBLING_CALL_P (insn) && !TARGET_64BIT",
    __builtin_constant_p 
#line 20613 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn) && !TARGET_64BIT)
    ? (int) 
#line 20613 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn) && !TARGET_64BIT)
    : -1 },
#line 19023 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE\n\
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM)",
    __builtin_constant_p 
#line 19023 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    ? (int) 
#line 19023 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
    : -1 },
#line 12480 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL)",
    __builtin_constant_p 
#line 12480 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    ? (int) 
#line 12480 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    : -1 },
#line 1599 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed && (!TARGET_USE_MOV0 || optimize_size)",
    __builtin_constant_p 
#line 1599 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed && (!TARGET_USE_MOV0 || optimize_size))
    ? (int) 
#line 1599 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed && (!TARGET_USE_MOV0 || optimize_size))
    : -1 },
#line 15989 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))\n\
   && !reload_completed && !reload_in_progress",
    __builtin_constant_p 
#line 15989 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))
   && !reload_completed && !reload_in_progress)
    ? (int) 
#line 15989 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))
   && !reload_completed && !reload_in_progress)
    : -1 },
#line 10854 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 10854 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 10854 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
#line 841 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands)",
    __builtin_constant_p 
#line 841 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands))
    ? (int) 
#line 841 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands))
    : -1 },
#line 20015 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 20015 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 20015 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 12812 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12812 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12812 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 2399 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 2399 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    ? (int) 
#line 2399 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    : -1 },
#line 1029 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 1029 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 1029 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 12839 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)",
    __builtin_constant_p 
#line 12839 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    ? (int) 
#line 12839 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    : -1 },
#line 15476 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387 || TARGET_SSE_MATH",
    __builtin_constant_p 
#line 15476 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 || TARGET_SSE_MATH)
    ? (int) 
#line 15476 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387 || TARGET_SSE_MATH)
    : -1 },
#line 2122 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE || TARGET_64BIT",
    __builtin_constant_p 
#line 2122 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE || TARGET_64BIT)
    ? (int) 
#line 2122 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE || TARGET_64BIT)
    : -1 },
#line 10180 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, QImode, operands)",
    __builtin_constant_p 
#line 10180 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands))
    ? (int) 
#line 10180 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands))
    : -1 },
#line 6782 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6782 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6782 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 4624 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4624 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 4624 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 1748 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DFmode, operands)",
    __builtin_constant_p 
#line 1748 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DFmode, operands))
    ? (int) 
#line 1748 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DFmode, operands))
    : -1 },
#line 4240 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4240 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4240 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 2740 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!optimize_size",
    __builtin_constant_p 
#line 2740 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!optimize_size)
    ? (int) 
#line 2740 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!optimize_size)
    : -1 },
#line 12826 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, SImode, operands)",
    __builtin_constant_p 
#line 12826 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands))
    ? (int) 
#line 12826 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands))
    : -1 },
#line 11394 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL)",
    __builtin_constant_p 
#line 11394 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    ? (int) 
#line 11394 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    : -1 },
#line 3570 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)",
    __builtin_constant_p 
#line 3570 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    ? (int) 
#line 3570 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
    : -1 },
#line 13221 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387",
    __builtin_constant_p 
#line 13221 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387)
    ? (int) 
#line 13221 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387)
    : -1 },
#line 19910 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "! optimize_size && ! TARGET_READ_MODIFY",
    __builtin_constant_p 
#line 19910 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! optimize_size && ! TARGET_READ_MODIFY)
    ? (int) 
#line 19910 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! optimize_size && ! TARGET_READ_MODIFY)
    : -1 },
#line 12268 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, HImode, operands)\n\
   && (TARGET_SHIFT1 || optimize_size)",
    __builtin_constant_p 
#line 12268 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    ? (int) 
#line 12268 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands)
   && (TARGET_SHIFT1 || optimize_size))
    : -1 },
#line 19214 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "REGNO (operands[0]) != REGNO (operands[1])",
    __builtin_constant_p 
#line 19214 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1]))
    ? (int) 
#line 19214 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1]))
    : -1 },
#line 565 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 565 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    ? (int) 
#line 565 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    : -1 },
#line 15368 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_SIMODE_FIOP",
    __builtin_constant_p 
#line 15368 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP)
    ? (int) 
#line 15368 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_SIMODE_FIOP)
    : -1 },
#line 14496 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_CMOVE",
    __builtin_constant_p 
#line 14496 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE)
    ? (int) 
#line 14496 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_CMOVE)
    : -1 },
#line 10932 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))",
    __builtin_constant_p 
#line 10932 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    ? (int) 
#line 10932 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    : -1 },
#line 4240 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4240 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4240 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 15213 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)",
    __builtin_constant_p 
#line 15213 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    ? (int) 
#line 15213 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
    : -1 },
#line 4226 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4226 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4226 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 19981 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == HImode\n\
    || GET_MODE (operands[0]) == SImode \n\
    || (GET_MODE (operands[0]) == DImode && TARGET_64BIT))\n\
   && (optimize_size || TARGET_PENTIUM)\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 19981 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == HImode
    || GET_MODE (operands[0]) == SImode 
    || (GET_MODE (operands[0]) == DImode && TARGET_64BIT))
   && (optimize_size || TARGET_PENTIUM)
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 19981 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == HImode
    || GET_MODE (operands[0]) == SImode 
    || (GET_MODE (operands[0]) == DImode && TARGET_64BIT))
   && (optimize_size || TARGET_PENTIUM)
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 6664 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6664 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6664 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 1367 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DFmode, operands)",
    __builtin_constant_p 
#line 1367 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DFmode, operands))
    ? (int) 
#line 1367 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DFmode, operands))
    : -1 },
#line 8018 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && GET_MODE (operands[2]) != QImode\n\
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))\n\
    && ((ix86_match_ccmode (insn, CCZmode)\n\
	 && !(INTVAL (operands[3]) & ~255))\n\
	|| (ix86_match_ccmode (insn, CCNOmode)\n\
	    && !(INTVAL (operands[3]) & ~127)))",
    __builtin_constant_p 
#line 8018 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127))))
    ? (int) 
#line 8018 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127))))
    : -1 },
#line 12707 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, QImode, operands)",
    __builtin_constant_p 
#line 12707 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands))
    ? (int) 
#line 12707 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands))
    : -1 },
#line 2915 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands)",
    __builtin_constant_p 
#line 2915 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    ? (int) 
#line 2915 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    : -1 },
#line 11731 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 11731 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    ? (int) 
#line 11731 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    : -1 },
#line 5236 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCZmode)\n\
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)\n\
   /* Current assemblers are broken and do not allow @GOTOFF in\n\
      ought but a memory context.  */\n\
   && ! pic_symbolic_operand (operands[2], VOIDmode)",
    __builtin_constant_p 
#line 5236 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    ? (int) 
#line 5236 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCZmode)
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM)
   /* Current assemblers are broken and do not allow @GOTOFF in
      ought but a memory context.  */
   && ! pic_symbolic_operand (operands[2], VOIDmode))
    : -1 },
#line 887 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands)",
    __builtin_constant_p 
#line 887 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands))
    ? (int) 
#line 887 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands))
    : -1 },
#line 13807 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_USE_HIMODE_FIOP\n\
   && FLOAT_MODE_P (GET_MODE (operands[3]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[3])\n\
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))\n\
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode\n\
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0])))",
    __builtin_constant_p 
#line 13807 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
    ? (int) 
#line 13807 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_USE_HIMODE_FIOP
   && FLOAT_MODE_P (GET_MODE (operands[3]))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && !ix86_use_fcomi_compare (swap_condition (GET_CODE (operands[0])))
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && ix86_fp_jump_nontrivial_p (swap_condition (GET_CODE (operands[0]))))
    : -1 },
#line 9304 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && ANY_QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
    && !(INTVAL (operands[2]) & ~255)\n\
    && (INTVAL (operands[2]) & 128)\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 9304 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 9304 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_size)
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 7997 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[2])\n\
    && GET_MODE (operands[2]) != QImode\n\
    && ((ix86_match_ccmode (insn, CCZmode)\n\
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))\n\
	|| (ix86_match_ccmode (insn, CCNOmode)\n\
	    && !(INTVAL (operands[3]) & ~(127 << 8))))",
    __builtin_constant_p 
#line 7997 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[2])
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8)))))
    ? (int) 
#line 7997 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[2])
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8)))))
    : -1 },
#line 6560 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands)",
    __builtin_constant_p 
#line 6560 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
    ? (int) 
#line 6560 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
    : -1 },
#line 12317 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && (TARGET_SHIFT1 || optimize_size)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 12317 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 12317 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && (TARGET_SHIFT1 || optimize_size)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 8603 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8603 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8603 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 10206 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 10206 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 10206 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 8968 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8968 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8968 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 3145 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && true_regnum (operands[0]) == true_regnum (operands[1])",
    __builtin_constant_p 
#line 3145 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    ? (int) 
#line 3145 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    : -1 },
#line 5062 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[3])",
    __builtin_constant_p 
#line 5062 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3]))
    ? (int) 
#line 5062 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3]))
    : -1 },
#line 19702 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "! optimize_size\n\
   && ! TARGET_USE_MOV0\n\
   && TARGET_SPLIT_LONG_MOVES\n\
   && get_attr_length (insn) >= ix86_cost->large_insn\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 19702 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! optimize_size
   && ! TARGET_USE_MOV0
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cost->large_insn
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 19702 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! optimize_size
   && ! TARGET_USE_MOV0
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cost->large_insn
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 13520 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 || TARGET_SSE_MATH",
    __builtin_constant_p 
#line 13520 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || TARGET_SSE_MATH)
    ? (int) 
#line 13520 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || TARGET_SSE_MATH)
    : -1 },
#line 9649 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387\n\
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands)",
    __builtin_constant_p 
#line 9649 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    ? (int) 
#line 9649 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387
   && ix86_unary_operator_ok (GET_CODE (operands[3]), DFmode, operands))
    : -1 },
#line 565 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 565 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    ? (int) 
#line 565 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    : -1 },
#line 4105 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_80387 || SSE_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 4105 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 4105 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (DFmode))
    : -1 },
#line 176 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "!TARGET_64BIT && reload_completed\n\
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]))\n\
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 176 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]))
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    ? (int) 
#line 176 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]))
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    : -1 },
#line 12873 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, HImode, operands)",
    __builtin_constant_p 
#line 12873 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands))
    ? (int) 
#line 12873 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands))
    : -1 },
#line 3078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DImode, operands)",
    __builtin_constant_p 
#line 3078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DImode, operands))
    ? (int) 
#line 3078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DImode, operands))
    : -1 },
  { "(TARGET_FISTTP\n\
   && FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && !(reload_completed || reload_in_progress)) && ( 1)",
    __builtin_constant_p (
#line 4198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4205 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4198 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_FISTTP
   && FLOAT_MODE_P (GET_MODE (operands[1]))
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && !(reload_completed || reload_in_progress)) && 
#line 4205 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 3095 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V8HImode, operands)",
    __builtin_constant_p 
#line 3095 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V8HImode, operands))
    ? (int) 
#line 3095 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V8HImode, operands))
    : -1 },
#line 18857 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8])",
    __builtin_constant_p 
#line 18857 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8]))
    ? (int) 
#line 18857 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8]))
    : -1 },
#line 11661 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)\n\
   && (optimize_size\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL)",
    __builtin_constant_p 
#line 11661 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    ? (int) 
#line 11661 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (optimize_size
       || !TARGET_PARTIAL_FLAG_REG_STALL))
    : -1 },
#line 19945 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "! optimize_size && ! TARGET_READ_MODIFY_WRITE",
    __builtin_constant_p 
#line 19945 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! optimize_size && ! TARGET_READ_MODIFY_WRITE)
    ? (int) 
#line 19945 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(! optimize_size && ! TARGET_READ_MODIFY_WRITE)
    : -1 },
#line 3769 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 3769 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    ? (int) 
#line 3769 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    : -1 },
#line 1371 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT",
    __builtin_constant_p 
#line 1371 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT)
    ? (int) 
#line 1371 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT)
    : -1 },
#line 3749 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 3749 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    ? (int) 
#line 3749 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    : -1 },
#line 11562 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 11562 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 11562 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 809 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (IOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 809 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    ? (int) 
#line 809 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    : -1 },
#line 8236 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, HImode, operands)",
    __builtin_constant_p 
#line 8236 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands))
    ? (int) 
#line 8236 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands))
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 5012 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 5019 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 5012 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_size)
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 5019 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 8569 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8569 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8569 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 10029 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, DImode, operands)",
    __builtin_constant_p 
#line 10029 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands))
    ? (int) 
#line 10029 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands))
    : -1 },
#line 8049 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands)",
    __builtin_constant_p 
#line 8049 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands))
    ? (int) 
#line 8049 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands))
    : -1 },
#line 5979 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGCmode)\n\
   && (INTVAL (operands[2]) & 0xffff) != 0x8000",
    __builtin_constant_p 
#line 5979 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffff) != 0x8000)
    ? (int) 
#line 5979 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode)
   && (INTVAL (operands[2]) & 0xffff) != 0x8000)
    : -1 },
#line 2393 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !TARGET_INTEGER_DFMODE_MOVES",
    __builtin_constant_p 
#line 2393 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && !TARGET_INTEGER_DFMODE_MOVES)
    ? (int) 
#line 2393 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(!TARGET_64BIT && !TARGET_INTEGER_DFMODE_MOVES)
    : -1 },
#line 11078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 11078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 11078 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
#line 717 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 717 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 717 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 20247 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
  { "optimize_size || !TARGET_ADD_ESP_4",
    __builtin_constant_p 
#line 20247 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(optimize_size || !TARGET_ADD_ESP_4)
    ? (int) 
#line 20247 "/home/dkoe/mptcp/arch/sim/test/buildtop/source/gccxml/GCC/gcc/config/i386/i386.md"
(optimize_size || !TARGET_ADD_ESP_4)
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
