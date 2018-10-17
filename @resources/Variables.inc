[Variables]
; Defines the color of the triangle outlines
BorderColor=255,255,255
; Defines the width of the borders around the triangles
BorderSize=2
vOffset=(#BorderSize#/2)

;Width and Height of the Large, Central Triangle
centerTriWidth=542
centerTriHeight=(#centerTriWidth# * Sqrt(3) / 2)

smallTriWidth=(#centerTriWidth#/3)
smallTriHeight=(#centerTriHeight#/3)

;================================================================
;-----------------------  DO NOT EDIT  --------------------------
;================================================================

; s = shell (points/triangles)
; t = triangle
; p = point

;Inner triangle points
s1p1=#smallTriWidth#,(#centerTriHeight# + #smallTriHeight# + #vOffset#)
s1p2=(#smallTriWidth#*1.5),(#smallTriHeight#*3 + #vOffset#)
s1p3=(#smallTriWidth#*2),(#smallTriHeight#*2 + #vOffset#)
s1p4=(#smallTriWidth#*2.5),(#smallTriHeight# + #vOffset#)
s1p5=(#smallTriWidth#*3),(#smallTriHeight#*2 + #vOffset#)
s1p6=(#smallTriWidth#*3.5),(#smallTriHeight#*3 + #vOffset#)
s1p7=(#centerTriWidth# + #smallTriWidth#),(#centerTriHeight# + #smallTriHeight# + #vOffset#)
s1p8=(#smallTriWidth#*3),(#centerTriHeight# + #smallTriHeight# + #vOffset#)
s1p9=(#smallTriWidth#*2),(#centerTriHeight# + #smallTriHeight# + #vOffset#)

;Outer triangle points
s2p1=0,(#smallTriHeight#*4)
s2p2=(#smallTriWidth#*0.5),(#smallTriHeight#*3 + #vOffset#)
s2p3=(#smallTriWidth#*1),(#smallTriHeight#*2 + #vOffset#)
s2p4=(#smallTriWidth#*1.5),(#smallTriHeight# + #vOffset#)
s2p5=(#smallTriWidth#*2),(#vOffset#)
s2p6=(#smallTriWidth#*3),(#vOffset#)
s2p7=(#smallTriWidth#*3.5),(#smallTriHeight# + #vOffset#)
s2p8=(#smallTriWidth#*4),(#smallTriHeight#*2 + #vOffset#)
s2p9=(#smallTriWidth#*4.5),(#smallTriHeight#*3 + #vOffset#)
s2p10=(#smallTriWidth#*5),(#smallTriHeight#*4 + #vOffset#)
s2p11=(#smallTriWidth#*4.5),(#smallTriHeight#*5 + #vOffset#)
s2p12=(#smallTriWidth#*3.5),(#smallTriHeight#*5 + #vOffset#)
s2p13=(#smallTriWidth#*2.5),(#smallTriHeight#*5 + #vOffset#)
s2p14=(#smallTriWidth#*1.5),(#smallTriHeight#*5 + #vOffset#)
s2p15=(#smallTriWidth#*0.5),(#smallTriHeight#*5 + #vOffset#)

;Triangle lines
s1t1p1Line=Line #s1p1#,#s2p2#
s1t1p2Line=Line #s2p2#,#s1p2#
s1t1p3Line=Line #s1p2#,#s1p1#
s1t1Stroke=StrokeWidth #BorderSize#

s1t2p1Line=Line #s2p2#,#s2p3#
s1t2p2Line=Line #s2p3#,#s1p2#
s1t2p3Line=Line #s1p2#,#s2p2#
s1t2Stroke=StrokeWidth #BorderSize#

s1t3p1Line=Line #s1p2#,#s2p3#
s1t3p2Line=Line #s2p3#,#s1p3#
s1t3p3Line=Line #s1p3#,#s1p2#
s1t3Stroke=StrokeWidth #BorderSize#

s1t4p1Line=Line #s2p3#,#s2p4#
s1t4p2Line=Line #s2p4#,#s1p3#
s1t4p3Line=Line #s1p3#,#s2p3#
s1t4Stroke=StrokeWidth #BorderSize#

s1t5p1Line=Line #s1p3#,#s2p4#
s1t5p2Line=Line #s2p4#,#s1p4#
s1t5p3Line=Line #s1p4#,#s1p3#
s1t5Stroke=StrokeWidth #BorderSize#

s1t6p1Line=Line #s2p4#,#s2p5#
s1t6p2Line=Line #s2p5#,#s1p4#
s1t6p3Line=Line #s1p4#,#s2p4#
s1t6Stroke=StrokeWidth #BorderSize#

s1t7p1Line=Line #s1p4#,#s2p5#
s1t7p2Line=Line #s2p5#,#s2p6#
s1t7p3Line=Line #s2p6#,#s1p4#
s1t7Stroke=StrokeWidth #BorderSize#

s1t8p1Line=Line #s1p4#,#s2p6#
s1t8p2Line=Line #s2p6#,#s2p7#
s1t8p3Line=Line #s2p7#,#s1p4#
s1t8Stroke=StrokeWidth #BorderSize#

s1t9p1Line=Line #s1p5#,#s1p4#
s1t9p2Line=Line #s1p4#,#s2p7#
s1t9p3Line=Line #s2p7#,#s1p5#
s1t9Stroke=StrokeWidth #BorderSize#

s1t10p1Line=Line #s1p5#,#s2p7#
s1t10p2Line=Line #s2p7#,#s2p8#
s1t10p3Line=Line #s2p8#,#s1p5#
s1t10Stroke=StrokeWidth #BorderSize#

s1t11p1Line=Line #s1p6#,#s1p5#
s1t11p2Line=Line #s1p5#,#s2p8#
s1t11p3Line=Line #s2p8#,#s1p6#
s1t11Stroke=StrokeWidth #BorderSize#

s1t12p1Line=Line #s1p6#,#s2p8#
s1t12p2Line=Line #s2p8#,#s2p9#
s1t12p3Line=Line #s2p9#,#s1p6#
s1t12Stroke=StrokeWidth #BorderSize#

s1t13p1Line=Line #s1p6#,#s2p9#
s1t13p2Line=Line #s2p9#,#s1p7#
s1t13p3Line=Line #s1p7#,#s1p6#
s1t13Stroke=StrokeWidth #BorderSize#

s1t14p1Line=Line #s1p7#,#s2p9#
s1t14p2Line=Line #s2p9#,#s2p10#
s1t14p3Line=Line #s2p10#,#s1p7#
s1t14Stroke=StrokeWidth #BorderSize#

s1t15p1Line=Line #s2p11#,#s1p7#
s1t15p2Line=Line #s1p7#,#s2p10#
s1t15p3Line=Line #s2p10#,#s2p11#
s1t15Stroke=StrokeWidth #BorderSize#

s1t16p1Line=Line #s2p12#,#s1p7#
s1t16p2Line=Line #s1p7#,#s2p11#
s1t16p3Line=Line #s2p11#,#s2p12#
s1t16Stroke=StrokeWidth #BorderSize#

s1t17p1Line=Line #s2p12#,#s1p8#
s1t17p2Line=Line #s1p8#,#s1p7#
s1t17p3Line=Line #s1p7#,#s2p12#
s1t17Stroke=StrokeWidth #BorderSize#

s1t18p1Line=Line #s2p13#,#s1p8#
s1t18p2Line=Line #s1p8#,#s2p12#
s1t18p3Line=Line #s2p12#,#s2p13#
s1t18Stroke=StrokeWidth #BorderSize#

s1t19p1Line=Line #s2p13#,#s1p9#
s1t19p2Line=Line #s1p9#,#s1p8#
s1t19p3Line=Line #s1p8#,#s2p13#
s1t19Stroke=StrokeWidth #BorderSize#

s1t20p1Line=Line #s2p14#,#s1p9#
s1t20p2Line=Line #s1p9#,#s2p13#
s1t20p3Line=Line #s2p13#,#s2p14#
s1t20Stroke=StrokeWidth #BorderSize#

s1t21p1Line=Line #s2p14#,#s1p1#
s1t21p2Line=Line #s1p1#,#s1p9#
s1t21p3Line=Line #s1p9#,#s2p14#
s1t21Stroke=StrokeWidth #BorderSize#

s1t22p1Line=Line #s2p15#,#s1p1#
s1t22p2Line=Line #s1p1#,#s2p14#
s1t22p3Line=Line #s2p14#,#s2p15#
s1t22Stroke=StrokeWidth #BorderSize#

s1t23p1Line=Line #s2p15#,#s2p1#
s1t23p2Line=Line #s2p1#,#s1p1#
s1t23p3Line=Line #s1p1#,#s2p15#
s1t23Stroke=StrokeWidth #BorderSize#

s1t24p1Line=Line #s2p1#,#s2p2#
s1t24p2Line=Line #s2p2#,#s1p1#
s1t24p3Line=Line #s1p1#,#s2p1#
s1t24Stroke=StrokeWidth #BorderSize#