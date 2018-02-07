/*
 * Copyright (C) 2014  absurdworlds
 *
 * License LGPLv3 or later:
 * GNU Lesser GPL version 3 <http://gnu.org/licenses/lgpl-3.0.html>
 * This is free software: you are free to change and redistribute it.
 * There is NO WARRANTY, to the extent permitted by law.
 */
#ifndef aw_meta_pp_foldl_h
#define aw_meta_pp_foldl_h
#include "reverse.h"

#define FL_1(OP,  DO, X, ...)  DO(X)
#define FL_2(OP,  DO, X, ...)  OP(FL_1(OP,  DO, __VA_ARGS__), DO(X))
#define FL_3(OP,  DO, X, ...)  OP(FL_2(OP,  DO, __VA_ARGS__), DO(X))
#define FL_4(OP,  DO, X, ...)  OP(FL_3(OP,  DO, __VA_ARGS__), DO(X))
#define FL_5(OP,  DO, X, ...)  OP(FL_4(OP,  DO, __VA_ARGS__), DO(X))
#define FL_6(OP,  DO, X, ...)  OP(FL_5(OP,  DO, __VA_ARGS__), DO(X))
#define FL_7(OP,  DO, X, ...)  OP(FL_6(OP,  DO, __VA_ARGS__), DO(X))
#define FL_8(OP,  DO, X, ...)  OP(FL_7(OP,  DO, __VA_ARGS__), DO(X))
#define FL_9(OP,  DO, X, ...)  OP(FL_8(OP,  DO, __VA_ARGS__), DO(X))
#define FL_10(OP, DO, X, ...)  OP(FL_9(OP,  DO, __VA_ARGS__), DO(X))
#define FL_11(OP, DO, X, ...)  OP(FL_10(OP, DO, __VA_ARGS__), DO(X))
#define FL_12(OP, DO, X, ...)  OP(FL_11(OP, DO, __VA_ARGS__), DO(X))
#define FL_13(OP, DO, X, ...)  OP(FL_12(OP, DO, __VA_ARGS__), DO(X))
#define FL_14(OP, DO, X, ...)  OP(FL_13(OP, DO, __VA_ARGS__), DO(X))
#define FL_15(OP, DO, X, ...)  OP(FL_14(OP, DO, __VA_ARGS__), DO(X))
#define FL_16(OP, DO, X, ...)  OP(FL_15(OP, DO, __VA_ARGS__), DO(X))
#define FL_17(OP, DO, X, ...)  OP(FL_16(OP, DO, __VA_ARGS__), DO(X))
#define FL_18(OP, DO, X, ...)  OP(FL_17(OP, DO, __VA_ARGS__), DO(X))
#define FL_19(OP, DO, X, ...)  OP(FL_18(OP, DO, __VA_ARGS__), DO(X))
#define FL_20(OP, DO, X, ...)  OP(FL_19(OP, DO, __VA_ARGS__), DO(X))
#define FL_21(OP, DO, X, ...)  OP(FL_20(OP, DO, __VA_ARGS__), DO(X))
#define FL_22(OP, DO, X, ...)  OP(FL_21(OP, DO, __VA_ARGS__), DO(X))
#define FL_23(OP, DO, X, ...)  OP(FL_22(OP, DO, __VA_ARGS__), DO(X))
#define FL_24(OP, DO, X, ...)  OP(FL_23(OP, DO, __VA_ARGS__), DO(X))
#define FL_25(OP, DO, X, ...)  OP(FL_24(OP, DO, __VA_ARGS__), DO(X))
#define FL_26(OP, DO, X, ...)  OP(FL_25(OP, DO, __VA_ARGS__), DO(X))
#define FL_27(OP, DO, X, ...)  OP(FL_26(OP, DO, __VA_ARGS__), DO(X))
#define FL_28(OP, DO, X, ...)  OP(FL_27(OP, DO, __VA_ARGS__), DO(X))
#define FL_29(OP, DO, X, ...)  OP(FL_28(OP, DO, __VA_ARGS__), DO(X))
#define FL_30(OP, DO, X, ...)  OP(FL_29(OP, DO, __VA_ARGS__), DO(X))
#define FL_31(OP, DO, X, ...)  OP(FL_30(OP, DO, __VA_ARGS__), DO(X))
#define FL_32(OP, DO, X, ...)  OP(FL_31(OP, DO, __VA_ARGS__), DO(X))
#define FL_33(OP, DO, X, ...)  OP(FL_32(OP, DO, __VA_ARGS__), DO(X))
#define FL_34(OP, DO, X, ...)  OP(FL_33(OP, DO, __VA_ARGS__), DO(X))
#define FL_35(OP, DO, X, ...)  OP(FL_34(OP, DO, __VA_ARGS__), DO(X))
#define FL_36(OP, DO, X, ...)  OP(FL_35(OP, DO, __VA_ARGS__), DO(X))
#define FL_37(OP, DO, X, ...)  OP(FL_36(OP, DO, __VA_ARGS__), DO(X))
#define FL_38(OP, DO, X, ...)  OP(FL_37(OP, DO, __VA_ARGS__), DO(X))
#define FL_39(OP, DO, X, ...)  OP(FL_38(OP, DO, __VA_ARGS__), DO(X))
#define FL_40(OP, DO, X, ...)  OP(FL_39(OP, DO, __VA_ARGS__), DO(X))
#define FL_41(OP, DO, X, ...)  OP(FL_40(OP, DO, __VA_ARGS__), DO(X))
#define FL_42(OP, DO, X, ...)  OP(FL_41(OP, DO, __VA_ARGS__), DO(X))
#define FL_43(OP, DO, X, ...)  OP(FL_42(OP, DO, __VA_ARGS__), DO(X))
#define FL_44(OP, DO, X, ...)  OP(FL_43(OP, DO, __VA_ARGS__), DO(X))
#define FL_45(OP, DO, X, ...)  OP(FL_44(OP, DO, __VA_ARGS__), DO(X))
#define FL_46(OP, DO, X, ...)  OP(FL_45(OP, DO, __VA_ARGS__), DO(X))
#define FL_47(OP, DO, X, ...)  OP(FL_46(OP, DO, __VA_ARGS__), DO(X))
#define FL_48(OP, DO, X, ...)  OP(FL_47(OP, DO, __VA_ARGS__), DO(X))
#define FL_49(OP, DO, X, ...)  OP(FL_48(OP, DO, __VA_ARGS__), DO(X))
#define FL_50(OP, DO, X, ...)  OP(FL_49(OP, DO, __VA_ARGS__), DO(X))
#define FL_51(OP, DO, X, ...)  OP(FL_50(OP, DO, __VA_ARGS__), DO(X))
#define FL_52(OP, DO, X, ...)  OP(FL_51(OP, DO, __VA_ARGS__), DO(X))
#define FL_53(OP, DO, X, ...)  OP(FL_52(OP, DO, __VA_ARGS__), DO(X))
#define FL_54(OP, DO, X, ...)  OP(FL_53(OP, DO, __VA_ARGS__), DO(X))
#define FL_55(OP, DO, X, ...)  OP(FL_54(OP, DO, __VA_ARGS__), DO(X))
#define FL_56(OP, DO, X, ...)  OP(FL_55(OP, DO, __VA_ARGS__), DO(X))
#define FL_57(OP, DO, X, ...)  OP(FL_56(OP, DO, __VA_ARGS__), DO(X))
#define FL_58(OP, DO, X, ...)  OP(FL_57(OP, DO, __VA_ARGS__), DO(X))
#define FL_59(OP, DO, X, ...)  OP(FL_58(OP, DO, __VA_ARGS__), DO(X))
#define FL_60(OP, DO, X, ...)  OP(FL_59(OP, DO, __VA_ARGS__), DO(X))
#define FL_61(OP, DO, X, ...)  OP(FL_60(OP, DO, __VA_ARGS__), DO(X))
#define FL_62(OP, DO, X, ...)  OP(FL_61(OP, DO, __VA_ARGS__), DO(X))
#define FL_63(OP, DO, X, ...)  OP(FL_62(OP, DO, __VA_ARGS__), DO(X))
#define FL_64(OP, DO, X, ...)  OP(FL_63(OP, DO, __VA_ARGS__), DO(X))
#define FL_65(OP, DO, X, ...)  OP(FL_64(OP, DO, __VA_ARGS__), DO(X))
#define FL_66(OP, DO, X, ...)  OP(FL_65(OP, DO, __VA_ARGS__), DO(X))
#define FL_67(OP, DO, X, ...)  OP(FL_66(OP, DO, __VA_ARGS__), DO(X))
#define FL_68(OP, DO, X, ...)  OP(FL_67(OP, DO, __VA_ARGS__), DO(X))
#define FL_69(OP, DO, X, ...)  OP(FL_68(OP, DO, __VA_ARGS__), DO(X))
#define FL_70(OP, DO, X, ...)  OP(FL_69(OP, DO, __VA_ARGS__), DO(X))
#define FL_71(OP, DO, X, ...)  OP(FL_70(OP, DO, __VA_ARGS__), DO(X))
#define FL_72(OP, DO, X, ...)  OP(FL_71(OP, DO, __VA_ARGS__), DO(X))
#define FL_73(OP, DO, X, ...)  OP(FL_72(OP, DO, __VA_ARGS__), DO(X))
#define FL_74(OP, DO, X, ...)  OP(FL_73(OP, DO, __VA_ARGS__), DO(X))
#define FL_75(OP, DO, X, ...)  OP(FL_74(OP, DO, __VA_ARGS__), DO(X))
#define FL_76(OP, DO, X, ...)  OP(FL_75(OP, DO, __VA_ARGS__), DO(X))
#define FL_77(OP, DO, X, ...)  OP(FL_76(OP, DO, __VA_ARGS__), DO(X))
#define FL_78(OP, DO, X, ...)  OP(FL_77(OP, DO, __VA_ARGS__), DO(X))
#define FL_79(OP, DO, X, ...)  OP(FL_78(OP, DO, __VA_ARGS__), DO(X))
#define FL_80(OP, DO, X, ...)  OP(FL_79(OP, DO, __VA_ARGS__), DO(X))
#define FL_81(OP, DO, X, ...)  OP(FL_80(OP, DO, __VA_ARGS__), DO(X))
#define FL_82(OP, DO, X, ...)  OP(FL_81(OP, DO, __VA_ARGS__), DO(X))
#define FL_83(OP, DO, X, ...)  OP(FL_82(OP, DO, __VA_ARGS__), DO(X))
#define FL_84(OP, DO, X, ...)  OP(FL_83(OP, DO, __VA_ARGS__), DO(X))
#define FL_85(OP, DO, X, ...)  OP(FL_84(OP, DO, __VA_ARGS__), DO(X))
#define FL_86(OP, DO, X, ...)  OP(FL_85(OP, DO, __VA_ARGS__), DO(X))
#define FL_87(OP, DO, X, ...)  OP(FL_86(OP, DO, __VA_ARGS__), DO(X))
#define FL_88(OP, DO, X, ...)  OP(FL_87(OP, DO, __VA_ARGS__), DO(X))
#define FL_89(OP, DO, X, ...)  OP(FL_88(OP, DO, __VA_ARGS__), DO(X))
#define FL_90(OP, DO, X, ...)  OP(FL_89(OP, DO, __VA_ARGS__), DO(X))
#define FL_91(OP, DO, X, ...)  OP(FL_90(OP, DO, __VA_ARGS__), DO(X))
#define FL_92(OP, DO, X, ...)  OP(FL_91(OP, DO, __VA_ARGS__), DO(X))
#define FL_93(OP, DO, X, ...)  OP(FL_92(OP, DO, __VA_ARGS__), DO(X))
#define FL_94(OP, DO, X, ...)  OP(FL_93(OP, DO, __VA_ARGS__), DO(X))
#define FL_95(OP, DO, X, ...)  OP(FL_94(OP, DO, __VA_ARGS__), DO(X))
#define FL_96(OP, DO, X, ...)  OP(FL_95(OP, DO, __VA_ARGS__), DO(X))
#define FL_97(OP, DO, X, ...)  OP(FL_96(OP, DO, __VA_ARGS__), DO(X))
#define FL_98(OP, DO, X, ...)  OP(FL_97(OP, DO, __VA_ARGS__), DO(X))
#define FL_99(OP, DO, X, ...)  OP(FL_98(OP, DO, __VA_ARGS__), DO(X))
#define FL_100(OP, DO, X, ...) OP(FL_99(OP, DO, __VA_ARGS__), DO(X))

#define FOLD_LEFT(OP,NAME,...) \
	APPLY( SUFFIX_N(FL_,__VA_ARGS__), OP, NAME, REVERSE(__VA_ARGS__))

#define FOLDL(OP,...) \
	FOLD_LEFT( OP, IDENTITY, __VA_ARGS__)
#endif//aw_meta_pp_foldl_h
