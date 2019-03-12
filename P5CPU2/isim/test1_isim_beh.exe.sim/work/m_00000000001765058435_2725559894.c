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
static const char *ng0 = "E:/ISEproject/P5CPU2/alu.v";
static unsigned int ng1[] = {15U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {33U, 0U};
static unsigned int ng6[] = {35U, 0U};
static unsigned int ng7[] = {43U, 0U};
static unsigned int ng8[] = {13U, 0U};
static int ng9[] = {2, 0};
static int ng10[] = {3, 0};
static int ng11[] = {4, 0};



static void Cont_32_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
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
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1368U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 26);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t4, 0, 8);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t31) != 0)
        goto LAB10;

LAB11:    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB12;

LAB13:    t43 = *((unsigned int *)t4);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t38) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t47, 8);

LAB20:    t48 = (t0 + 4040);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t52, 0, 8);
    t53 = 1U;
    t54 = t53;
    t55 = (t3 + 4);
    t56 = *((unsigned int *)t3);
    t53 = (t53 & t56);
    t57 = *((unsigned int *)t55);
    t54 = (t54 & t57);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t59 | t53);
    t60 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t60 | t54);
    xsi_driver_vfirst_trans(t48, 2, 2);
    t61 = (t0 + 3912);
    *((int *)t61) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t37 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB11;

LAB12:    t42 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t47 = ((char*)((ng3)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t42, 32, t47, 32);
    goto LAB20;

LAB18:    memcpy(t3, t42, 8);
    goto LAB20;

}

static void Cont_35_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t31[8];
    char t43[8];
    char t54[8];
    char t70[8];
    char t78[8];
    char t126[8];
    char t127[8];
    char t128[8];
    char t139[8];
    char t155[8];
    char t167[8];
    char t178[8];
    char t194[8];
    char t202[8];
    char t250[8];
    char t251[8];
    char t252[8];
    char t263[8];
    char t295[8];
    char t296[8];
    char t297[8];
    char t308[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
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
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t168;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    char *t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    char *t206;
    char *t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t216;
    char *t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    int t226;
    int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    char *t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    char *t240;
    char *t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    char *t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    char *t253;
    char *t254;
    char *t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    char *t262;
    char *t264;
    char *t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    char *t278;
    char *t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    char *t285;
    char *t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    char *t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    char *t298;
    char *t299;
    char *t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    char *t307;
    char *t309;
    char *t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    char *t323;
    char *t324;
    unsigned int t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    char *t330;
    char *t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    char *t335;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    unsigned int t339;
    char *t340;
    char *t341;
    char *t342;
    char *t343;
    char *t344;
    char *t345;
    unsigned int t346;
    unsigned int t347;
    char *t348;
    unsigned int t349;
    unsigned int t350;
    char *t351;
    unsigned int t352;
    unsigned int t353;
    char *t354;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1368U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 26);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t14 = ((char*)((ng4)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t31, 0, 8);
    t32 = (t15 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t32) != 0)
        goto LAB10;

LAB11:    t39 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t39);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB12;

LAB13:    memcpy(t78, t31, 8);

LAB14:    memset(t4, 0, 8);
    t110 = (t78 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t78);
    t114 = (t113 & t112);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t110) != 0)
        goto LAB28;

LAB29:    t117 = (t4 + 4);
    t118 = *((unsigned int *)t4);
    t119 = *((unsigned int *)t117);
    t120 = (t118 || t119);
    if (t120 > 0)
        goto LAB30;

LAB31:    t122 = *((unsigned int *)t4);
    t123 = (~(t122));
    t124 = *((unsigned int *)t117);
    t125 = (t123 || t124);
    if (t125 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t117) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t4) > 0)
        goto LAB36;

LAB37:    memcpy(t3, t126, 8);

LAB38:    t341 = (t0 + 4104);
    t342 = (t341 + 56U);
    t343 = *((char **)t342);
    t344 = (t343 + 56U);
    t345 = *((char **)t344);
    memset(t345, 0, 8);
    t346 = 1U;
    t347 = t346;
    t348 = (t3 + 4);
    t349 = *((unsigned int *)t3);
    t346 = (t346 & t349);
    t350 = *((unsigned int *)t348);
    t347 = (t347 & t350);
    t351 = (t345 + 4);
    t352 = *((unsigned int *)t345);
    *((unsigned int *)t345) = (t352 | t346);
    t353 = *((unsigned int *)t351);
    *((unsigned int *)t351) = (t353 | t347);
    xsi_driver_vfirst_trans(t341, 1, 1);
    t354 = (t0 + 3928);
    *((int *)t354) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB10:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB11;

LAB12:    t44 = (t0 + 1368U);
    t45 = *((char **)t44);
    memset(t43, 0, 8);
    t44 = (t43 + 4);
    t46 = (t45 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (t47 >> 0);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 0);
    *((unsigned int *)t44) = t50;
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 63U);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 63U);
    t53 = ((char*)((ng5)));
    memset(t54, 0, 8);
    t55 = (t43 + 4);
    t56 = (t53 + 4);
    t57 = *((unsigned int *)t43);
    t58 = *((unsigned int *)t53);
    t59 = (t57 ^ t58);
    t60 = *((unsigned int *)t55);
    t61 = *((unsigned int *)t56);
    t62 = (t60 ^ t61);
    t63 = (t59 | t62);
    t64 = *((unsigned int *)t55);
    t65 = *((unsigned int *)t56);
    t66 = (t64 | t65);
    t67 = (~(t66));
    t68 = (t63 & t67);
    if (t68 != 0)
        goto LAB18;

LAB15:    if (t66 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t54) = 1;

LAB18:    memset(t70, 0, 8);
    t71 = (t54 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t54);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t71) != 0)
        goto LAB21;

LAB22:    t79 = *((unsigned int *)t31);
    t80 = *((unsigned int *)t70);
    t81 = (t79 & t80);
    *((unsigned int *)t78) = t81;
    t82 = (t31 + 4);
    t83 = (t70 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t69 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t70) = 1;
    goto LAB22;

LAB21:    t77 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB22;

LAB23:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t31 + 4);
    t93 = (t70 + 4);
    t94 = *((unsigned int *)t31);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t98 = *((unsigned int *)t70);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (~(t100));
    t102 = (t95 & t97);
    t103 = (t99 & t101);
    t104 = (~(t102));
    t105 = (~(t103));
    t106 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t106 & t104);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t107 & t105);
    t108 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t108 & t104);
    t109 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t109 & t105);
    goto LAB25;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB28:    t116 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t116) = 1;
    goto LAB29;

LAB30:    t121 = ((char*)((ng2)));
    goto LAB31;

LAB32:    t129 = (t0 + 1368U);
    t130 = *((char **)t129);
    memset(t128, 0, 8);
    t129 = (t128 + 4);
    t131 = (t130 + 4);
    t132 = *((unsigned int *)t130);
    t133 = (t132 >> 26);
    *((unsigned int *)t128) = t133;
    t134 = *((unsigned int *)t131);
    t135 = (t134 >> 26);
    *((unsigned int *)t129) = t135;
    t136 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t136 & 63U);
    t137 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t137 & 63U);
    t138 = ((char*)((ng4)));
    memset(t139, 0, 8);
    t140 = (t128 + 4);
    t141 = (t138 + 4);
    t142 = *((unsigned int *)t128);
    t143 = *((unsigned int *)t138);
    t144 = (t142 ^ t143);
    t145 = *((unsigned int *)t140);
    t146 = *((unsigned int *)t141);
    t147 = (t145 ^ t146);
    t148 = (t144 | t147);
    t149 = *((unsigned int *)t140);
    t150 = *((unsigned int *)t141);
    t151 = (t149 | t150);
    t152 = (~(t151));
    t153 = (t148 & t152);
    if (t153 != 0)
        goto LAB42;

LAB39:    if (t151 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t139) = 1;

LAB42:    memset(t155, 0, 8);
    t156 = (t139 + 4);
    t157 = *((unsigned int *)t156);
    t158 = (~(t157));
    t159 = *((unsigned int *)t139);
    t160 = (t159 & t158);
    t161 = (t160 & 1U);
    if (t161 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t156) != 0)
        goto LAB45;

LAB46:    t163 = (t155 + 4);
    t164 = *((unsigned int *)t155);
    t165 = *((unsigned int *)t163);
    t166 = (t164 || t165);
    if (t166 > 0)
        goto LAB47;

LAB48:    memcpy(t202, t155, 8);

LAB49:    memset(t127, 0, 8);
    t234 = (t202 + 4);
    t235 = *((unsigned int *)t234);
    t236 = (~(t235));
    t237 = *((unsigned int *)t202);
    t238 = (t237 & t236);
    t239 = (t238 & 1U);
    if (t239 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t234) != 0)
        goto LAB63;

LAB64:    t241 = (t127 + 4);
    t242 = *((unsigned int *)t127);
    t243 = *((unsigned int *)t241);
    t244 = (t242 || t243);
    if (t244 > 0)
        goto LAB65;

LAB66:    t246 = *((unsigned int *)t127);
    t247 = (~(t246));
    t248 = *((unsigned int *)t241);
    t249 = (t247 || t248);
    if (t249 > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t241) > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t127) > 0)
        goto LAB71;

LAB72:    memcpy(t126, t250, 8);

LAB73:    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t3, 32, t121, 32, t126, 32);
    goto LAB38;

LAB36:    memcpy(t3, t121, 8);
    goto LAB38;

LAB41:    t154 = (t139 + 4);
    *((unsigned int *)t139) = 1;
    *((unsigned int *)t154) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t155) = 1;
    goto LAB46;

LAB45:    t162 = (t155 + 4);
    *((unsigned int *)t155) = 1;
    *((unsigned int *)t162) = 1;
    goto LAB46;

LAB47:    t168 = (t0 + 1368U);
    t169 = *((char **)t168);
    memset(t167, 0, 8);
    t168 = (t167 + 4);
    t170 = (t169 + 4);
    t171 = *((unsigned int *)t169);
    t172 = (t171 >> 0);
    *((unsigned int *)t167) = t172;
    t173 = *((unsigned int *)t170);
    t174 = (t173 >> 0);
    *((unsigned int *)t168) = t174;
    t175 = *((unsigned int *)t167);
    *((unsigned int *)t167) = (t175 & 63U);
    t176 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t176 & 63U);
    t177 = ((char*)((ng6)));
    memset(t178, 0, 8);
    t179 = (t167 + 4);
    t180 = (t177 + 4);
    t181 = *((unsigned int *)t167);
    t182 = *((unsigned int *)t177);
    t183 = (t181 ^ t182);
    t184 = *((unsigned int *)t179);
    t185 = *((unsigned int *)t180);
    t186 = (t184 ^ t185);
    t187 = (t183 | t186);
    t188 = *((unsigned int *)t179);
    t189 = *((unsigned int *)t180);
    t190 = (t188 | t189);
    t191 = (~(t190));
    t192 = (t187 & t191);
    if (t192 != 0)
        goto LAB53;

LAB50:    if (t190 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t178) = 1;

LAB53:    memset(t194, 0, 8);
    t195 = (t178 + 4);
    t196 = *((unsigned int *)t195);
    t197 = (~(t196));
    t198 = *((unsigned int *)t178);
    t199 = (t198 & t197);
    t200 = (t199 & 1U);
    if (t200 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t195) != 0)
        goto LAB56;

LAB57:    t203 = *((unsigned int *)t155);
    t204 = *((unsigned int *)t194);
    t205 = (t203 & t204);
    *((unsigned int *)t202) = t205;
    t206 = (t155 + 4);
    t207 = (t194 + 4);
    t208 = (t202 + 4);
    t209 = *((unsigned int *)t206);
    t210 = *((unsigned int *)t207);
    t211 = (t209 | t210);
    *((unsigned int *)t208) = t211;
    t212 = *((unsigned int *)t208);
    t213 = (t212 != 0);
    if (t213 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB49;

LAB52:    t193 = (t178 + 4);
    *((unsigned int *)t178) = 1;
    *((unsigned int *)t193) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t194) = 1;
    goto LAB57;

LAB56:    t201 = (t194 + 4);
    *((unsigned int *)t194) = 1;
    *((unsigned int *)t201) = 1;
    goto LAB57;

LAB58:    t214 = *((unsigned int *)t202);
    t215 = *((unsigned int *)t208);
    *((unsigned int *)t202) = (t214 | t215);
    t216 = (t155 + 4);
    t217 = (t194 + 4);
    t218 = *((unsigned int *)t155);
    t219 = (~(t218));
    t220 = *((unsigned int *)t216);
    t221 = (~(t220));
    t222 = *((unsigned int *)t194);
    t223 = (~(t222));
    t224 = *((unsigned int *)t217);
    t225 = (~(t224));
    t226 = (t219 & t221);
    t227 = (t223 & t225);
    t228 = (~(t226));
    t229 = (~(t227));
    t230 = *((unsigned int *)t208);
    *((unsigned int *)t208) = (t230 & t228);
    t231 = *((unsigned int *)t208);
    *((unsigned int *)t208) = (t231 & t229);
    t232 = *((unsigned int *)t202);
    *((unsigned int *)t202) = (t232 & t228);
    t233 = *((unsigned int *)t202);
    *((unsigned int *)t202) = (t233 & t229);
    goto LAB60;

LAB61:    *((unsigned int *)t127) = 1;
    goto LAB64;

LAB63:    t240 = (t127 + 4);
    *((unsigned int *)t127) = 1;
    *((unsigned int *)t240) = 1;
    goto LAB64;

LAB65:    t245 = ((char*)((ng2)));
    goto LAB66;

LAB67:    t253 = (t0 + 1368U);
    t254 = *((char **)t253);
    memset(t252, 0, 8);
    t253 = (t252 + 4);
    t255 = (t254 + 4);
    t256 = *((unsigned int *)t254);
    t257 = (t256 >> 26);
    *((unsigned int *)t252) = t257;
    t258 = *((unsigned int *)t255);
    t259 = (t258 >> 26);
    *((unsigned int *)t253) = t259;
    t260 = *((unsigned int *)t252);
    *((unsigned int *)t252) = (t260 & 63U);
    t261 = *((unsigned int *)t253);
    *((unsigned int *)t253) = (t261 & 63U);
    t262 = ((char*)((ng6)));
    memset(t263, 0, 8);
    t264 = (t252 + 4);
    t265 = (t262 + 4);
    t266 = *((unsigned int *)t252);
    t267 = *((unsigned int *)t262);
    t268 = (t266 ^ t267);
    t269 = *((unsigned int *)t264);
    t270 = *((unsigned int *)t265);
    t271 = (t269 ^ t270);
    t272 = (t268 | t271);
    t273 = *((unsigned int *)t264);
    t274 = *((unsigned int *)t265);
    t275 = (t273 | t274);
    t276 = (~(t275));
    t277 = (t272 & t276);
    if (t277 != 0)
        goto LAB77;

LAB74:    if (t275 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t263) = 1;

LAB77:    memset(t251, 0, 8);
    t279 = (t263 + 4);
    t280 = *((unsigned int *)t279);
    t281 = (~(t280));
    t282 = *((unsigned int *)t263);
    t283 = (t282 & t281);
    t284 = (t283 & 1U);
    if (t284 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t279) != 0)
        goto LAB80;

LAB81:    t286 = (t251 + 4);
    t287 = *((unsigned int *)t251);
    t288 = *((unsigned int *)t286);
    t289 = (t287 || t288);
    if (t289 > 0)
        goto LAB82;

LAB83:    t291 = *((unsigned int *)t251);
    t292 = (~(t291));
    t293 = *((unsigned int *)t286);
    t294 = (t292 || t293);
    if (t294 > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t286) > 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t251) > 0)
        goto LAB88;

LAB89:    memcpy(t250, t295, 8);

LAB90:    goto LAB68;

LAB69:    xsi_vlog_unsigned_bit_combine(t126, 32, t245, 32, t250, 32);
    goto LAB73;

LAB71:    memcpy(t126, t245, 8);
    goto LAB73;

LAB76:    t278 = (t263 + 4);
    *((unsigned int *)t263) = 1;
    *((unsigned int *)t278) = 1;
    goto LAB77;

LAB78:    *((unsigned int *)t251) = 1;
    goto LAB81;

LAB80:    t285 = (t251 + 4);
    *((unsigned int *)t251) = 1;
    *((unsigned int *)t285) = 1;
    goto LAB81;

LAB82:    t290 = ((char*)((ng2)));
    goto LAB83;

LAB84:    t298 = (t0 + 1368U);
    t299 = *((char **)t298);
    memset(t297, 0, 8);
    t298 = (t297 + 4);
    t300 = (t299 + 4);
    t301 = *((unsigned int *)t299);
    t302 = (t301 >> 26);
    *((unsigned int *)t297) = t302;
    t303 = *((unsigned int *)t300);
    t304 = (t303 >> 26);
    *((unsigned int *)t298) = t304;
    t305 = *((unsigned int *)t297);
    *((unsigned int *)t297) = (t305 & 63U);
    t306 = *((unsigned int *)t298);
    *((unsigned int *)t298) = (t306 & 63U);
    t307 = ((char*)((ng7)));
    memset(t308, 0, 8);
    t309 = (t297 + 4);
    t310 = (t307 + 4);
    t311 = *((unsigned int *)t297);
    t312 = *((unsigned int *)t307);
    t313 = (t311 ^ t312);
    t314 = *((unsigned int *)t309);
    t315 = *((unsigned int *)t310);
    t316 = (t314 ^ t315);
    t317 = (t313 | t316);
    t318 = *((unsigned int *)t309);
    t319 = *((unsigned int *)t310);
    t320 = (t318 | t319);
    t321 = (~(t320));
    t322 = (t317 & t321);
    if (t322 != 0)
        goto LAB94;

LAB91:    if (t320 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t308) = 1;

LAB94:    memset(t296, 0, 8);
    t324 = (t308 + 4);
    t325 = *((unsigned int *)t324);
    t326 = (~(t325));
    t327 = *((unsigned int *)t308);
    t328 = (t327 & t326);
    t329 = (t328 & 1U);
    if (t329 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t324) != 0)
        goto LAB97;

LAB98:    t331 = (t296 + 4);
    t332 = *((unsigned int *)t296);
    t333 = *((unsigned int *)t331);
    t334 = (t332 || t333);
    if (t334 > 0)
        goto LAB99;

LAB100:    t336 = *((unsigned int *)t296);
    t337 = (~(t336));
    t338 = *((unsigned int *)t331);
    t339 = (t337 || t338);
    if (t339 > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t331) > 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t296) > 0)
        goto LAB105;

LAB106:    memcpy(t295, t340, 8);

LAB107:    goto LAB85;

LAB86:    xsi_vlog_unsigned_bit_combine(t250, 32, t290, 32, t295, 32);
    goto LAB90;

LAB88:    memcpy(t250, t290, 8);
    goto LAB90;

LAB93:    t323 = (t308 + 4);
    *((unsigned int *)t308) = 1;
    *((unsigned int *)t323) = 1;
    goto LAB94;

LAB95:    *((unsigned int *)t296) = 1;
    goto LAB98;

LAB97:    t330 = (t296 + 4);
    *((unsigned int *)t296) = 1;
    *((unsigned int *)t330) = 1;
    goto LAB98;

LAB99:    t335 = ((char*)((ng2)));
    goto LAB100;

LAB101:    t340 = ((char*)((ng3)));
    goto LAB102;

LAB103:    xsi_vlog_unsigned_bit_combine(t295, 32, t335, 32, t340, 32);
    goto LAB107;

LAB105:    memcpy(t295, t335, 8);
    goto LAB107;

}

static void Cont_41_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char t31[8];
    char t43[8];
    char t54[8];
    char t70[8];
    char t78[8];
    char t126[8];
    char t127[8];
    char t128[8];
    char t139[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
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
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    char *t173;
    char *t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;

LAB0:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1368U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 26);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t14 = ((char*)((ng4)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t31, 0, 8);
    t32 = (t15 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t32) != 0)
        goto LAB10;

LAB11:    t39 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t39);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB12;

LAB13:    memcpy(t78, t31, 8);

LAB14:    memset(t4, 0, 8);
    t110 = (t78 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t78);
    t114 = (t113 & t112);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t110) != 0)
        goto LAB28;

LAB29:    t117 = (t4 + 4);
    t118 = *((unsigned int *)t4);
    t119 = *((unsigned int *)t117);
    t120 = (t118 || t119);
    if (t120 > 0)
        goto LAB30;

LAB31:    t122 = *((unsigned int *)t4);
    t123 = (~(t122));
    t124 = *((unsigned int *)t117);
    t125 = (t123 || t124);
    if (t125 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t117) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t4) > 0)
        goto LAB36;

LAB37:    memcpy(t3, t126, 8);

LAB38:    t172 = (t0 + 4168);
    t173 = (t172 + 56U);
    t174 = *((char **)t173);
    t175 = (t174 + 56U);
    t176 = *((char **)t175);
    memset(t176, 0, 8);
    t177 = 1U;
    t178 = t177;
    t179 = (t3 + 4);
    t180 = *((unsigned int *)t3);
    t177 = (t177 & t180);
    t181 = *((unsigned int *)t179);
    t178 = (t178 & t181);
    t182 = (t176 + 4);
    t183 = *((unsigned int *)t176);
    *((unsigned int *)t176) = (t183 | t177);
    t184 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t184 | t178);
    xsi_driver_vfirst_trans(t172, 0, 0);
    t185 = (t0 + 3944);
    *((int *)t185) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t31) = 1;
    goto LAB11;

LAB10:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB11;

LAB12:    t44 = (t0 + 1368U);
    t45 = *((char **)t44);
    memset(t43, 0, 8);
    t44 = (t43 + 4);
    t46 = (t45 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (t47 >> 0);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 0);
    *((unsigned int *)t44) = t50;
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 63U);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 63U);
    t53 = ((char*)((ng6)));
    memset(t54, 0, 8);
    t55 = (t43 + 4);
    t56 = (t53 + 4);
    t57 = *((unsigned int *)t43);
    t58 = *((unsigned int *)t53);
    t59 = (t57 ^ t58);
    t60 = *((unsigned int *)t55);
    t61 = *((unsigned int *)t56);
    t62 = (t60 ^ t61);
    t63 = (t59 | t62);
    t64 = *((unsigned int *)t55);
    t65 = *((unsigned int *)t56);
    t66 = (t64 | t65);
    t67 = (~(t66));
    t68 = (t63 & t67);
    if (t68 != 0)
        goto LAB18;

LAB15:    if (t66 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t54) = 1;

LAB18:    memset(t70, 0, 8);
    t71 = (t54 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t54);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t71) != 0)
        goto LAB21;

LAB22:    t79 = *((unsigned int *)t31);
    t80 = *((unsigned int *)t70);
    t81 = (t79 & t80);
    *((unsigned int *)t78) = t81;
    t82 = (t31 + 4);
    t83 = (t70 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t69 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t70) = 1;
    goto LAB22;

LAB21:    t77 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB22;

LAB23:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t31 + 4);
    t93 = (t70 + 4);
    t94 = *((unsigned int *)t31);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t98 = *((unsigned int *)t70);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (~(t100));
    t102 = (t95 & t97);
    t103 = (t99 & t101);
    t104 = (~(t102));
    t105 = (~(t103));
    t106 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t106 & t104);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t107 & t105);
    t108 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t108 & t104);
    t109 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t109 & t105);
    goto LAB25;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB28:    t116 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t116) = 1;
    goto LAB29;

LAB30:    t121 = ((char*)((ng2)));
    goto LAB31;

LAB32:    t129 = (t0 + 1368U);
    t130 = *((char **)t129);
    memset(t128, 0, 8);
    t129 = (t128 + 4);
    t131 = (t130 + 4);
    t132 = *((unsigned int *)t130);
    t133 = (t132 >> 26);
    *((unsigned int *)t128) = t133;
    t134 = *((unsigned int *)t131);
    t135 = (t134 >> 26);
    *((unsigned int *)t129) = t135;
    t136 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t136 & 63U);
    t137 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t137 & 63U);
    t138 = ((char*)((ng8)));
    memset(t139, 0, 8);
    t140 = (t128 + 4);
    t141 = (t138 + 4);
    t142 = *((unsigned int *)t128);
    t143 = *((unsigned int *)t138);
    t144 = (t142 ^ t143);
    t145 = *((unsigned int *)t140);
    t146 = *((unsigned int *)t141);
    t147 = (t145 ^ t146);
    t148 = (t144 | t147);
    t149 = *((unsigned int *)t140);
    t150 = *((unsigned int *)t141);
    t151 = (t149 | t150);
    t152 = (~(t151));
    t153 = (t148 & t152);
    if (t153 != 0)
        goto LAB42;

LAB39:    if (t151 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t139) = 1;

LAB42:    memset(t127, 0, 8);
    t155 = (t139 + 4);
    t156 = *((unsigned int *)t155);
    t157 = (~(t156));
    t158 = *((unsigned int *)t139);
    t159 = (t158 & t157);
    t160 = (t159 & 1U);
    if (t160 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t155) != 0)
        goto LAB45;

LAB46:    t162 = (t127 + 4);
    t163 = *((unsigned int *)t127);
    t164 = *((unsigned int *)t162);
    t165 = (t163 || t164);
    if (t165 > 0)
        goto LAB47;

LAB48:    t167 = *((unsigned int *)t127);
    t168 = (~(t167));
    t169 = *((unsigned int *)t162);
    t170 = (t168 || t169);
    if (t170 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t162) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t127) > 0)
        goto LAB53;

LAB54:    memcpy(t126, t171, 8);

LAB55:    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t3, 32, t121, 32, t126, 32);
    goto LAB38;

LAB36:    memcpy(t3, t121, 8);
    goto LAB38;

LAB41:    t154 = (t139 + 4);
    *((unsigned int *)t139) = 1;
    *((unsigned int *)t154) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t127) = 1;
    goto LAB46;

LAB45:    t161 = (t127 + 4);
    *((unsigned int *)t127) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB46;

LAB47:    t166 = ((char*)((ng2)));
    goto LAB48;

LAB49:    t171 = ((char*)((ng3)));
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t126, 32, t166, 32, t171, 32);
    goto LAB55;

LAB53:    memcpy(t126, t166, 8);
    goto LAB55;

}

static void Cont_45_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t36[8];
    char t71[8];
    char t72[8];
    char t75[8];
    char t105[8];
    char t136[8];
    char t137[8];
    char t140[8];
    char t170[8];
    char t175[8];
    char t176[8];
    char t178[8];
    char t208[8];
    char t213[8];
    char t214[8];
    char t216[8];
    char t243[8];
    char t245[8];
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
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t138;
    char *t139;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    char *t169;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t177;
    char *t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    char *t206;
    char *t207;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    char *t215;
    char *t217;
    char *t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    char *t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    char *t238;
    char *t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    char *t244;
    char *t246;
    char *t247;
    char *t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    char *t259;
    char *t260;
    char *t261;
    char *t262;
    char *t263;
    char *t264;
    char *t265;

LAB0:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
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

LAB13:    t67 = *((unsigned int *)t4);
    t68 = (~(t67));
    t69 = *((unsigned int *)t29);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t71, 8);

LAB20:    t260 = (t0 + 4232);
    t261 = (t260 + 56U);
    t262 = *((char **)t261);
    t263 = (t262 + 56U);
    t264 = *((char **)t263);
    memcpy(t264, t3, 8);
    xsi_driver_vfirst_trans(t260, 0, 31);
    t265 = (t0 + 3960);
    *((int *)t265) = 1;

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

LAB12:    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    t33 = (t0 + 1208U);
    t35 = *((char **)t33);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t33 = (t34 + 4);
    t40 = (t35 + 4);
    t41 = (t36 + 4);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB13;

LAB14:    t73 = (t0 + 1688U);
    t74 = *((char **)t73);
    t73 = ((char*)((ng2)));
    memset(t75, 0, 8);
    t76 = (t74 + 4);
    t77 = (t73 + 4);
    t78 = *((unsigned int *)t74);
    t79 = *((unsigned int *)t73);
    t80 = (t78 ^ t79);
    t81 = *((unsigned int *)t76);
    t82 = *((unsigned int *)t77);
    t83 = (t81 ^ t82);
    t84 = (t80 | t83);
    t85 = *((unsigned int *)t76);
    t86 = *((unsigned int *)t77);
    t87 = (t85 | t86);
    t88 = (~(t87));
    t89 = (t84 & t88);
    if (t89 != 0)
        goto LAB27;

LAB24:    if (t87 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t75) = 1;

LAB27:    memset(t72, 0, 8);
    t91 = (t75 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t75);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t91) != 0)
        goto LAB30;

LAB31:    t98 = (t72 + 4);
    t99 = *((unsigned int *)t72);
    t100 = *((unsigned int *)t98);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB32;

LAB33:    t132 = *((unsigned int *)t72);
    t133 = (~(t132));
    t134 = *((unsigned int *)t98);
    t135 = (t133 || t134);
    if (t135 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t98) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t72) > 0)
        goto LAB38;

LAB39:    memcpy(t71, t136, 8);

LAB40:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t36, 32, t71, 32);
    goto LAB20;

LAB18:    memcpy(t3, t36, 8);
    goto LAB20;

LAB21:    t47 = *((unsigned int *)t36);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t36) = (t47 | t48);
    t49 = (t34 + 4);
    t50 = (t35 + 4);
    t51 = *((unsigned int *)t34);
    t52 = (~(t51));
    t53 = *((unsigned int *)t49);
    t54 = (~(t53));
    t55 = *((unsigned int *)t35);
    t56 = (~(t55));
    t57 = *((unsigned int *)t50);
    t58 = (~(t57));
    t59 = (t52 & t54);
    t60 = (t56 & t58);
    t61 = (~(t59));
    t62 = (~(t60));
    t63 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t63 & t61);
    t64 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t64 & t62);
    t65 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t65 & t61);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    goto LAB23;

LAB26:    t90 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t72) = 1;
    goto LAB31;

LAB30:    t97 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB31;

LAB32:    t102 = (t0 + 1048U);
    t103 = *((char **)t102);
    t102 = (t0 + 1208U);
    t104 = *((char **)t102);
    t106 = *((unsigned int *)t103);
    t107 = *((unsigned int *)t104);
    t108 = (t106 | t107);
    *((unsigned int *)t105) = t108;
    t102 = (t103 + 4);
    t109 = (t104 + 4);
    t110 = (t105 + 4);
    t111 = *((unsigned int *)t102);
    t112 = *((unsigned int *)t109);
    t113 = (t111 | t112);
    *((unsigned int *)t110) = t113;
    t114 = *((unsigned int *)t110);
    t115 = (t114 != 0);
    if (t115 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB33;

LAB34:    t138 = (t0 + 1688U);
    t139 = *((char **)t138);
    t138 = ((char*)((ng9)));
    memset(t140, 0, 8);
    t141 = (t139 + 4);
    t142 = (t138 + 4);
    t143 = *((unsigned int *)t139);
    t144 = *((unsigned int *)t138);
    t145 = (t143 ^ t144);
    t146 = *((unsigned int *)t141);
    t147 = *((unsigned int *)t142);
    t148 = (t146 ^ t147);
    t149 = (t145 | t148);
    t150 = *((unsigned int *)t141);
    t151 = *((unsigned int *)t142);
    t152 = (t150 | t151);
    t153 = (~(t152));
    t154 = (t149 & t153);
    if (t154 != 0)
        goto LAB47;

LAB44:    if (t152 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t140) = 1;

LAB47:    memset(t137, 0, 8);
    t156 = (t140 + 4);
    t157 = *((unsigned int *)t156);
    t158 = (~(t157));
    t159 = *((unsigned int *)t140);
    t160 = (t159 & t158);
    t161 = (t160 & 1U);
    if (t161 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t156) != 0)
        goto LAB50;

LAB51:    t163 = (t137 + 4);
    t164 = *((unsigned int *)t137);
    t165 = *((unsigned int *)t163);
    t166 = (t164 || t165);
    if (t166 > 0)
        goto LAB52;

LAB53:    t171 = *((unsigned int *)t137);
    t172 = (~(t171));
    t173 = *((unsigned int *)t163);
    t174 = (t172 || t173);
    if (t174 > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t163) > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t137) > 0)
        goto LAB58;

LAB59:    memcpy(t136, t175, 8);

LAB60:    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t71, 32, t105, 32, t136, 32);
    goto LAB40;

LAB38:    memcpy(t71, t105, 8);
    goto LAB40;

LAB41:    t116 = *((unsigned int *)t105);
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t105) = (t116 | t117);
    t118 = (t103 + 4);
    t119 = (t104 + 4);
    t120 = *((unsigned int *)t118);
    t121 = (~(t120));
    t122 = *((unsigned int *)t103);
    t123 = (t122 & t121);
    t124 = *((unsigned int *)t119);
    t125 = (~(t124));
    t126 = *((unsigned int *)t104);
    t127 = (t126 & t125);
    t128 = (~(t123));
    t129 = (~(t127));
    t130 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t130 & t128);
    t131 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t131 & t129);
    goto LAB43;

LAB46:    t155 = (t140 + 4);
    *((unsigned int *)t140) = 1;
    *((unsigned int *)t155) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t137) = 1;
    goto LAB51;

LAB50:    t162 = (t137 + 4);
    *((unsigned int *)t137) = 1;
    *((unsigned int *)t162) = 1;
    goto LAB51;

LAB52:    t167 = (t0 + 1048U);
    t168 = *((char **)t167);
    t167 = (t0 + 1208U);
    t169 = *((char **)t167);
    memset(t170, 0, 8);
    xsi_vlog_unsigned_add(t170, 32, t168, 32, t169, 32);
    goto LAB53;

LAB54:    t167 = (t0 + 1688U);
    t177 = *((char **)t167);
    t167 = ((char*)((ng10)));
    memset(t178, 0, 8);
    t179 = (t177 + 4);
    t180 = (t167 + 4);
    t181 = *((unsigned int *)t177);
    t182 = *((unsigned int *)t167);
    t183 = (t181 ^ t182);
    t184 = *((unsigned int *)t179);
    t185 = *((unsigned int *)t180);
    t186 = (t184 ^ t185);
    t187 = (t183 | t186);
    t188 = *((unsigned int *)t179);
    t189 = *((unsigned int *)t180);
    t190 = (t188 | t189);
    t191 = (~(t190));
    t192 = (t187 & t191);
    if (t192 != 0)
        goto LAB64;

LAB61:    if (t190 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t178) = 1;

LAB64:    memset(t176, 0, 8);
    t194 = (t178 + 4);
    t195 = *((unsigned int *)t194);
    t196 = (~(t195));
    t197 = *((unsigned int *)t178);
    t198 = (t197 & t196);
    t199 = (t198 & 1U);
    if (t199 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t194) != 0)
        goto LAB67;

LAB68:    t201 = (t176 + 4);
    t202 = *((unsigned int *)t176);
    t203 = *((unsigned int *)t201);
    t204 = (t202 || t203);
    if (t204 > 0)
        goto LAB69;

LAB70:    t209 = *((unsigned int *)t176);
    t210 = (~(t209));
    t211 = *((unsigned int *)t201);
    t212 = (t210 || t211);
    if (t212 > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t201) > 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t176) > 0)
        goto LAB75;

LAB76:    memcpy(t175, t213, 8);

LAB77:    goto LAB55;

LAB56:    xsi_vlog_unsigned_bit_combine(t136, 32, t170, 32, t175, 32);
    goto LAB60;

LAB58:    memcpy(t136, t170, 8);
    goto LAB60;

LAB63:    t193 = (t178 + 4);
    *((unsigned int *)t178) = 1;
    *((unsigned int *)t193) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t176) = 1;
    goto LAB68;

LAB67:    t200 = (t176 + 4);
    *((unsigned int *)t176) = 1;
    *((unsigned int *)t200) = 1;
    goto LAB68;

LAB69:    t205 = (t0 + 1048U);
    t206 = *((char **)t205);
    t205 = (t0 + 1208U);
    t207 = *((char **)t205);
    memset(t208, 0, 8);
    xsi_vlog_unsigned_minus(t208, 32, t206, 32, t207, 32);
    goto LAB70;

LAB71:    t205 = (t0 + 1688U);
    t215 = *((char **)t205);
    t205 = ((char*)((ng11)));
    memset(t216, 0, 8);
    t217 = (t215 + 4);
    t218 = (t205 + 4);
    t219 = *((unsigned int *)t215);
    t220 = *((unsigned int *)t205);
    t221 = (t219 ^ t220);
    t222 = *((unsigned int *)t217);
    t223 = *((unsigned int *)t218);
    t224 = (t222 ^ t223);
    t225 = (t221 | t224);
    t226 = *((unsigned int *)t217);
    t227 = *((unsigned int *)t218);
    t228 = (t226 | t227);
    t229 = (~(t228));
    t230 = (t225 & t229);
    if (t230 != 0)
        goto LAB81;

LAB78:    if (t228 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t216) = 1;

LAB81:    memset(t214, 0, 8);
    t232 = (t216 + 4);
    t233 = *((unsigned int *)t232);
    t234 = (~(t233));
    t235 = *((unsigned int *)t216);
    t236 = (t235 & t234);
    t237 = (t236 & 1U);
    if (t237 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t232) != 0)
        goto LAB84;

LAB85:    t239 = (t214 + 4);
    t240 = *((unsigned int *)t214);
    t241 = *((unsigned int *)t239);
    t242 = (t240 || t241);
    if (t242 > 0)
        goto LAB86;

LAB87:    t255 = *((unsigned int *)t214);
    t256 = (~(t255));
    t257 = *((unsigned int *)t239);
    t258 = (t256 || t257);
    if (t258 > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t239) > 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t214) > 0)
        goto LAB92;

LAB93:    memcpy(t213, t259, 8);

LAB94:    goto LAB72;

LAB73:    xsi_vlog_unsigned_bit_combine(t175, 32, t208, 32, t213, 32);
    goto LAB77;

LAB75:    memcpy(t175, t208, 8);
    goto LAB77;

LAB80:    t231 = (t216 + 4);
    *((unsigned int *)t216) = 1;
    *((unsigned int *)t231) = 1;
    goto LAB81;

LAB82:    *((unsigned int *)t214) = 1;
    goto LAB85;

LAB84:    t238 = (t214 + 4);
    *((unsigned int *)t214) = 1;
    *((unsigned int *)t238) = 1;
    goto LAB85;

LAB86:    t244 = ((char*)((ng4)));
    t246 = (t0 + 1208U);
    t247 = *((char **)t246);
    memset(t245, 0, 8);
    t246 = (t245 + 4);
    t248 = (t247 + 4);
    t249 = *((unsigned int *)t247);
    t250 = (t249 >> 0);
    *((unsigned int *)t245) = t250;
    t251 = *((unsigned int *)t248);
    t252 = (t251 >> 0);
    *((unsigned int *)t246) = t252;
    t253 = *((unsigned int *)t245);
    *((unsigned int *)t245) = (t253 & 65535U);
    t254 = *((unsigned int *)t246);
    *((unsigned int *)t246) = (t254 & 65535U);
    xsi_vlogtype_concat(t243, 32, 32, 2U, t245, 16, t244, 16);
    goto LAB87;

LAB88:    t259 = ((char*)((ng3)));
    goto LAB89;

LAB90:    xsi_vlog_unsigned_bit_combine(t213, 32, t243, 32, t259, 32);
    goto LAB94;

LAB92:    memcpy(t213, t243, 8);
    goto LAB94;

}


extern void work_m_00000000001765058435_2725559894_init()
{
	static char *pe[] = {(void *)Cont_32_0,(void *)Cont_35_1,(void *)Cont_41_2,(void *)Cont_45_3};
	xsi_register_didat("work_m_00000000001765058435_2725559894", "isim/test1_isim_beh.exe.sim/work/m_00000000001765058435_2725559894.didat");
	xsi_register_executes(pe);
}
