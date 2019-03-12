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
static const char *ng0 = "E:/ISEproject/P6CPU2/npc.v";
static int ng1[] = {4, 0};
static int ng2[] = {3, 0};
static int ng3[] = {2, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {14, 0};



static void Cont_29_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 3672);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 3576);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_30_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t39[8];
    char t40[8];
    char t42[8];
    char t69[8];
    char t71[8];
    char t81[8];
    char t95[8];
    char t96[8];
    char t99[8];
    char t128[8];
    char t129[8];
    char t139[8];
    char t143[8];
    char t151[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t70;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t97;
    char *t98;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    char *t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t140;
    char *t141;
    char *t142;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t39, 8);

LAB20:    t156 = (t0 + 3736);
    t158 = (t156 + 56U);
    t159 = *((char **)t158);
    t160 = (t159 + 56U);
    t161 = *((char **)t160);
    memcpy(t161, t3, 8);
    xsi_driver_vfirst_trans(t156, 0, 31);
    t162 = (t0 + 3592);
    *((int *)t162) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 1528U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = (t0 + 1048U);
    t41 = *((char **)t33);
    t33 = ((char*)((ng3)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t33 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t33);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB24;

LAB21:    if (t54 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t42) = 1;

LAB24:    memset(t40, 0, 8);
    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t58) != 0)
        goto LAB27;

LAB28:    t65 = (t40 + 4);
    t66 = *((unsigned int *)t40);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB29;

LAB30:    t91 = *((unsigned int *)t40);
    t92 = (~(t91));
    t93 = *((unsigned int *)t65);
    t94 = (t92 || t93);
    if (t94 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t65) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t40) > 0)
        goto LAB35;

LAB36:    memcpy(t39, t95, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t34, 32, t39, 32);
    goto LAB20;

LAB18:    memcpy(t3, t34, 8);
    goto LAB20;

LAB23:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t40) = 1;
    goto LAB28;

LAB27:    t64 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB28;

LAB29:    t70 = ((char*)((ng4)));
    t72 = (t0 + 1208U);
    t73 = *((char **)t72);
    memset(t71, 0, 8);
    t72 = (t71 + 4);
    t74 = (t73 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (t75 >> 0);
    *((unsigned int *)t71) = t76;
    t77 = *((unsigned int *)t74);
    t78 = (t77 >> 0);
    *((unsigned int *)t72) = t78;
    t79 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t79 & 67108863U);
    t80 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t80 & 67108863U);
    t82 = (t0 + 1848U);
    t83 = *((char **)t82);
    memset(t81, 0, 8);
    t82 = (t81 + 4);
    t84 = (t83 + 4);
    t85 = *((unsigned int *)t83);
    t86 = (t85 >> 28);
    *((unsigned int *)t81) = t86;
    t87 = *((unsigned int *)t84);
    t88 = (t87 >> 28);
    *((unsigned int *)t82) = t88;
    t89 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t89 & 15U);
    t90 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t90 & 15U);
    xsi_vlogtype_concat(t69, 32, 32, 3U, t81, 4, t71, 26, t70, 2);
    goto LAB30;

LAB31:    t97 = (t0 + 1048U);
    t98 = *((char **)t97);
    t97 = ((char*)((ng5)));
    memset(t99, 0, 8);
    t100 = (t98 + 4);
    t101 = (t97 + 4);
    t102 = *((unsigned int *)t98);
    t103 = *((unsigned int *)t97);
    t104 = (t102 ^ t103);
    t105 = *((unsigned int *)t100);
    t106 = *((unsigned int *)t101);
    t107 = (t105 ^ t106);
    t108 = (t104 | t107);
    t109 = *((unsigned int *)t100);
    t110 = *((unsigned int *)t101);
    t111 = (t109 | t110);
    t112 = (~(t111));
    t113 = (t108 & t112);
    if (t113 != 0)
        goto LAB41;

LAB38:    if (t111 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t99) = 1;

LAB41:    memset(t96, 0, 8);
    t115 = (t99 + 4);
    t116 = *((unsigned int *)t115);
    t117 = (~(t116));
    t118 = *((unsigned int *)t99);
    t119 = (t118 & t117);
    t120 = (t119 & 1U);
    if (t120 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t115) != 0)
        goto LAB44;

LAB45:    t122 = (t96 + 4);
    t123 = *((unsigned int *)t96);
    t124 = *((unsigned int *)t122);
    t125 = (t123 || t124);
    if (t125 > 0)
        goto LAB46;

LAB47:    t152 = *((unsigned int *)t96);
    t153 = (~(t152));
    t154 = *((unsigned int *)t122);
    t155 = (t153 || t154);
    if (t155 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t122) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t96) > 0)
        goto LAB52;

LAB53:    memcpy(t95, t157, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t39, 32, t69, 32, t95, 32);
    goto LAB37;

LAB35:    memcpy(t39, t69, 8);
    goto LAB37;

LAB40:    t114 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t114) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t96) = 1;
    goto LAB45;

LAB44:    t121 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB45;

LAB46:    t126 = (t0 + 1368U);
    t127 = *((char **)t126);
    t126 = ((char*)((ng4)));
    t130 = (t0 + 1208U);
    t131 = *((char **)t130);
    memset(t129, 0, 8);
    t130 = (t129 + 4);
    t132 = (t131 + 4);
    t133 = *((unsigned int *)t131);
    t134 = (t133 >> 0);
    *((unsigned int *)t129) = t134;
    t135 = *((unsigned int *)t132);
    t136 = (t135 >> 0);
    *((unsigned int *)t130) = t136;
    t137 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t137 & 65535U);
    t138 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t138 & 65535U);
    t140 = ((char*)((ng6)));
    t141 = (t0 + 1208U);
    t142 = *((char **)t141);
    memset(t143, 0, 8);
    t141 = (t143 + 4);
    t144 = (t142 + 4);
    t145 = *((unsigned int *)t142);
    t146 = (t145 >> 15);
    t147 = (t146 & 1);
    *((unsigned int *)t143) = t147;
    t148 = *((unsigned int *)t144);
    t149 = (t148 >> 15);
    t150 = (t149 & 1);
    *((unsigned int *)t141) = t150;
    xsi_vlog_mul_concat(t139, 14, 1, t140, 1U, t143, 1);
    xsi_vlogtype_concat(t128, 32, 32, 3U, t139, 14, t129, 16, t126, 2);
    memset(t151, 0, 8);
    xsi_vlog_unsigned_add(t151, 32, t127, 32, t128, 32);
    goto LAB47;

LAB48:    t156 = (t0 + 1368U);
    t157 = *((char **)t156);
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t95, 32, t151, 32, t157, 32);
    goto LAB54;

LAB52:    memcpy(t95, t151, 8);
    goto LAB54;

}


extern void work_m_00000000000042338064_3146453351_init()
{
	static char *pe[] = {(void *)Cont_29_0,(void *)Cont_30_1};
	xsi_register_didat("work_m_00000000000042338064_3146453351", "isim/test1_isim_beh.exe.sim/work/m_00000000000042338064_3146453351.didat");
	xsi_register_executes(pe);
}
