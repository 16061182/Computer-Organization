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
static const char *ng0 = "E:/ISEproject/P4CPU3/pccal.v";
static int ng1[] = {4, 0};



static void Cont_35_0(char *t0)
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

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 4472);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 4376);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_36_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t22[8];
    char t23[8];
    char t37[8];
    char t42[8];
    char t43[8];
    char t46[8];
    char t59[8];
    char t66[8];
    char t98[8];
    char t113[8];
    char t126[8];
    char t133[8];
    char t165[8];
    char t173[8];
    char t214[8];
    char t217[8];
    char t218[8];
    char t225[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    int t157;
    int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t212;
    char *t213;
    char *t215;
    char *t216;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    char *t223;
    char *t224;
    char *t226;
    char *t227;
    char *t228;
    char *t229;
    char *t230;
    char *t231;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2168U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t226 = (t0 + 4536);
    t227 = (t226 + 56U);
    t228 = *((char **)t227);
    t229 = (t228 + 56U);
    t230 = *((char **)t229);
    memcpy(t230, t3, 8);
    xsi_driver_vfirst_trans(t226, 0, 31);
    t231 = (t0 + 4392);
    *((int *)t231) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 1368U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 2008U);
    t24 = *((char **)t16);
    memset(t23, 0, 8);
    t16 = (t24 + 4);
    t25 = *((unsigned int *)t16);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t16) != 0)
        goto LAB19;

LAB20:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB21;

LAB22:    t38 = *((unsigned int *)t23);
    t39 = (~(t38));
    t40 = *((unsigned int *)t31);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t31) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t23) > 0)
        goto LAB27;

LAB28:    memcpy(t22, t42, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t17, 32, t22, 32);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t23) = 1;
    goto LAB20;

LAB19:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB20;

LAB21:    t35 = (t0 + 1208U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng1)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_multiply(t37, 32, t36, 32, t35, 32);
    goto LAB22;

LAB23:    t44 = (t0 + 1848U);
    t45 = *((char **)t44);
    memset(t46, 0, 8);
    t44 = (t45 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (~(t47));
    t49 = *((unsigned int *)t45);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t44) != 0)
        goto LAB32;

LAB33:    t53 = (t46 + 4);
    t54 = *((unsigned int *)t46);
    t55 = *((unsigned int *)t53);
    t56 = (t54 || t55);
    if (t56 > 0)
        goto LAB34;

LAB35:    memcpy(t66, t46, 8);

LAB36:    memset(t98, 0, 8);
    t99 = (t66 + 4);
    t100 = *((unsigned int *)t99);
    t101 = (~(t100));
    t102 = *((unsigned int *)t66);
    t103 = (t102 & t101);
    t104 = (t103 & 1U);
    if (t104 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t99) != 0)
        goto LAB46;

LAB47:    t106 = (t98 + 4);
    t107 = *((unsigned int *)t98);
    t108 = (!(t107));
    t109 = *((unsigned int *)t106);
    t110 = (t108 || t109);
    if (t110 > 0)
        goto LAB48;

LAB49:    memcpy(t173, t98, 8);

LAB50:    memset(t43, 0, 8);
    t201 = (t173 + 4);
    t202 = *((unsigned int *)t201);
    t203 = (~(t202));
    t204 = *((unsigned int *)t173);
    t205 = (t204 & t203);
    t206 = (t205 & 1U);
    if (t206 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t201) != 0)
        goto LAB74;

LAB75:    t208 = (t43 + 4);
    t209 = *((unsigned int *)t43);
    t210 = *((unsigned int *)t208);
    t211 = (t209 || t210);
    if (t211 > 0)
        goto LAB76;

LAB77:    t219 = *((unsigned int *)t43);
    t220 = (~(t219));
    t221 = *((unsigned int *)t208);
    t222 = (t220 || t221);
    if (t222 > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t208) > 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t43) > 0)
        goto LAB82;

LAB83:    memcpy(t42, t225, 8);

LAB84:    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t22, 32, t37, 32, t42, 32);
    goto LAB29;

LAB27:    memcpy(t22, t37, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t46) = 1;
    goto LAB33;

LAB32:    t52 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB33;

LAB34:    t57 = (t0 + 1528U);
    t58 = *((char **)t57);
    memset(t59, 0, 8);
    t57 = (t58 + 4);
    t60 = *((unsigned int *)t57);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t57) != 0)
        goto LAB39;

LAB40:    t67 = *((unsigned int *)t46);
    t68 = *((unsigned int *)t59);
    t69 = (t67 & t68);
    *((unsigned int *)t66) = t69;
    t70 = (t46 + 4);
    t71 = (t59 + 4);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t70);
    t74 = *((unsigned int *)t71);
    t75 = (t73 | t74);
    *((unsigned int *)t72) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB36;

LAB37:    *((unsigned int *)t59) = 1;
    goto LAB40;

LAB39:    t65 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB40;

LAB41:    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t66) = (t78 | t79);
    t80 = (t46 + 4);
    t81 = (t59 + 4);
    t82 = *((unsigned int *)t46);
    t83 = (~(t82));
    t84 = *((unsigned int *)t80);
    t85 = (~(t84));
    t86 = *((unsigned int *)t59);
    t87 = (~(t86));
    t88 = *((unsigned int *)t81);
    t89 = (~(t88));
    t90 = (t83 & t85);
    t91 = (t87 & t89);
    t92 = (~(t90));
    t93 = (~(t91));
    t94 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t94 & t92);
    t95 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t95 & t93);
    t96 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t96 & t92);
    t97 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t97 & t93);
    goto LAB43;

LAB44:    *((unsigned int *)t98) = 1;
    goto LAB47;

LAB46:    t105 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t105) = 1;
    goto LAB47;

LAB48:    t111 = (t0 + 2328U);
    t112 = *((char **)t111);
    memset(t113, 0, 8);
    t111 = (t112 + 4);
    t114 = *((unsigned int *)t111);
    t115 = (~(t114));
    t116 = *((unsigned int *)t112);
    t117 = (t116 & t115);
    t118 = (t117 & 1U);
    if (t118 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t111) != 0)
        goto LAB53;

LAB54:    t120 = (t113 + 4);
    t121 = *((unsigned int *)t113);
    t122 = *((unsigned int *)t120);
    t123 = (t121 || t122);
    if (t123 > 0)
        goto LAB55;

LAB56:    memcpy(t133, t113, 8);

LAB57:    memset(t165, 0, 8);
    t166 = (t133 + 4);
    t167 = *((unsigned int *)t166);
    t168 = (~(t167));
    t169 = *((unsigned int *)t133);
    t170 = (t169 & t168);
    t171 = (t170 & 1U);
    if (t171 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t166) != 0)
        goto LAB67;

LAB68:    t174 = *((unsigned int *)t98);
    t175 = *((unsigned int *)t165);
    t176 = (t174 | t175);
    *((unsigned int *)t173) = t176;
    t177 = (t98 + 4);
    t178 = (t165 + 4);
    t179 = (t173 + 4);
    t180 = *((unsigned int *)t177);
    t181 = *((unsigned int *)t178);
    t182 = (t180 | t181);
    *((unsigned int *)t179) = t182;
    t183 = *((unsigned int *)t179);
    t184 = (t183 != 0);
    if (t184 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB50;

LAB51:    *((unsigned int *)t113) = 1;
    goto LAB54;

LAB53:    t119 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB54;

LAB55:    t124 = (t0 + 1688U);
    t125 = *((char **)t124);
    memset(t126, 0, 8);
    t124 = (t125 + 4);
    t127 = *((unsigned int *)t124);
    t128 = (~(t127));
    t129 = *((unsigned int *)t125);
    t130 = (t129 & t128);
    t131 = (t130 & 1U);
    if (t131 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t124) != 0)
        goto LAB60;

LAB61:    t134 = *((unsigned int *)t113);
    t135 = *((unsigned int *)t126);
    t136 = (t134 & t135);
    *((unsigned int *)t133) = t136;
    t137 = (t113 + 4);
    t138 = (t126 + 4);
    t139 = (t133 + 4);
    t140 = *((unsigned int *)t137);
    t141 = *((unsigned int *)t138);
    t142 = (t140 | t141);
    *((unsigned int *)t139) = t142;
    t143 = *((unsigned int *)t139);
    t144 = (t143 != 0);
    if (t144 == 1)
        goto LAB62;

LAB63:
LAB64:    goto LAB57;

LAB58:    *((unsigned int *)t126) = 1;
    goto LAB61;

LAB60:    t132 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t132) = 1;
    goto LAB61;

LAB62:    t145 = *((unsigned int *)t133);
    t146 = *((unsigned int *)t139);
    *((unsigned int *)t133) = (t145 | t146);
    t147 = (t113 + 4);
    t148 = (t126 + 4);
    t149 = *((unsigned int *)t113);
    t150 = (~(t149));
    t151 = *((unsigned int *)t147);
    t152 = (~(t151));
    t153 = *((unsigned int *)t126);
    t154 = (~(t153));
    t155 = *((unsigned int *)t148);
    t156 = (~(t155));
    t157 = (t150 & t152);
    t158 = (t154 & t156);
    t159 = (~(t157));
    t160 = (~(t158));
    t161 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t161 & t159);
    t162 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t162 & t160);
    t163 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t163 & t159);
    t164 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t164 & t160);
    goto LAB64;

LAB65:    *((unsigned int *)t165) = 1;
    goto LAB68;

LAB67:    t172 = (t165 + 4);
    *((unsigned int *)t165) = 1;
    *((unsigned int *)t172) = 1;
    goto LAB68;

LAB69:    t185 = *((unsigned int *)t173);
    t186 = *((unsigned int *)t179);
    *((unsigned int *)t173) = (t185 | t186);
    t187 = (t98 + 4);
    t188 = (t165 + 4);
    t189 = *((unsigned int *)t187);
    t190 = (~(t189));
    t191 = *((unsigned int *)t98);
    t192 = (t191 & t190);
    t193 = *((unsigned int *)t188);
    t194 = (~(t193));
    t195 = *((unsigned int *)t165);
    t196 = (t195 & t194);
    t197 = (~(t192));
    t198 = (~(t196));
    t199 = *((unsigned int *)t179);
    *((unsigned int *)t179) = (t199 & t197);
    t200 = *((unsigned int *)t179);
    *((unsigned int *)t179) = (t200 & t198);
    goto LAB71;

LAB72:    *((unsigned int *)t43) = 1;
    goto LAB75;

LAB74:    t207 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t207) = 1;
    goto LAB75;

LAB76:    t212 = (t0 + 1048U);
    t213 = *((char **)t212);
    t212 = ((char*)((ng1)));
    memset(t214, 0, 8);
    xsi_vlog_unsigned_add(t214, 32, t213, 32, t212, 32);
    t215 = (t0 + 1208U);
    t216 = *((char **)t215);
    t215 = ((char*)((ng1)));
    memset(t217, 0, 8);
    xsi_vlog_unsigned_multiply(t217, 32, t216, 32, t215, 32);
    memset(t218, 0, 8);
    xsi_vlog_unsigned_add(t218, 32, t214, 32, t217, 32);
    goto LAB77;

LAB78:    t223 = (t0 + 1048U);
    t224 = *((char **)t223);
    t223 = ((char*)((ng1)));
    memset(t225, 0, 8);
    xsi_vlog_unsigned_add(t225, 32, t224, 32, t223, 32);
    goto LAB79;

LAB80:    xsi_vlog_unsigned_bit_combine(t42, 32, t218, 32, t225, 32);
    goto LAB84;

LAB82:    memcpy(t42, t218, 8);
    goto LAB84;

}


extern void work_m_00000000001312283007_1792161214_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Cont_36_1};
	xsi_register_didat("work_m_00000000001312283007_1792161214", "isim/test1_isim_beh.exe.sim/work/m_00000000001312283007_1792161214.didat");
	xsi_register_executes(pe);
}
