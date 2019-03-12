/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/ISEproject/P4CPU3/dm.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {16, 0};
static int ng4[] = {15, 0};
static int ng5[] = {31, 0};
static int ng6[] = {1024, 0};
static const char *ng7 = "@%h:*%h<=%h";



static void Cont_38_0(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2728);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1848U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 2);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 1023U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1023U);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 10, 2);
    t22 = (t0 + 4896);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t5, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 4784);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_40_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t11[8];
    char t38[8];
    char t42[8];
    char t49[8];
    char t59[8];
    char t68[8];
    char t73[8];
    char t80[8];
    char t90[8];
    char t99[8];
    char t103[8];
    char t110[8];
    char t120[8];
    char t129[8];
    char t134[8];
    char t141[8];
    char t151[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t100;
    char *t101;
    char *t102;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1848U);
    t5 = *((char **)t2);
    t2 = (t0 + 1808U);
    t7 = (t2 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t5, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t12 = (t6 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB7;

LAB4:    if (t23 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t11) = 1;

LAB7:    memset(t4, 0, 8);
    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t27) != 0)
        goto LAB10;

LAB11:    t34 = (t4 + 4);
    t35 = *((unsigned int *)t4);
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB12;

LAB13:    t95 = *((unsigned int *)t4);
    t96 = (~(t95));
    t97 = *((unsigned int *)t34);
    t98 = (t96 || t97);
    if (t98 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t34) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t99, 8);

LAB20:    t156 = (t0 + 4960);
    t157 = (t156 + 56U);
    t158 = *((char **)t157);
    t159 = (t158 + 56U);
    t160 = *((char **)t159);
    memcpy(t160, t3, 8);
    xsi_driver_vfirst_trans(t156, 0, 31);
    t161 = (t0 + 4800);
    *((int *)t161) = 1;

LAB1:    return;
LAB6:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t33 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB11;

LAB12:    t39 = (t0 + 2728);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t43 = (t0 + 2728);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = (t0 + 2728);
    t47 = (t46 + 64U);
    t48 = *((char **)t47);
    t50 = (t0 + 1848U);
    t51 = *((char **)t50);
    memset(t49, 0, 8);
    t50 = (t49 + 4);
    t52 = (t51 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (t53 >> 2);
    *((unsigned int *)t49) = t54;
    t55 = *((unsigned int *)t52);
    t56 = (t55 >> 2);
    *((unsigned int *)t50) = t56;
    t57 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t57 & 1023U);
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 1023U);
    xsi_vlog_generic_get_array_select_value(t42, 32, t41, t45, t48, 2, 1, t49, 10, 2);
    memset(t59, 0, 8);
    t60 = (t59 + 4);
    t61 = (t42 + 4);
    t62 = *((unsigned int *)t42);
    t63 = (t62 >> 0);
    *((unsigned int *)t59) = t63;
    t64 = *((unsigned int *)t61);
    t65 = (t64 >> 0);
    *((unsigned int *)t60) = t65;
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t66 & 65535U);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t67 & 65535U);
    t69 = ((char*)((ng3)));
    t70 = (t0 + 2728);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t74 = (t0 + 2728);
    t75 = (t74 + 72U);
    t76 = *((char **)t75);
    t77 = (t0 + 2728);
    t78 = (t77 + 64U);
    t79 = *((char **)t78);
    t81 = (t0 + 1848U);
    t82 = *((char **)t81);
    memset(t80, 0, 8);
    t81 = (t80 + 4);
    t83 = (t82 + 4);
    t84 = *((unsigned int *)t82);
    t85 = (t84 >> 2);
    *((unsigned int *)t80) = t85;
    t86 = *((unsigned int *)t83);
    t87 = (t86 >> 2);
    *((unsigned int *)t81) = t87;
    t88 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t88 & 1023U);
    t89 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t89 & 1023U);
    xsi_vlog_generic_get_array_select_value(t73, 32, t72, t76, t79, 2, 1, t80, 10, 2);
    t91 = (t0 + 2728);
    t92 = (t91 + 72U);
    t93 = *((char **)t92);
    t94 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t90, 1, t73, t93, 2, t94, 32, 1);
    xsi_vlog_mul_concat(t68, 16, 1, t69, 1U, t90, 1);
    xsi_vlogtype_concat(t38, 32, 32, 2U, t68, 16, t59, 16);
    goto LAB13;

LAB14:    t100 = (t0 + 2728);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    t104 = (t0 + 2728);
    t105 = (t104 + 72U);
    t106 = *((char **)t105);
    t107 = (t0 + 2728);
    t108 = (t107 + 64U);
    t109 = *((char **)t108);
    t111 = (t0 + 1848U);
    t112 = *((char **)t111);
    memset(t110, 0, 8);
    t111 = (t110 + 4);
    t113 = (t112 + 4);
    t114 = *((unsigned int *)t112);
    t115 = (t114 >> 2);
    *((unsigned int *)t110) = t115;
    t116 = *((unsigned int *)t113);
    t117 = (t116 >> 2);
    *((unsigned int *)t111) = t117;
    t118 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t118 & 1023U);
    t119 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t119 & 1023U);
    xsi_vlog_generic_get_array_select_value(t103, 32, t102, t106, t109, 2, 1, t110, 10, 2);
    memset(t120, 0, 8);
    t121 = (t120 + 4);
    t122 = (t103 + 4);
    t123 = *((unsigned int *)t103);
    t124 = (t123 >> 16);
    *((unsigned int *)t120) = t124;
    t125 = *((unsigned int *)t122);
    t126 = (t125 >> 16);
    *((unsigned int *)t121) = t126;
    t127 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t127 & 65535U);
    t128 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t128 & 65535U);
    t130 = ((char*)((ng3)));
    t131 = (t0 + 2728);
    t132 = (t131 + 56U);
    t133 = *((char **)t132);
    t135 = (t0 + 2728);
    t136 = (t135 + 72U);
    t137 = *((char **)t136);
    t138 = (t0 + 2728);
    t139 = (t138 + 64U);
    t140 = *((char **)t139);
    t142 = (t0 + 1848U);
    t143 = *((char **)t142);
    memset(t141, 0, 8);
    t142 = (t141 + 4);
    t144 = (t143 + 4);
    t145 = *((unsigned int *)t143);
    t146 = (t145 >> 2);
    *((unsigned int *)t141) = t146;
    t147 = *((unsigned int *)t144);
    t148 = (t147 >> 2);
    *((unsigned int *)t142) = t148;
    t149 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t149 & 1023U);
    t150 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t150 & 1023U);
    xsi_vlog_generic_get_array_select_value(t134, 32, t133, t137, t140, 2, 1, t141, 10, 2);
    t152 = (t0 + 2728);
    t153 = (t152 + 72U);
    t154 = *((char **)t153);
    t155 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t151, 1, t134, t154, 2, t155, 32, 1);
    xsi_vlog_mul_concat(t129, 16, 1, t130, 1U, t151, 1);
    xsi_vlogtype_concat(t99, 32, 32, 2U, t129, 16, t120, 16);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t38, 32, t99, 32);
    goto LAB20;

LAB18:    memcpy(t3, t38, 8);
    goto LAB20;

}

static void Always_44_2(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4816);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(50, ng0);

LAB16:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(45, ng0);

LAB9:    xsi_set_current_line(46, ng0);
    xsi_set_current_line(46, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(46, ng0);

LAB13:    xsi_set_current_line(47, ng0);
    t12 = ((char*)((ng2)));
    t14 = (t0 + 2728);
    t17 = (t0 + 2728);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2728);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3048);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB15;

LAB17:    xsi_set_current_line(51, ng0);

LAB20:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t0 + 2728);
    t11 = (t0 + 2728);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 2728);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 1848U);
    t21 = *((char **)t20);
    memset(t16, 0, 8);
    t20 = (t16 + 4);
    t22 = (t21 + 4);
    t27 = *((unsigned int *)t21);
    t30 = (t27 >> 2);
    *((unsigned int *)t16) = t30;
    t33 = *((unsigned int *)t22);
    t34 = (t33 >> 2);
    *((unsigned int *)t20) = t34;
    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & 1023U);
    t38 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t38 & 1023U);
    xsi_vlog_generic_convert_array_indices(t13, t15, t14, t19, 2, 1, t16, 10, 2);
    t23 = (t13 + 4);
    t39 = *((unsigned int *)t23);
    t28 = (!(t39));
    t24 = (t15 + 4);
    t40 = *((unsigned int *)t24);
    t31 = (!(t40));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    t2 = (t0 + 2008U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng7, 4, t0, (char)118, t3, 32, (char)118, t4, 32, (char)118, t5, 32);
    goto LAB19;

LAB21:    t41 = *((unsigned int *)t13);
    t42 = *((unsigned int *)t15);
    t35 = (t41 - t42);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t15), t36, 0LL);
    goto LAB22;

}


extern void work_m_00000000000133869125_0010801604_init()
{
	static char *pe[] = {(void *)Cont_38_0,(void *)Cont_40_1,(void *)Always_44_2};
	xsi_register_didat("work_m_00000000000133869125_0010801604", "isim/test3_isim_beh.exe.sim/work/m_00000000000133869125_0010801604.didat");
	xsi_register_executes(pe);
}
