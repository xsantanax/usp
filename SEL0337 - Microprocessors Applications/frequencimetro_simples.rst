                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.3.0 #8604 (May 11 2013) (MINGW32)
                              4 ; This file was generated Mon Nov 17 12:03:12 2014
                              5 ;--------------------------------------------------------
                              6 	.module frequencimetro_simples
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _main
                             13 	.globl _estourot1
                             14 	.globl _imprimeFrase4bits
                             15 	.globl _imprimeChar4bits
                             16 	.globl _imprimeFrase
                             17 	.globl _imprimeChar
                             18 	.globl _atraso
                             19 	.globl _CY
                             20 	.globl _AC
                             21 	.globl _F0
                             22 	.globl _RS1
                             23 	.globl _RS0
                             24 	.globl _OV
                             25 	.globl _FL
                             26 	.globl _P
                             27 	.globl _TF2
                             28 	.globl _EXF2
                             29 	.globl _RCLK
                             30 	.globl _TCLK
                             31 	.globl _EXEN2
                             32 	.globl _TR2
                             33 	.globl _C_T2
                             34 	.globl _CP_RL2
                             35 	.globl _T2CON_7
                             36 	.globl _T2CON_6
                             37 	.globl _T2CON_5
                             38 	.globl _T2CON_4
                             39 	.globl _T2CON_3
                             40 	.globl _T2CON_2
                             41 	.globl _T2CON_1
                             42 	.globl _T2CON_0
                             43 	.globl _PT2
                             44 	.globl _PS
                             45 	.globl _PT1
                             46 	.globl _PX1
                             47 	.globl _PT0
                             48 	.globl _PX0
                             49 	.globl _RD
                             50 	.globl _WR
                             51 	.globl _T1
                             52 	.globl _T0
                             53 	.globl _INT1
                             54 	.globl _INT0
                             55 	.globl _TXD
                             56 	.globl _RXD
                             57 	.globl _P3_7
                             58 	.globl _P3_6
                             59 	.globl _P3_5
                             60 	.globl _P3_4
                             61 	.globl _P3_3
                             62 	.globl _P3_2
                             63 	.globl _P3_1
                             64 	.globl _P3_0
                             65 	.globl _EA
                             66 	.globl _ET2
                             67 	.globl _ES
                             68 	.globl _ET1
                             69 	.globl _EX1
                             70 	.globl _ET0
                             71 	.globl _EX0
                             72 	.globl _P2_7
                             73 	.globl _P2_6
                             74 	.globl _P2_5
                             75 	.globl _P2_4
                             76 	.globl _P2_3
                             77 	.globl _P2_2
                             78 	.globl _P2_1
                             79 	.globl _P2_0
                             80 	.globl _SM0
                             81 	.globl _SM1
                             82 	.globl _SM2
                             83 	.globl _REN
                             84 	.globl _TB8
                             85 	.globl _RB8
                             86 	.globl _TI
                             87 	.globl _RI
                             88 	.globl _T2EX
                             89 	.globl _T2
                             90 	.globl _P1_7
                             91 	.globl _P1_6
                             92 	.globl _P1_5
                             93 	.globl _P1_4
                             94 	.globl _P1_3
                             95 	.globl _P1_2
                             96 	.globl _P1_1
                             97 	.globl _P1_0
                             98 	.globl _TF1
                             99 	.globl _TR1
                            100 	.globl _TF0
                            101 	.globl _TR0
                            102 	.globl _IE1
                            103 	.globl _IT1
                            104 	.globl _IE0
                            105 	.globl _IT0
                            106 	.globl _P0_7
                            107 	.globl _P0_6
                            108 	.globl _P0_5
                            109 	.globl _P0_4
                            110 	.globl _P0_3
                            111 	.globl _P0_2
                            112 	.globl _P0_1
                            113 	.globl _P0_0
                            114 	.globl _B
                            115 	.globl _A
                            116 	.globl _ACC
                            117 	.globl _PSW
                            118 	.globl _TH2
                            119 	.globl _TL2
                            120 	.globl _RCAP2H
                            121 	.globl _RCAP2L
                            122 	.globl _T2MOD
                            123 	.globl _T2CON
                            124 	.globl _IP
                            125 	.globl _P3
                            126 	.globl _IE
                            127 	.globl _P2
                            128 	.globl _SBUF
                            129 	.globl _SCON
                            130 	.globl _P1
                            131 	.globl _TH1
                            132 	.globl _TH0
                            133 	.globl _TL1
                            134 	.globl _TL0
                            135 	.globl _TMOD
                            136 	.globl _TCON
                            137 	.globl _PCON
                            138 	.globl _DPH
                            139 	.globl _DPL
                            140 	.globl _SP
                            141 	.globl _P0
                            142 	.globl _pow_PARM_2
                            143 	.globl _ascii
                            144 	.globl _estouros
                            145 	.globl _ndigitos
                            146 	.globl _posicionaCursor4bits_PARM_2
                            147 	.globl _posicionaCursor_PARM_2
                            148 	.globl _divideMsg
                            149 	.globl _imprimeInst
                            150 	.globl _initLCD
                            151 	.globl _posicionaCursor
                            152 	.globl _imprimeInst4bits
                            153 	.globl _initLCD4bits
                            154 	.globl _posicionaCursor4bits
                            155 	.globl _pow
                            156 	.globl _asciiNum
                            157 ;--------------------------------------------------------
                            158 ; special function registers
                            159 ;--------------------------------------------------------
                            160 	.area RSEG    (ABS,DATA)
   0000                     161 	.org 0x0000
                     0080   162 G$P0$0$0 == 0x0080
                     0080   163 _P0	=	0x0080
                     0081   164 G$SP$0$0 == 0x0081
                     0081   165 _SP	=	0x0081
                     0082   166 G$DPL$0$0 == 0x0082
                     0082   167 _DPL	=	0x0082
                     0083   168 G$DPH$0$0 == 0x0083
                     0083   169 _DPH	=	0x0083
                     0087   170 G$PCON$0$0 == 0x0087
                     0087   171 _PCON	=	0x0087
                     0088   172 G$TCON$0$0 == 0x0088
                     0088   173 _TCON	=	0x0088
                     0089   174 G$TMOD$0$0 == 0x0089
                     0089   175 _TMOD	=	0x0089
                     008A   176 G$TL0$0$0 == 0x008a
                     008A   177 _TL0	=	0x008a
                     008B   178 G$TL1$0$0 == 0x008b
                     008B   179 _TL1	=	0x008b
                     008C   180 G$TH0$0$0 == 0x008c
                     008C   181 _TH0	=	0x008c
                     008D   182 G$TH1$0$0 == 0x008d
                     008D   183 _TH1	=	0x008d
                     0090   184 G$P1$0$0 == 0x0090
                     0090   185 _P1	=	0x0090
                     0098   186 G$SCON$0$0 == 0x0098
                     0098   187 _SCON	=	0x0098
                     0099   188 G$SBUF$0$0 == 0x0099
                     0099   189 _SBUF	=	0x0099
                     00A0   190 G$P2$0$0 == 0x00a0
                     00A0   191 _P2	=	0x00a0
                     00A8   192 G$IE$0$0 == 0x00a8
                     00A8   193 _IE	=	0x00a8
                     00B0   194 G$P3$0$0 == 0x00b0
                     00B0   195 _P3	=	0x00b0
                     00B8   196 G$IP$0$0 == 0x00b8
                     00B8   197 _IP	=	0x00b8
                     00C8   198 G$T2CON$0$0 == 0x00c8
                     00C8   199 _T2CON	=	0x00c8
                     00C9   200 G$T2MOD$0$0 == 0x00c9
                     00C9   201 _T2MOD	=	0x00c9
                     00CA   202 G$RCAP2L$0$0 == 0x00ca
                     00CA   203 _RCAP2L	=	0x00ca
                     00CB   204 G$RCAP2H$0$0 == 0x00cb
                     00CB   205 _RCAP2H	=	0x00cb
                     00CC   206 G$TL2$0$0 == 0x00cc
                     00CC   207 _TL2	=	0x00cc
                     00CD   208 G$TH2$0$0 == 0x00cd
                     00CD   209 _TH2	=	0x00cd
                     00D0   210 G$PSW$0$0 == 0x00d0
                     00D0   211 _PSW	=	0x00d0
                     00E0   212 G$ACC$0$0 == 0x00e0
                     00E0   213 _ACC	=	0x00e0
                     00E0   214 G$A$0$0 == 0x00e0
                     00E0   215 _A	=	0x00e0
                     00F0   216 G$B$0$0 == 0x00f0
                     00F0   217 _B	=	0x00f0
                            218 ;--------------------------------------------------------
                            219 ; special function bits
                            220 ;--------------------------------------------------------
                            221 	.area RSEG    (ABS,DATA)
   0000                     222 	.org 0x0000
                     0080   223 G$P0_0$0$0 == 0x0080
                     0080   224 _P0_0	=	0x0080
                     0081   225 G$P0_1$0$0 == 0x0081
                     0081   226 _P0_1	=	0x0081
                     0082   227 G$P0_2$0$0 == 0x0082
                     0082   228 _P0_2	=	0x0082
                     0083   229 G$P0_3$0$0 == 0x0083
                     0083   230 _P0_3	=	0x0083
                     0084   231 G$P0_4$0$0 == 0x0084
                     0084   232 _P0_4	=	0x0084
                     0085   233 G$P0_5$0$0 == 0x0085
                     0085   234 _P0_5	=	0x0085
                     0086   235 G$P0_6$0$0 == 0x0086
                     0086   236 _P0_6	=	0x0086
                     0087   237 G$P0_7$0$0 == 0x0087
                     0087   238 _P0_7	=	0x0087
                     0088   239 G$IT0$0$0 == 0x0088
                     0088   240 _IT0	=	0x0088
                     0089   241 G$IE0$0$0 == 0x0089
                     0089   242 _IE0	=	0x0089
                     008A   243 G$IT1$0$0 == 0x008a
                     008A   244 _IT1	=	0x008a
                     008B   245 G$IE1$0$0 == 0x008b
                     008B   246 _IE1	=	0x008b
                     008C   247 G$TR0$0$0 == 0x008c
                     008C   248 _TR0	=	0x008c
                     008D   249 G$TF0$0$0 == 0x008d
                     008D   250 _TF0	=	0x008d
                     008E   251 G$TR1$0$0 == 0x008e
                     008E   252 _TR1	=	0x008e
                     008F   253 G$TF1$0$0 == 0x008f
                     008F   254 _TF1	=	0x008f
                     0090   255 G$P1_0$0$0 == 0x0090
                     0090   256 _P1_0	=	0x0090
                     0091   257 G$P1_1$0$0 == 0x0091
                     0091   258 _P1_1	=	0x0091
                     0092   259 G$P1_2$0$0 == 0x0092
                     0092   260 _P1_2	=	0x0092
                     0093   261 G$P1_3$0$0 == 0x0093
                     0093   262 _P1_3	=	0x0093
                     0094   263 G$P1_4$0$0 == 0x0094
                     0094   264 _P1_4	=	0x0094
                     0095   265 G$P1_5$0$0 == 0x0095
                     0095   266 _P1_5	=	0x0095
                     0096   267 G$P1_6$0$0 == 0x0096
                     0096   268 _P1_6	=	0x0096
                     0097   269 G$P1_7$0$0 == 0x0097
                     0097   270 _P1_7	=	0x0097
                     0090   271 G$T2$0$0 == 0x0090
                     0090   272 _T2	=	0x0090
                     0091   273 G$T2EX$0$0 == 0x0091
                     0091   274 _T2EX	=	0x0091
                     0098   275 G$RI$0$0 == 0x0098
                     0098   276 _RI	=	0x0098
                     0099   277 G$TI$0$0 == 0x0099
                     0099   278 _TI	=	0x0099
                     009A   279 G$RB8$0$0 == 0x009a
                     009A   280 _RB8	=	0x009a
                     009B   281 G$TB8$0$0 == 0x009b
                     009B   282 _TB8	=	0x009b
                     009C   283 G$REN$0$0 == 0x009c
                     009C   284 _REN	=	0x009c
                     009D   285 G$SM2$0$0 == 0x009d
                     009D   286 _SM2	=	0x009d
                     009E   287 G$SM1$0$0 == 0x009e
                     009E   288 _SM1	=	0x009e
                     009F   289 G$SM0$0$0 == 0x009f
                     009F   290 _SM0	=	0x009f
                     00A0   291 G$P2_0$0$0 == 0x00a0
                     00A0   292 _P2_0	=	0x00a0
                     00A1   293 G$P2_1$0$0 == 0x00a1
                     00A1   294 _P2_1	=	0x00a1
                     00A2   295 G$P2_2$0$0 == 0x00a2
                     00A2   296 _P2_2	=	0x00a2
                     00A3   297 G$P2_3$0$0 == 0x00a3
                     00A3   298 _P2_3	=	0x00a3
                     00A4   299 G$P2_4$0$0 == 0x00a4
                     00A4   300 _P2_4	=	0x00a4
                     00A5   301 G$P2_5$0$0 == 0x00a5
                     00A5   302 _P2_5	=	0x00a5
                     00A6   303 G$P2_6$0$0 == 0x00a6
                     00A6   304 _P2_6	=	0x00a6
                     00A7   305 G$P2_7$0$0 == 0x00a7
                     00A7   306 _P2_7	=	0x00a7
                     00A8   307 G$EX0$0$0 == 0x00a8
                     00A8   308 _EX0	=	0x00a8
                     00A9   309 G$ET0$0$0 == 0x00a9
                     00A9   310 _ET0	=	0x00a9
                     00AA   311 G$EX1$0$0 == 0x00aa
                     00AA   312 _EX1	=	0x00aa
                     00AB   313 G$ET1$0$0 == 0x00ab
                     00AB   314 _ET1	=	0x00ab
                     00AC   315 G$ES$0$0 == 0x00ac
                     00AC   316 _ES	=	0x00ac
                     00AD   317 G$ET2$0$0 == 0x00ad
                     00AD   318 _ET2	=	0x00ad
                     00AF   319 G$EA$0$0 == 0x00af
                     00AF   320 _EA	=	0x00af
                     00B0   321 G$P3_0$0$0 == 0x00b0
                     00B0   322 _P3_0	=	0x00b0
                     00B1   323 G$P3_1$0$0 == 0x00b1
                     00B1   324 _P3_1	=	0x00b1
                     00B2   325 G$P3_2$0$0 == 0x00b2
                     00B2   326 _P3_2	=	0x00b2
                     00B3   327 G$P3_3$0$0 == 0x00b3
                     00B3   328 _P3_3	=	0x00b3
                     00B4   329 G$P3_4$0$0 == 0x00b4
                     00B4   330 _P3_4	=	0x00b4
                     00B5   331 G$P3_5$0$0 == 0x00b5
                     00B5   332 _P3_5	=	0x00b5
                     00B6   333 G$P3_6$0$0 == 0x00b6
                     00B6   334 _P3_6	=	0x00b6
                     00B7   335 G$P3_7$0$0 == 0x00b7
                     00B7   336 _P3_7	=	0x00b7
                     00B0   337 G$RXD$0$0 == 0x00b0
                     00B0   338 _RXD	=	0x00b0
                     00B1   339 G$TXD$0$0 == 0x00b1
                     00B1   340 _TXD	=	0x00b1
                     00B2   341 G$INT0$0$0 == 0x00b2
                     00B2   342 _INT0	=	0x00b2
                     00B3   343 G$INT1$0$0 == 0x00b3
                     00B3   344 _INT1	=	0x00b3
                     00B4   345 G$T0$0$0 == 0x00b4
                     00B4   346 _T0	=	0x00b4
                     00B5   347 G$T1$0$0 == 0x00b5
                     00B5   348 _T1	=	0x00b5
                     00B6   349 G$WR$0$0 == 0x00b6
                     00B6   350 _WR	=	0x00b6
                     00B7   351 G$RD$0$0 == 0x00b7
                     00B7   352 _RD	=	0x00b7
                     00B8   353 G$PX0$0$0 == 0x00b8
                     00B8   354 _PX0	=	0x00b8
                     00B9   355 G$PT0$0$0 == 0x00b9
                     00B9   356 _PT0	=	0x00b9
                     00BA   357 G$PX1$0$0 == 0x00ba
                     00BA   358 _PX1	=	0x00ba
                     00BB   359 G$PT1$0$0 == 0x00bb
                     00BB   360 _PT1	=	0x00bb
                     00BC   361 G$PS$0$0 == 0x00bc
                     00BC   362 _PS	=	0x00bc
                     00BD   363 G$PT2$0$0 == 0x00bd
                     00BD   364 _PT2	=	0x00bd
                     00C8   365 G$T2CON_0$0$0 == 0x00c8
                     00C8   366 _T2CON_0	=	0x00c8
                     00C9   367 G$T2CON_1$0$0 == 0x00c9
                     00C9   368 _T2CON_1	=	0x00c9
                     00CA   369 G$T2CON_2$0$0 == 0x00ca
                     00CA   370 _T2CON_2	=	0x00ca
                     00CB   371 G$T2CON_3$0$0 == 0x00cb
                     00CB   372 _T2CON_3	=	0x00cb
                     00CC   373 G$T2CON_4$0$0 == 0x00cc
                     00CC   374 _T2CON_4	=	0x00cc
                     00CD   375 G$T2CON_5$0$0 == 0x00cd
                     00CD   376 _T2CON_5	=	0x00cd
                     00CE   377 G$T2CON_6$0$0 == 0x00ce
                     00CE   378 _T2CON_6	=	0x00ce
                     00CF   379 G$T2CON_7$0$0 == 0x00cf
                     00CF   380 _T2CON_7	=	0x00cf
                     00C8   381 G$CP_RL2$0$0 == 0x00c8
                     00C8   382 _CP_RL2	=	0x00c8
                     00C9   383 G$C_T2$0$0 == 0x00c9
                     00C9   384 _C_T2	=	0x00c9
                     00CA   385 G$TR2$0$0 == 0x00ca
                     00CA   386 _TR2	=	0x00ca
                     00CB   387 G$EXEN2$0$0 == 0x00cb
                     00CB   388 _EXEN2	=	0x00cb
                     00CC   389 G$TCLK$0$0 == 0x00cc
                     00CC   390 _TCLK	=	0x00cc
                     00CD   391 G$RCLK$0$0 == 0x00cd
                     00CD   392 _RCLK	=	0x00cd
                     00CE   393 G$EXF2$0$0 == 0x00ce
                     00CE   394 _EXF2	=	0x00ce
                     00CF   395 G$TF2$0$0 == 0x00cf
                     00CF   396 _TF2	=	0x00cf
                     00D0   397 G$P$0$0 == 0x00d0
                     00D0   398 _P	=	0x00d0
                     00D1   399 G$FL$0$0 == 0x00d1
                     00D1   400 _FL	=	0x00d1
                     00D2   401 G$OV$0$0 == 0x00d2
                     00D2   402 _OV	=	0x00d2
                     00D3   403 G$RS0$0$0 == 0x00d3
                     00D3   404 _RS0	=	0x00d3
                     00D4   405 G$RS1$0$0 == 0x00d4
                     00D4   406 _RS1	=	0x00d4
                     00D5   407 G$F0$0$0 == 0x00d5
                     00D5   408 _F0	=	0x00d5
                     00D6   409 G$AC$0$0 == 0x00d6
                     00D6   410 _AC	=	0x00d6
                     00D7   411 G$CY$0$0 == 0x00d7
                     00D7   412 _CY	=	0x00d7
                            413 ;--------------------------------------------------------
                            414 ; overlayable register banks
                            415 ;--------------------------------------------------------
                            416 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     417 	.ds 8
                            418 ;--------------------------------------------------------
                            419 ; internal ram data
                            420 ;--------------------------------------------------------
                            421 	.area DSEG    (DATA)
                     0000   422 Lfrequencimetro_simples.posicionaCursor$lin$1$28==.
   0008                     423 _posicionaCursor_PARM_2:
   0008                     424 	.ds 1
                     0001   425 Lfrequencimetro_simples.posicionaCursor4bits$lin$1$41==.
   0009                     426 _posicionaCursor4bits_PARM_2:
   0009                     427 	.ds 1
                     0002   428 G$ndigitos$0$0==.
   000A                     429 _ndigitos::
   000A                     430 	.ds 1
                     0003   431 G$estouros$0$0==.
   000B                     432 _estouros::
   000B                     433 	.ds 1
                     0004   434 G$ascii$0$0==.
   000C                     435 _ascii::
   000C                     436 	.ds 6
                     000A   437 Lfrequencimetro_simples.main$sloc0$1$0==.
   0012                     438 _main_sloc0_1_0:
   0012                     439 	.ds 4
                     000E   440 Lfrequencimetro_simples.pow$pot$1$53==.
   0016                     441 _pow_PARM_2:
   0016                     442 	.ds 1
                     000F   443 Lfrequencimetro_simples.pow$resp$1$54==.
   0017                     444 _pow_resp_1_54:
   0017                     445 	.ds 4
                     0013   446 Lfrequencimetro_simples.asciiNum$num$1$56==.
   001B                     447 _asciiNum_num_1_56:
   001B                     448 	.ds 4
                     0017   449 Lfrequencimetro_simples.asciiNum$a$1$57==.
   001F                     450 _asciiNum_a_1_57:
   001F                     451 	.ds 4
                            452 ;--------------------------------------------------------
                            453 ; overlayable items in internal ram 
                            454 ;--------------------------------------------------------
                            455 ;--------------------------------------------------------
                            456 ; Stack segment in internal ram 
                            457 ;--------------------------------------------------------
                            458 	.area	SSEG	(DATA)
   0027                     459 __start__stack:
   0027                     460 	.ds	1
                            461 
                            462 ;--------------------------------------------------------
                            463 ; indirectly addressable internal ram data
                            464 ;--------------------------------------------------------
                            465 	.area ISEG    (DATA)
                            466 ;--------------------------------------------------------
                            467 ; absolute internal ram data
                            468 ;--------------------------------------------------------
                            469 	.area IABS    (ABS,DATA)
                            470 	.area IABS    (ABS,DATA)
                            471 ;--------------------------------------------------------
                            472 ; bit data
                            473 ;--------------------------------------------------------
                            474 	.area BSEG    (BIT)
                            475 ;--------------------------------------------------------
                            476 ; paged external ram data
                            477 ;--------------------------------------------------------
                            478 	.area PSEG    (PAG,XDATA)
                            479 ;--------------------------------------------------------
                            480 ; external ram data
                            481 ;--------------------------------------------------------
                            482 	.area XSEG    (XDATA)
                            483 ;--------------------------------------------------------
                            484 ; absolute external ram data
                            485 ;--------------------------------------------------------
                            486 	.area XABS    (ABS,XDATA)
                            487 ;--------------------------------------------------------
                            488 ; external initialized ram data
                            489 ;--------------------------------------------------------
                            490 	.area XISEG   (XDATA)
                            491 	.area HOME    (CODE)
                            492 	.area GSINIT0 (CODE)
                            493 	.area GSINIT1 (CODE)
                            494 	.area GSINIT2 (CODE)
                            495 	.area GSINIT3 (CODE)
                            496 	.area GSINIT4 (CODE)
                            497 	.area GSINIT5 (CODE)
                            498 	.area GSINIT  (CODE)
                            499 	.area GSFINAL (CODE)
                            500 	.area CSEG    (CODE)
                            501 ;--------------------------------------------------------
                            502 ; interrupt vector 
                            503 ;--------------------------------------------------------
                            504 	.area HOME    (CODE)
   0000                     505 __interrupt_vect:
   0000 02 00 21      [24]  506 	ljmp	__sdcc_gsinit_startup
   0003 32            [24]  507 	reti
   0004                     508 	.ds	7
   000B 32            [24]  509 	reti
   000C                     510 	.ds	7
   0013 32            [24]  511 	reti
   0014                     512 	.ds	7
   001B 02 02 AA      [24]  513 	ljmp	_estourot1
                            514 ;--------------------------------------------------------
                            515 ; global & static initialisations
                            516 ;--------------------------------------------------------
                            517 	.area HOME    (CODE)
                            518 	.area GSINIT  (CODE)
                            519 	.area GSFINAL (CODE)
                            520 	.area GSINIT  (CODE)
                            521 	.globl __sdcc_gsinit_startup
                            522 	.globl __sdcc_program_startup
                            523 	.globl __start__stack
                            524 	.globl __mcs51_genXINIT
                            525 	.globl __mcs51_genXRAMCLEAR
                            526 	.globl __mcs51_genRAMCLEAR
                     0000   527 	C$frequencimetro_simples.c$9$1$57 ==.
                            528 ;	frequencimetro_simples.c:9: char ndigitos=0; //deve ser signed por causa do for
   007A 75 0A 00      [24]  529 	mov	_ndigitos,#0x00
                     0003   530 	C$frequencimetro_simples.c$10$1$57 ==.
                            531 ;	frequencimetro_simples.c:10: volatile unsigned char estouros=0;
   007D 75 0B 00      [24]  532 	mov	_estouros,#0x00
                     0006   533 	C$frequencimetro_simples.c$11$1$57 ==.
                            534 ;	frequencimetro_simples.c:11: char ascii[6]={48,48,48,48,48,48};  //cm, dm, m, c, d, u
   0080 75 0C 30      [24]  535 	mov	_ascii,#0x30
   0083 75 0D 30      [24]  536 	mov	(_ascii + 0x0001),#0x30
   0086 75 0E 30      [24]  537 	mov	(_ascii + 0x0002),#0x30
   0089 75 0F 30      [24]  538 	mov	(_ascii + 0x0003),#0x30
   008C 75 10 30      [24]  539 	mov	(_ascii + 0x0004),#0x30
   008F 75 11 30      [24]  540 	mov	(_ascii + 0x0005),#0x30
                            541 	.area GSFINAL (CODE)
   0092 02 00 1E      [24]  542 	ljmp	__sdcc_program_startup
                            543 ;--------------------------------------------------------
                            544 ; Home
                            545 ;--------------------------------------------------------
                            546 	.area HOME    (CODE)
                            547 	.area HOME    (CODE)
   001E                     548 __sdcc_program_startup:
   001E 02 02 AF      [24]  549 	ljmp	_main
                            550 ;	return from main will return to caller
                            551 ;--------------------------------------------------------
                            552 ; code
                            553 ;--------------------------------------------------------
                            554 	.area CSEG    (CODE)
                            555 ;------------------------------------------------------------
                            556 ;Allocation info for local variables in function 'atraso'
                            557 ;------------------------------------------------------------
                            558 ;tempo                     Allocated to registers r7 
                            559 ;------------------------------------------------------------
                     0000   560 	G$atraso$0$0 ==.
                     0000   561 	C$atraso.h$5$0$0 ==.
                            562 ;	atraso.h:5: void atraso(unsigned char tempo){
                            563 ;	-----------------------------------------
                            564 ;	 function atraso
                            565 ;	-----------------------------------------
   0095                     566 _atraso:
                     0007   567 	ar7 = 0x07
                     0006   568 	ar6 = 0x06
                     0005   569 	ar5 = 0x05
                     0004   570 	ar4 = 0x04
                     0003   571 	ar3 = 0x03
                     0002   572 	ar2 = 0x02
                     0001   573 	ar1 = 0x01
                     0000   574 	ar0 = 0x00
   0095 AF 82         [24]  575 	mov	r7,dpl
                     0002   576 	C$atraso.h$6$1$2 ==.
                            577 ;	atraso.h:6: if(tempo==1){
   0097 BF 01 14      [24]  578 	cjne	r7,#0x01,00105$
                     0005   579 	C$atraso.h$8$2$3 ==.
                            580 ;	atraso.h:8: TMOD=TMOD & 0xF0;
   009A 53 89 F0      [24]  581 	anl	_TMOD,#0xF0
                     0008   582 	C$atraso.h$9$2$3 ==.
                            583 ;	atraso.h:9: TL0=0;    /*prescaler de 5bits*/
   009D 75 8A 00      [24]  584 	mov	_TL0,#0x00
                     000B   585 	C$atraso.h$10$2$3 ==.
                            586 ;	atraso.h:10: TH0=224;
   00A0 75 8C E0      [24]  587 	mov	_TH0,#0xE0
                     000E   588 	C$atraso.h$11$2$3 ==.
                            589 ;	atraso.h:11: TR0=1;
   00A3 D2 8C         [12]  590 	setb	_TR0
                     0010   591 	C$atraso.h$12$2$3 ==.
                            592 ;	atraso.h:12: while(!TF0);
   00A5                     593 00101$:
                     0010   594 	C$atraso.h$13$2$3 ==.
                            595 ;	atraso.h:13: TF0=0;
   00A5 10 8D 02      [24]  596 	jbc	_TF0,00162$
   00A8 80 FB         [24]  597 	sjmp	00101$
   00AA                     598 00162$:
                     0015   599 	C$atraso.h$14$2$3 ==.
                            600 ;	atraso.h:14: TR0=0;
   00AA C2 8C         [12]  601 	clr	_TR0
                     0017   602 	C$atraso.h$15$2$3 ==.
                            603 ;	atraso.h:15: return;
   00AC 80 3A         [24]  604 	sjmp	00122$
   00AE                     605 00105$:
                     0019   606 	C$atraso.h$17$1$2 ==.
                            607 ;	atraso.h:17: if(tempo==15){
   00AE BF 0F 1D      [24]  608 	cjne	r7,#0x0F,00113$
                     001C   609 	C$atraso.h$18$2$4 ==.
                            610 ;	atraso.h:18: TMOD=TMOD & 0xF0;   /*prescaler*/
   00B1 53 89 F0      [24]  611 	anl	_TMOD,#0xF0
                     001F   612 	C$atraso.h$19$2$4 ==.
                            613 ;	atraso.h:19: TL0=0;
   00B4 75 8A 00      [24]  614 	mov	_TL0,#0x00
                     0022   615 	C$atraso.h$20$2$4 ==.
                            616 ;	atraso.h:20: TH0=224;
   00B7 75 8C E0      [24]  617 	mov	_TH0,#0xE0
                     0025   618 	C$atraso.h$21$2$4 ==.
                            619 ;	atraso.h:21: TR0=1;
   00BA D2 8C         [12]  620 	setb	_TR0
                     0027   621 	C$atraso.h$22$2$4 ==.
                            622 ;	atraso.h:22: while(tempo>0){
   00BC                     623 00109$:
   00BC EF            [12]  624 	mov	a,r7
   00BD 60 0B         [24]  625 	jz	00111$
                     002A   626 	C$atraso.h$23$3$5 ==.
                            627 ;	atraso.h:23: while(!TF0);
   00BF                     628 00106$:
   00BF 30 8D FD      [24]  629 	jnb	_TF0,00106$
                     002D   630 	C$atraso.h$24$3$5 ==.
                            631 ;	atraso.h:24: tempo--;
   00C2 1F            [12]  632 	dec	r7
                     002E   633 	C$atraso.h$25$3$5 ==.
                            634 ;	atraso.h:25: TF0=0;
   00C3 C2 8D         [12]  635 	clr	_TF0
                     0030   636 	C$atraso.h$26$3$5 ==.
                            637 ;	atraso.h:26: TH0=224;
   00C5 75 8C E0      [24]  638 	mov	_TH0,#0xE0
   00C8 80 F2         [24]  639 	sjmp	00109$
   00CA                     640 00111$:
                     0035   641 	C$atraso.h$28$2$4 ==.
                            642 ;	atraso.h:28: TR0=0;
   00CA C2 8C         [12]  643 	clr	_TR0
                     0037   644 	C$atraso.h$29$2$4 ==.
                            645 ;	atraso.h:29: return;
   00CC 80 1A         [24]  646 	sjmp	00122$
   00CE                     647 00113$:
                     0039   648 	C$atraso.h$31$1$2 ==.
                            649 ;	atraso.h:31: if(tempo==100){	/*2*50ms*/
   00CE BF 64 17      [24]  650 	cjne	r7,#0x64,00122$
                     003C   651 	C$atraso.h$32$2$6 ==.
                            652 ;	atraso.h:32: TMOD=TMOD | 0x01;/*16bits*/
   00D1 43 89 01      [24]  653 	orl	_TMOD,#0x01
                     003F   654 	C$atraso.h$33$2$6 ==.
                            655 ;	atraso.h:33: TR0=1;
   00D4 D2 8C         [12]  656 	setb	_TR0
                     0041   657 	C$atraso.h$34$2$6 ==.
                            658 ;	atraso.h:34: while(tempo>98){
   00D6                     659 00117$:
   00D6 EF            [12]  660 	mov	a,r7
   00D7 24 9D         [12]  661 	add	a,#0xff - 0x62
   00D9 50 0B         [24]  662 	jnc	00119$
                     0046   663 	C$atraso.h$35$3$7 ==.
                            664 ;	atraso.h:35: TH0=59;
   00DB 75 8C 3B      [24]  665 	mov	_TH0,#0x3B
                     0049   666 	C$atraso.h$36$3$7 ==.
                            667 ;	atraso.h:36: while(!TF0);
   00DE                     668 00114$:
                     0049   669 	C$atraso.h$37$3$7 ==.
                            670 ;	atraso.h:37: TF0=0;
   00DE 10 8D 02      [24]  671 	jbc	_TF0,00170$
   00E1 80 FB         [24]  672 	sjmp	00114$
   00E3                     673 00170$:
                     004E   674 	C$atraso.h$38$3$7 ==.
                            675 ;	atraso.h:38: tempo--;
   00E3 1F            [12]  676 	dec	r7
   00E4 80 F0         [24]  677 	sjmp	00117$
   00E6                     678 00119$:
                     0051   679 	C$atraso.h$40$2$6 ==.
                            680 ;	atraso.h:40: TR0=0;
   00E6 C2 8C         [12]  681 	clr	_TR0
                     0053   682 	C$atraso.h$41$2$6 ==.
                            683 ;	atraso.h:41: return;
   00E8                     684 00122$:
                     0053   685 	C$atraso.h$43$1$2 ==.
                     0053   686 	XG$atraso$0$0 ==.
   00E8 22            [24]  687 	ret
                            688 ;------------------------------------------------------------
                            689 ;Allocation info for local variables in function 'divideMsg'
                            690 ;------------------------------------------------------------
                            691 ;msg                       Allocated to registers r7 
                            692 ;------------------------------------------------------------
                     0054   693 	G$divideMsg$0$0 ==.
                     0054   694 	C$lcd.h$42$1$2 ==.
                            695 ;	lcd.h:42: void divideMsg(unsigned char msg){
                            696 ;	-----------------------------------------
                            697 ;	 function divideMsg
                            698 ;	-----------------------------------------
   00E9                     699 _divideMsg:
   00E9 AF 82         [24]  700 	mov	r7,dpl
                     0056   701 	C$lcd.h$43$1$18 ==.
                            702 ;	lcd.h:43: P0=msg&0xF0;     		/*mantem nibble mais significativo*/
   00EB 74 F0         [12]  703 	mov	a,#0xF0
   00ED 5F            [12]  704 	anl	a,r7
   00EE F5 80         [12]  705 	mov	_P0,a
                     005B   706 	C$lcd.h$44$1$18 ==.
                            707 ;	lcd.h:44: P2=msg;		 		/*envia nibble menos significativo*/
   00F0 8F A0         [24]  708 	mov	_P2,r7
                     005D   709 	C$lcd.h$45$1$18 ==.
                            710 ;	lcd.h:45: return;
                     005D   711 	C$lcd.h$46$1$18 ==.
                     005D   712 	XG$divideMsg$0$0 ==.
   00F2 22            [24]  713 	ret
                            714 ;------------------------------------------------------------
                            715 ;Allocation info for local variables in function 'imprimeChar'
                            716 ;------------------------------------------------------------
                            717 ;msg                       Allocated to registers r7 
                            718 ;------------------------------------------------------------
                     005E   719 	G$imprimeChar$0$0 ==.
                     005E   720 	C$lcd.h$48$1$18 ==.
                            721 ;	lcd.h:48: void imprimeChar(unsigned char msg){
                            722 ;	-----------------------------------------
                            723 ;	 function imprimeChar
                            724 ;	-----------------------------------------
   00F3                     725 _imprimeChar:
                     005E   726 	C$lcd.h$49$1$20 ==.
                            727 ;	lcd.h:49: divideMsg(msg);
   00F3 12 00 E9      [24]  728 	lcall	_divideMsg
                     0061   729 	C$lcd.h$50$1$20 ==.
                            730 ;	lcd.h:50: RS=1;			/*dado*/
   00F6 D2 80         [12]  731 	setb	_P0_0
                     0063   732 	C$lcd.h$51$1$20 ==.
                            733 ;	lcd.h:51: EN=1;
   00F8 D2 82         [12]  734 	setb	_P0_2
                     0065   735 	C$lcd.h$52$1$20 ==.
                            736 ;	lcd.h:52: atraso(15);
   00FA 75 82 0F      [24]  737 	mov	dpl,#0x0F
   00FD 12 00 95      [24]  738 	lcall	_atraso
                     006B   739 	C$lcd.h$53$1$20 ==.
                            740 ;	lcd.h:53: EN=0;
   0100 C2 82         [12]  741 	clr	_P0_2
                     006D   742 	C$lcd.h$54$1$20 ==.
                            743 ;	lcd.h:54: return;
                     006D   744 	C$lcd.h$55$1$20 ==.
                     006D   745 	XG$imprimeChar$0$0 ==.
   0102 22            [24]  746 	ret
                            747 ;------------------------------------------------------------
                            748 ;Allocation info for local variables in function 'imprimeFrase'
                            749 ;------------------------------------------------------------
                            750 ;msg                       Allocated to registers r5 r6 r7 
                            751 ;i                         Allocated to registers r4 
                            752 ;------------------------------------------------------------
                     006E   753 	G$imprimeFrase$0$0 ==.
                     006E   754 	C$lcd.h$57$1$20 ==.
                            755 ;	lcd.h:57: void imprimeFrase(unsigned char *msg){
                            756 ;	-----------------------------------------
                            757 ;	 function imprimeFrase
                            758 ;	-----------------------------------------
   0103                     759 _imprimeFrase:
   0103 AD 82         [24]  760 	mov	r5,dpl
   0105 AE 83         [24]  761 	mov	r6,dph
   0107 AF F0         [24]  762 	mov	r7,b
                     0074   763 	C$lcd.h$58$1$20 ==.
                            764 ;	lcd.h:58: unsigned char i=0;
   0109 7C 00         [12]  765 	mov	r4,#0x00
                     0076   766 	C$lcd.h$59$1$22 ==.
                            767 ;	lcd.h:59: while(*msg){			/*verifica fim da string*/
   010B                     768 00103$:
   010B 8D 82         [24]  769 	mov	dpl,r5
   010D 8E 83         [24]  770 	mov	dph,r6
   010F 8F F0         [24]  771 	mov	b,r7
   0111 12 06 98      [24]  772 	lcall	__gptrget
   0114 FB            [12]  773 	mov	r3,a
   0115 60 45         [24]  774 	jz	00105$
                     0082   775 	C$lcd.h$60$2$23 ==.
                            776 ;	lcd.h:60: divideMsg(*msg);
   0117 8B 82         [24]  777 	mov	dpl,r3
   0119 C0 07         [24]  778 	push	ar7
   011B C0 06         [24]  779 	push	ar6
   011D C0 05         [24]  780 	push	ar5
   011F C0 04         [24]  781 	push	ar4
   0121 12 00 E9      [24]  782 	lcall	_divideMsg
                     008F   783 	C$lcd.h$61$2$23 ==.
                            784 ;	lcd.h:61: RS=1;			/*dado*/
   0124 D2 80         [12]  785 	setb	_P0_0
                     0091   786 	C$lcd.h$62$2$23 ==.
                            787 ;	lcd.h:62: EN=1;
   0126 D2 82         [12]  788 	setb	_P0_2
                     0093   789 	C$lcd.h$63$2$23 ==.
                            790 ;	lcd.h:63: atraso(15);
   0128 75 82 0F      [24]  791 	mov	dpl,#0x0F
   012B 12 00 95      [24]  792 	lcall	_atraso
   012E D0 04         [24]  793 	pop	ar4
   0130 D0 05         [24]  794 	pop	ar5
   0132 D0 06         [24]  795 	pop	ar6
   0134 D0 07         [24]  796 	pop	ar7
                     00A1   797 	C$lcd.h$64$2$23 ==.
                            798 ;	lcd.h:64: EN=0;
   0136 C2 82         [12]  799 	clr	_P0_2
                     00A3   800 	C$lcd.h$65$2$23 ==.
                            801 ;	lcd.h:65: msg++;
   0138 0D            [12]  802 	inc	r5
   0139 BD 00 01      [24]  803 	cjne	r5,#0x00,00118$
   013C 0E            [12]  804 	inc	r6
   013D                     805 00118$:
                     00A8   806 	C$lcd.h$66$2$23 ==.
                            807 ;	lcd.h:66: i++;
   013D 0C            [12]  808 	inc	r4
                     00A9   809 	C$lcd.h$67$2$23 ==.
                            810 ;	lcd.h:67: if(i==15)
   013E BC 0F CA      [24]  811 	cjne	r4,#0x0F,00103$
                     00AC   812 	C$lcd.h$68$2$23 ==.
                            813 ;	lcd.h:68: posicionaCursor(0, 2);		/*vai para linha 2*/
   0141 75 08 02      [24]  814 	mov	_posicionaCursor_PARM_2,#0x02
   0144 75 82 00      [24]  815 	mov	dpl,#0x00
   0147 C0 07         [24]  816 	push	ar7
   0149 C0 06         [24]  817 	push	ar6
   014B C0 05         [24]  818 	push	ar5
   014D C0 04         [24]  819 	push	ar4
   014F 12 01 7E      [24]  820 	lcall	_posicionaCursor
   0152 D0 04         [24]  821 	pop	ar4
   0154 D0 05         [24]  822 	pop	ar5
   0156 D0 06         [24]  823 	pop	ar6
   0158 D0 07         [24]  824 	pop	ar7
   015A 80 AF         [24]  825 	sjmp	00103$
   015C                     826 00105$:
                     00C7   827 	C$lcd.h$70$1$22 ==.
                            828 ;	lcd.h:70: return;
                     00C7   829 	C$lcd.h$71$1$22 ==.
                     00C7   830 	XG$imprimeFrase$0$0 ==.
   015C 22            [24]  831 	ret
                            832 ;------------------------------------------------------------
                            833 ;Allocation info for local variables in function 'imprimeInst'
                            834 ;------------------------------------------------------------
                            835 ;inst                      Allocated to registers 
                            836 ;------------------------------------------------------------
                     00C8   837 	G$imprimeInst$0$0 ==.
                     00C8   838 	C$lcd.h$73$1$22 ==.
                            839 ;	lcd.h:73: void imprimeInst(unsigned char inst){
                            840 ;	-----------------------------------------
                            841 ;	 function imprimeInst
                            842 ;	-----------------------------------------
   015D                     843 _imprimeInst:
                     00C8   844 	C$lcd.h$74$1$25 ==.
                            845 ;	lcd.h:74: divideMsg(inst);
   015D 12 00 E9      [24]  846 	lcall	_divideMsg
                     00CB   847 	C$lcd.h$75$1$25 ==.
                            848 ;	lcd.h:75: EN=1;
   0160 D2 82         [12]  849 	setb	_P0_2
                     00CD   850 	C$lcd.h$76$1$25 ==.
                            851 ;	lcd.h:76: atraso(15);
   0162 75 82 0F      [24]  852 	mov	dpl,#0x0F
   0165 12 00 95      [24]  853 	lcall	_atraso
                     00D3   854 	C$lcd.h$77$1$25 ==.
                            855 ;	lcd.h:77: EN=0;
   0168 C2 82         [12]  856 	clr	_P0_2
                     00D5   857 	C$lcd.h$78$1$25 ==.
                            858 ;	lcd.h:78: return;
                     00D5   859 	C$lcd.h$79$1$25 ==.
                     00D5   860 	XG$imprimeInst$0$0 ==.
   016A 22            [24]  861 	ret
                            862 ;------------------------------------------------------------
                            863 ;Allocation info for local variables in function 'initLCD'
                            864 ;------------------------------------------------------------
                     00D6   865 	G$initLCD$0$0 ==.
                     00D6   866 	C$lcd.h$81$1$25 ==.
                            867 ;	lcd.h:81: void initLCD(void){
                            868 ;	-----------------------------------------
                            869 ;	 function initLCD
                            870 ;	-----------------------------------------
   016B                     871 _initLCD:
                     00D6   872 	C$lcd.h$82$1$27 ==.
                            873 ;	lcd.h:82: imprimeInst(0x38);		/*duas linhas e 8bits*/
   016B 75 82 38      [24]  874 	mov	dpl,#0x38
   016E 12 01 5D      [24]  875 	lcall	_imprimeInst
                     00DC   876 	C$lcd.h$83$1$27 ==.
                            877 ;	lcd.h:83: imprimeInst(0x0F);		/*liga LCD e pisca cursor*/
   0171 75 82 0F      [24]  878 	mov	dpl,#0x0F
   0174 12 01 5D      [24]  879 	lcall	_imprimeInst
                     00E2   880 	C$lcd.h$84$1$27 ==.
                            881 ;	lcd.h:84: imprimeInst(0x06);		/*LCD para receber e cursor move para direita*/
   0177 75 82 06      [24]  882 	mov	dpl,#0x06
   017A 12 01 5D      [24]  883 	lcall	_imprimeInst
                     00E8   884 	C$lcd.h$85$1$27 ==.
                            885 ;	lcd.h:85: return;
                     00E8   886 	C$lcd.h$86$1$27 ==.
                     00E8   887 	XG$initLCD$0$0 ==.
   017D 22            [24]  888 	ret
                            889 ;------------------------------------------------------------
                            890 ;Allocation info for local variables in function 'posicionaCursor'
                            891 ;------------------------------------------------------------
                            892 ;lin                       Allocated with name '_posicionaCursor_PARM_2'
                            893 ;end                       Allocated to registers r7 
                            894 ;------------------------------------------------------------
                     00E9   895 	G$posicionaCursor$0$0 ==.
                     00E9   896 	C$lcd.h$88$1$27 ==.
                            897 ;	lcd.h:88: void posicionaCursor(unsigned char end, unsigned char lin){		/*end=endereço em que se deseja imprimir*/
                            898 ;	-----------------------------------------
                            899 ;	 function posicionaCursor
                            900 ;	-----------------------------------------
   017E                     901 _posicionaCursor:
   017E AF 82         [24]  902 	mov	r7,dpl
                     00EB   903 	C$lcd.h$90$2$30 ==.
                            904 ;	lcd.h:90: end=end+0x80;
   0180 74 80         [12]  905 	mov	a,#0x80
   0182 2F            [12]  906 	add	a,r7
                     00EE   907 	C$lcd.h$91$2$30 ==.
                            908 ;	lcd.h:91: imprimeInst(end);
   0183 FF            [12]  909 	mov	r7,a
   0184 F5 82         [12]  910 	mov	dpl,a
   0186 C0 07         [24]  911 	push	ar7
   0188 12 01 5D      [24]  912 	lcall	_imprimeInst
   018B D0 07         [24]  913 	pop	ar7
                     00F8   914 	C$lcd.h$94$2$31 ==.
                            915 ;	lcd.h:94: end=end+0xC0;			/*primeira posição da seg.linha=40h*/
   018D 74 C0         [12]  916 	mov	a,#0xC0
   018F 2F            [12]  917 	add	a,r7
                     00FB   918 	C$lcd.h$95$2$31 ==.
                            919 ;	lcd.h:95: imprimeInst(end);
   0190 F5 82         [12]  920 	mov	dpl,a
   0192 12 01 5D      [24]  921 	lcall	_imprimeInst
                     0100   922 	C$lcd.h$97$1$29 ==.
                            923 ;	lcd.h:97: return;
                     0100   924 	C$lcd.h$98$1$29 ==.
                     0100   925 	XG$posicionaCursor$0$0 ==.
   0195 22            [24]  926 	ret
                            927 ;------------------------------------------------------------
                            928 ;Allocation info for local variables in function 'imprimeChar4bits'
                            929 ;------------------------------------------------------------
                            930 ;msg                       Allocated to registers r7 
                            931 ;------------------------------------------------------------
                     0101   932 	G$imprimeChar4bits$0$0 ==.
                     0101   933 	C$lcd.h$101$1$29 ==.
                            934 ;	lcd.h:101: void imprimeChar4bits (unsigned char msg){
                            935 ;	-----------------------------------------
                            936 ;	 function imprimeChar4bits
                            937 ;	-----------------------------------------
   0196                     938 _imprimeChar4bits:
   0196 AF 82         [24]  939 	mov	r7,dpl
                     0103   940 	C$lcd.h$102$1$33 ==.
                            941 ;	lcd.h:102: P0=msg&0xF0;/*nibble mais significativo*/
   0198 74 F0         [12]  942 	mov	a,#0xF0
   019A 5F            [12]  943 	anl	a,r7
   019B F5 80         [12]  944 	mov	_P0,a
                     0108   945 	C$lcd.h$103$1$33 ==.
                            946 ;	lcd.h:103: RS=1;
   019D D2 80         [12]  947 	setb	_P0_0
                     010A   948 	C$lcd.h$104$1$33 ==.
                            949 ;	lcd.h:104: EN=1;
   019F D2 82         [12]  950 	setb	_P0_2
                     010C   951 	C$lcd.h$105$1$33 ==.
                            952 ;	lcd.h:105: atraso(15);
   01A1 75 82 0F      [24]  953 	mov	dpl,#0x0F
   01A4 C0 07         [24]  954 	push	ar7
   01A6 12 00 95      [24]  955 	lcall	_atraso
   01A9 D0 07         [24]  956 	pop	ar7
                     0116   957 	C$lcd.h$106$1$33 ==.
                            958 ;	lcd.h:106: EN=0;
   01AB C2 82         [12]  959 	clr	_P0_2
                     0118   960 	C$lcd.h$107$1$33 ==.
                            961 ;	lcd.h:107: P0=(msg<<4)&0xF0;/*nibble menos significativo*/
   01AD EF            [12]  962 	mov	a,r7
   01AE C4            [12]  963 	swap	a
   01AF 54 F0         [12]  964 	anl	a,#0xF0
   01B1 FF            [12]  965 	mov	r7,a
   01B2 74 F0         [12]  966 	mov	a,#0xF0
   01B4 5F            [12]  967 	anl	a,r7
   01B5 F5 80         [12]  968 	mov	_P0,a
                     0122   969 	C$lcd.h$108$1$33 ==.
                            970 ;	lcd.h:108: RS=1;
   01B7 D2 80         [12]  971 	setb	_P0_0
                     0124   972 	C$lcd.h$109$1$33 ==.
                            973 ;	lcd.h:109: EN=1;
   01B9 D2 82         [12]  974 	setb	_P0_2
                     0126   975 	C$lcd.h$110$1$33 ==.
                            976 ;	lcd.h:110: atraso(15);
   01BB 75 82 0F      [24]  977 	mov	dpl,#0x0F
   01BE 12 00 95      [24]  978 	lcall	_atraso
                     012C   979 	C$lcd.h$111$1$33 ==.
                            980 ;	lcd.h:111: EN=0;
   01C1 C2 82         [12]  981 	clr	_P0_2
                     012E   982 	C$lcd.h$112$1$33 ==.
                            983 ;	lcd.h:112: return;
                     012E   984 	C$lcd.h$113$1$33 ==.
                     012E   985 	XG$imprimeChar4bits$0$0 ==.
   01C3 22            [24]  986 	ret
                            987 ;------------------------------------------------------------
                            988 ;Allocation info for local variables in function 'imprimeFrase4bits'
                            989 ;------------------------------------------------------------
                            990 ;msg                       Allocated to registers r5 r6 r7 
                            991 ;i                         Allocated to registers r4 
                            992 ;------------------------------------------------------------
                     012F   993 	G$imprimeFrase4bits$0$0 ==.
                     012F   994 	C$lcd.h$115$1$33 ==.
                            995 ;	lcd.h:115: void imprimeFrase4bits (unsigned char *msg){
                            996 ;	-----------------------------------------
                            997 ;	 function imprimeFrase4bits
                            998 ;	-----------------------------------------
   01C4                     999 _imprimeFrase4bits:
   01C4 AD 82         [24] 1000 	mov	r5,dpl
   01C6 AE 83         [24] 1001 	mov	r6,dph
   01C8 AF F0         [24] 1002 	mov	r7,b
                     0135  1003 	C$lcd.h$116$1$33 ==.
                           1004 ;	lcd.h:116: char i=0;
   01CA 7C 00         [12] 1005 	mov	r4,#0x00
                     0137  1006 	C$lcd.h$117$1$35 ==.
                           1007 ;	lcd.h:117: while(*msg){
   01CC                    1008 00103$:
   01CC 8D 82         [24] 1009 	mov	dpl,r5
   01CE 8E 83         [24] 1010 	mov	dph,r6
   01D0 8F F0         [24] 1011 	mov	b,r7
   01D2 12 06 98      [24] 1012 	lcall	__gptrget
   01D5 FB            [12] 1013 	mov	r3,a
   01D6 60 76         [24] 1014 	jz	00105$
                     0143  1015 	C$lcd.h$118$2$36 ==.
                           1016 ;	lcd.h:118: P0=*msg&0xF0;/*nibble mais significativo*/
   01D8 74 F0         [12] 1017 	mov	a,#0xF0
   01DA 5B            [12] 1018 	anl	a,r3
   01DB F5 80         [12] 1019 	mov	_P0,a
                     0148  1020 	C$lcd.h$119$2$36 ==.
                           1021 ;	lcd.h:119: RS=1;
   01DD D2 80         [12] 1022 	setb	_P0_0
                     014A  1023 	C$lcd.h$120$2$36 ==.
                           1024 ;	lcd.h:120: EN=1;
   01DF D2 82         [12] 1025 	setb	_P0_2
                     014C  1026 	C$lcd.h$121$2$36 ==.
                           1027 ;	lcd.h:121: atraso(15);
   01E1 75 82 0F      [24] 1028 	mov	dpl,#0x0F
   01E4 C0 07         [24] 1029 	push	ar7
   01E6 C0 06         [24] 1030 	push	ar6
   01E8 C0 05         [24] 1031 	push	ar5
   01EA C0 04         [24] 1032 	push	ar4
   01EC 12 00 95      [24] 1033 	lcall	_atraso
   01EF D0 04         [24] 1034 	pop	ar4
   01F1 D0 05         [24] 1035 	pop	ar5
   01F3 D0 06         [24] 1036 	pop	ar6
   01F5 D0 07         [24] 1037 	pop	ar7
                     0162  1038 	C$lcd.h$122$2$36 ==.
                           1039 ;	lcd.h:122: EN=0;
   01F7 C2 82         [12] 1040 	clr	_P0_2
                     0164  1041 	C$lcd.h$123$2$36 ==.
                           1042 ;	lcd.h:123: P0=(*msg<<4)&0xF0;/*nibble menos significativo*/
   01F9 8D 82         [24] 1043 	mov	dpl,r5
   01FB 8E 83         [24] 1044 	mov	dph,r6
   01FD 8F F0         [24] 1045 	mov	b,r7
   01FF 12 06 98      [24] 1046 	lcall	__gptrget
   0202 FB            [12] 1047 	mov	r3,a
   0203 A3            [24] 1048 	inc	dptr
   0204 AD 82         [24] 1049 	mov	r5,dpl
   0206 AE 83         [24] 1050 	mov	r6,dph
   0208 EB            [12] 1051 	mov	a,r3
   0209 C4            [12] 1052 	swap	a
   020A 54 F0         [12] 1053 	anl	a,#0xF0
   020C FB            [12] 1054 	mov	r3,a
   020D 74 F0         [12] 1055 	mov	a,#0xF0
   020F 5B            [12] 1056 	anl	a,r3
   0210 F5 80         [12] 1057 	mov	_P0,a
                     017D  1058 	C$lcd.h$124$2$36 ==.
                           1059 ;	lcd.h:124: RS=1;
   0212 D2 80         [12] 1060 	setb	_P0_0
                     017F  1061 	C$lcd.h$125$2$36 ==.
                           1062 ;	lcd.h:125: EN=1;
   0214 D2 82         [12] 1063 	setb	_P0_2
                     0181  1064 	C$lcd.h$126$2$36 ==.
                           1065 ;	lcd.h:126: atraso(15);
   0216 75 82 0F      [24] 1066 	mov	dpl,#0x0F
   0219 C0 07         [24] 1067 	push	ar7
   021B C0 06         [24] 1068 	push	ar6
   021D C0 05         [24] 1069 	push	ar5
   021F C0 04         [24] 1070 	push	ar4
   0221 12 00 95      [24] 1071 	lcall	_atraso
   0224 D0 04         [24] 1072 	pop	ar4
   0226 D0 05         [24] 1073 	pop	ar5
   0228 D0 06         [24] 1074 	pop	ar6
   022A D0 07         [24] 1075 	pop	ar7
                     0197  1076 	C$lcd.h$127$2$36 ==.
                           1077 ;	lcd.h:127: EN=0;
   022C C2 82         [12] 1078 	clr	_P0_2
                     0199  1079 	C$lcd.h$128$2$36 ==.
                           1080 ;	lcd.h:128: msg++;
                     0199  1081 	C$lcd.h$129$2$36 ==.
                           1082 ;	lcd.h:129: i++;
   022E 0C            [12] 1083 	inc	r4
                     019A  1084 	C$lcd.h$130$2$36 ==.
                           1085 ;	lcd.h:130: if(i==15)
   022F BC 0F 9A      [24] 1086 	cjne	r4,#0x0F,00103$
                     019D  1087 	C$lcd.h$131$2$36 ==.
                           1088 ;	lcd.h:131: posicionaCursor4bits(0,2);/*vai para linha 2*/
   0232 75 09 02      [24] 1089 	mov	_posicionaCursor4bits_PARM_2,#0x02
   0235 75 82 00      [24] 1090 	mov	dpl,#0x00
   0238 C0 07         [24] 1091 	push	ar7
   023A C0 06         [24] 1092 	push	ar6
   023C C0 05         [24] 1093 	push	ar5
   023E C0 04         [24] 1094 	push	ar4
   0240 12 02 92      [24] 1095 	lcall	_posicionaCursor4bits
   0243 D0 04         [24] 1096 	pop	ar4
   0245 D0 05         [24] 1097 	pop	ar5
   0247 D0 06         [24] 1098 	pop	ar6
   0249 D0 07         [24] 1099 	pop	ar7
   024B 02 01 CC      [24] 1100 	ljmp	00103$
   024E                    1101 00105$:
                     01B9  1102 	C$lcd.h$133$1$35 ==.
                           1103 ;	lcd.h:133: return;
                     01B9  1104 	C$lcd.h$134$1$35 ==.
                     01B9  1105 	XG$imprimeFrase4bits$0$0 ==.
   024E 22            [24] 1106 	ret
                           1107 ;------------------------------------------------------------
                           1108 ;Allocation info for local variables in function 'imprimeInst4bits'
                           1109 ;------------------------------------------------------------
                           1110 ;msg                       Allocated to registers r7 
                           1111 ;------------------------------------------------------------
                     01BA  1112 	G$imprimeInst4bits$0$0 ==.
                     01BA  1113 	C$lcd.h$136$1$35 ==.
                           1114 ;	lcd.h:136: void imprimeInst4bits(unsigned char msg){
                           1115 ;	-----------------------------------------
                           1116 ;	 function imprimeInst4bits
                           1117 ;	-----------------------------------------
   024F                    1118 _imprimeInst4bits:
   024F AF 82         [24] 1119 	mov	r7,dpl
                     01BC  1120 	C$lcd.h$137$1$38 ==.
                           1121 ;	lcd.h:137: P0=msg&0xF0;    		/*nibble mais significativo*/
   0251 74 F0         [12] 1122 	mov	a,#0xF0
   0253 5F            [12] 1123 	anl	a,r7
   0254 F5 80         [12] 1124 	mov	_P0,a
                     01C1  1125 	C$lcd.h$138$1$38 ==.
                           1126 ;	lcd.h:138: EN=1;
   0256 D2 82         [12] 1127 	setb	_P0_2
                     01C3  1128 	C$lcd.h$139$1$38 ==.
                           1129 ;	lcd.h:139: atraso(15);
   0258 75 82 0F      [24] 1130 	mov	dpl,#0x0F
   025B C0 07         [24] 1131 	push	ar7
   025D 12 00 95      [24] 1132 	lcall	_atraso
   0260 D0 07         [24] 1133 	pop	ar7
                     01CD  1134 	C$lcd.h$140$1$38 ==.
                           1135 ;	lcd.h:140: EN=0;
   0262 C2 82         [12] 1136 	clr	_P0_2
                     01CF  1137 	C$lcd.h$141$1$38 ==.
                           1138 ;	lcd.h:141: P0=(msg<<4)&0xF0;		/*nibble menos significativo*/
   0264 EF            [12] 1139 	mov	a,r7
   0265 C4            [12] 1140 	swap	a
   0266 54 F0         [12] 1141 	anl	a,#0xF0
   0268 FF            [12] 1142 	mov	r7,a
   0269 74 F0         [12] 1143 	mov	a,#0xF0
   026B 5F            [12] 1144 	anl	a,r7
   026C F5 80         [12] 1145 	mov	_P0,a
                     01D9  1146 	C$lcd.h$142$1$38 ==.
                           1147 ;	lcd.h:142: EN=1;
   026E D2 82         [12] 1148 	setb	_P0_2
                     01DB  1149 	C$lcd.h$143$1$38 ==.
                           1150 ;	lcd.h:143: atraso(15);
   0270 75 82 0F      [24] 1151 	mov	dpl,#0x0F
   0273 12 00 95      [24] 1152 	lcall	_atraso
                     01E1  1153 	C$lcd.h$144$1$38 ==.
                           1154 ;	lcd.h:144: EN=0;
   0276 C2 82         [12] 1155 	clr	_P0_2
                     01E3  1156 	C$lcd.h$145$1$38 ==.
                           1157 ;	lcd.h:145: return;
                     01E3  1158 	C$lcd.h$146$1$38 ==.
                     01E3  1159 	XG$imprimeInst4bits$0$0 ==.
   0278 22            [24] 1160 	ret
                           1161 ;------------------------------------------------------------
                           1162 ;Allocation info for local variables in function 'initLCD4bits'
                           1163 ;------------------------------------------------------------
                     01E4  1164 	G$initLCD4bits$0$0 ==.
                     01E4  1165 	C$lcd.h$148$1$38 ==.
                           1166 ;	lcd.h:148: void initLCD4bits(void){
                           1167 ;	-----------------------------------------
                           1168 ;	 function initLCD4bits
                           1169 ;	-----------------------------------------
   0279                    1170 _initLCD4bits:
                     01E4  1171 	C$lcd.h$149$1$40 ==.
                           1172 ;	lcd.h:149: imprimeInst(0x28);		/*duas linhas e 4bits. Instrução em 8bits*/
   0279 75 82 28      [24] 1173 	mov	dpl,#0x28
   027C 12 01 5D      [24] 1174 	lcall	_imprimeInst
                     01EA  1175 	C$lcd.h$150$1$40 ==.
                           1176 ;	lcd.h:150: imprimeInst4bits(0x0F);		/*liga LCD e pisca cursor*/
   027F 75 82 0F      [24] 1177 	mov	dpl,#0x0F
   0282 12 02 4F      [24] 1178 	lcall	_imprimeInst4bits
                     01F0  1179 	C$lcd.h$151$1$40 ==.
                           1180 ;	lcd.h:151: imprimeInst4bits(0x06);		/*LCD para receber e cursor move para direita*/
   0285 75 82 06      [24] 1181 	mov	dpl,#0x06
   0288 12 02 4F      [24] 1182 	lcall	_imprimeInst4bits
                     01F6  1183 	C$lcd.h$152$1$40 ==.
                           1184 ;	lcd.h:152: atraso(100);
   028B 75 82 64      [24] 1185 	mov	dpl,#0x64
   028E 12 00 95      [24] 1186 	lcall	_atraso
                     01FC  1187 	C$lcd.h$153$1$40 ==.
                           1188 ;	lcd.h:153: return;
                     01FC  1189 	C$lcd.h$154$1$40 ==.
                     01FC  1190 	XG$initLCD4bits$0$0 ==.
   0291 22            [24] 1191 	ret
                           1192 ;------------------------------------------------------------
                           1193 ;Allocation info for local variables in function 'posicionaCursor4bits'
                           1194 ;------------------------------------------------------------
                           1195 ;lin                       Allocated with name '_posicionaCursor4bits_PARM_2'
                           1196 ;end                       Allocated to registers r7 
                           1197 ;------------------------------------------------------------
                     01FD  1198 	G$posicionaCursor4bits$0$0 ==.
                     01FD  1199 	C$lcd.h$156$1$40 ==.
                           1200 ;	lcd.h:156: void posicionaCursor4bits(unsigned char end, unsigned char lin){	/*end=endereço em que se deseja imprimir.
                           1201 ;	-----------------------------------------
                           1202 ;	 function posicionaCursor4bits
                           1203 ;	-----------------------------------------
   0292                    1204 _posicionaCursor4bits:
   0292 AF 82         [24] 1205 	mov	r7,dpl
                     01FF  1206 	C$lcd.h$160$2$43 ==.
                           1207 ;	lcd.h:160: end=end+0x80;
   0294 74 80         [12] 1208 	mov	a,#0x80
   0296 2F            [12] 1209 	add	a,r7
                     0202  1210 	C$lcd.h$161$2$43 ==.
                           1211 ;	lcd.h:161: imprimeInst4bits(end);
   0297 FF            [12] 1212 	mov	r7,a
   0298 F5 82         [12] 1213 	mov	dpl,a
   029A C0 07         [24] 1214 	push	ar7
   029C 12 02 4F      [24] 1215 	lcall	_imprimeInst4bits
   029F D0 07         [24] 1216 	pop	ar7
                     020C  1217 	C$lcd.h$164$2$44 ==.
                           1218 ;	lcd.h:164: end=end+0xC0;			/*primeira posição da seg.linha=40h*/
   02A1 74 C0         [12] 1219 	mov	a,#0xC0
   02A3 2F            [12] 1220 	add	a,r7
                     020F  1221 	C$lcd.h$165$2$44 ==.
                           1222 ;	lcd.h:165: imprimeInst4bits(end);
   02A4 F5 82         [12] 1223 	mov	dpl,a
   02A6 12 02 4F      [24] 1224 	lcall	_imprimeInst4bits
                     0214  1225 	C$lcd.h$167$1$42 ==.
                           1226 ;	lcd.h:167: return;
                     0214  1227 	C$lcd.h$168$1$42 ==.
                     0214  1228 	XG$posicionaCursor4bits$0$0 ==.
   02A9 22            [24] 1229 	ret
                           1230 ;------------------------------------------------------------
                           1231 ;Allocation info for local variables in function 'estourot1'
                           1232 ;------------------------------------------------------------
                     0215  1233 	G$estourot1$0$0 ==.
                     0215  1234 	C$frequencimetro_simples.c$17$1$42 ==.
                           1235 ;	frequencimetro_simples.c:17: void estourot1(void)__interrupt(3){ //overflow Timer1
                           1236 ;	-----------------------------------------
                           1237 ;	 function estourot1
                           1238 ;	-----------------------------------------
   02AA                    1239 _estourot1:
                     0215  1240 	C$frequencimetro_simples.c$18$1$48 ==.
                           1241 ;	frequencimetro_simples.c:18: estouros++;//estouros de TH1
   02AA 05 0B         [12] 1242 	inc	_estouros
                     0217  1243 	C$frequencimetro_simples.c$19$1$48 ==.
                           1244 ;	frequencimetro_simples.c:19: TF1=0;
   02AC C2 8F         [12] 1245 	clr	_TF1
                     0219  1246 	C$frequencimetro_simples.c$20$1$48 ==.
                     0219  1247 	XG$estourot1$0$0 ==.
   02AE 32            [24] 1248 	reti
                           1249 ;	eliminated unneeded mov psw,# (no regs used in bank)
                           1250 ;	eliminated unneeded push/pop psw
                           1251 ;	eliminated unneeded push/pop dpl
                           1252 ;	eliminated unneeded push/pop dph
                           1253 ;	eliminated unneeded push/pop b
                           1254 ;	eliminated unneeded push/pop acc
                           1255 ;------------------------------------------------------------
                           1256 ;Allocation info for local variables in function 'main'
                           1257 ;------------------------------------------------------------
                           1258 ;tempo                     Allocated to registers r6 
                           1259 ;i                         Allocated to registers r7 
                           1260 ;freq                      Allocated to registers r3 r6 
                           1261 ;sloc0                     Allocated with name '_main_sloc0_1_0'
                           1262 ;------------------------------------------------------------
                     021A  1263 	G$main$0$0 ==.
                     021A  1264 	C$frequencimetro_simples.c$22$1$48 ==.
                           1265 ;	frequencimetro_simples.c:22: void main(void){
                           1266 ;	-----------------------------------------
                           1267 ;	 function main
                           1268 ;	-----------------------------------------
   02AF                    1269 _main:
                     021A  1270 	C$frequencimetro_simples.c$27$1$50 ==.
                           1271 ;	frequencimetro_simples.c:27: TMOD=0x51; //timer1 como contador 16bits, timer0 como timer 16bits
   02AF 75 89 51      [24] 1272 	mov	_TMOD,#0x51
                     021D  1273 	C$frequencimetro_simples.c$28$1$50 ==.
                           1274 ;	frequencimetro_simples.c:28: EA = 1;
   02B2 D2 AF         [12] 1275 	setb	_EA
                     021F  1276 	C$frequencimetro_simples.c$29$1$50 ==.
                           1277 ;	frequencimetro_simples.c:29: initLCD4bits();
   02B4 12 02 79      [24] 1278 	lcall	_initLCD4bits
                     0222  1279 	C$frequencimetro_simples.c$31$1$50 ==.
                           1280 ;	frequencimetro_simples.c:31: while(1){
   02B7                    1281 00110$:
                     0222  1282 	C$frequencimetro_simples.c$32$2$51 ==.
                           1283 ;	frequencimetro_simples.c:32: apagaLCD4bits;
   02B7 75 82 01      [24] 1284 	mov	dpl,#0x01
   02BA 12 02 4F      [24] 1285 	lcall	_imprimeInst4bits
                     0228  1286 	C$frequencimetro_simples.c$33$2$51 ==.
                           1287 ;	frequencimetro_simples.c:33: for(i=0; i<6; i++)
   02BD 7F 00         [12] 1288 	mov	r7,#0x00
   02BF                    1289 00112$:
                     022A  1290 	C$frequencimetro_simples.c$34$2$51 ==.
                           1291 ;	frequencimetro_simples.c:34: ascii[i]=48; //reinicia vetor da frequencia em ascii
   02BF EF            [12] 1292 	mov	a,r7
   02C0 24 0C         [12] 1293 	add	a,#_ascii
   02C2 F8            [12] 1294 	mov	r0,a
   02C3 76 30         [12] 1295 	mov	@r0,#0x30
                     0230  1296 	C$frequencimetro_simples.c$33$2$51 ==.
                           1297 ;	frequencimetro_simples.c:33: for(i=0; i<6; i++)
   02C5 0F            [12] 1298 	inc	r7
   02C6 C3            [12] 1299 	clr	c
   02C7 EF            [12] 1300 	mov	a,r7
   02C8 64 80         [12] 1301 	xrl	a,#0x80
   02CA 94 86         [12] 1302 	subb	a,#0x86
   02CC 40 F1         [24] 1303 	jc	00112$
                     0239  1304 	C$frequencimetro_simples.c$35$2$51 ==.
                           1305 ;	frequencimetro_simples.c:35: estouros=0;
   02CE 75 0B 00      [24] 1306 	mov	_estouros,#0x00
                     023C  1307 	C$frequencimetro_simples.c$37$2$51 ==.
                           1308 ;	frequencimetro_simples.c:37: tempo=20; //scaler pro timer que conta 1s (255 *(255-59)*20)
   02D1 7E 14         [12] 1309 	mov	r6,#0x14
                     023E  1310 	C$frequencimetro_simples.c$38$2$51 ==.
                           1311 ;	frequencimetro_simples.c:38: TH1=0;
   02D3 75 8D 00      [24] 1312 	mov	_TH1,#0x00
                     0241  1313 	C$frequencimetro_simples.c$39$2$51 ==.
                           1314 ;	frequencimetro_simples.c:39: TL1=0;
   02D6 75 8B 00      [24] 1315 	mov	_TL1,#0x00
                     0244  1316 	C$frequencimetro_simples.c$40$2$51 ==.
                           1317 ;	frequencimetro_simples.c:40: TR1=1;//começa contagem pulsos
   02D9 D2 8E         [12] 1318 	setb	_TR1
                     0246  1319 	C$frequencimetro_simples.c$41$2$51 ==.
                           1320 ;	frequencimetro_simples.c:41: TH0=59;//janela de 1 segundo
   02DB 75 8C 3B      [24] 1321 	mov	_TH0,#0x3B
                     0249  1322 	C$frequencimetro_simples.c$42$2$51 ==.
                           1323 ;	frequencimetro_simples.c:42: TR0=1;//começa contagem tempo
   02DE D2 8C         [12] 1324 	setb	_TR0
                     024B  1325 	C$frequencimetro_simples.c$46$2$51 ==.
                           1326 ;	frequencimetro_simples.c:46: while(tempo>0){
   02E0                    1327 00105$:
   02E0 EE            [12] 1328 	mov	a,r6
   02E1 60 08         [24] 1329 	jz	00107$
                     024E  1330 	C$frequencimetro_simples.c$47$3$52 ==.
                           1331 ;	frequencimetro_simples.c:47: while(!TF0);
   02E3                    1332 00102$:
                     024E  1333 	C$frequencimetro_simples.c$48$3$52 ==.
                           1334 ;	frequencimetro_simples.c:48: TF0=0;
   02E3 10 8D 02      [24] 1335 	jbc	_TF0,00145$
   02E6 80 FB         [24] 1336 	sjmp	00102$
   02E8                    1337 00145$:
                     0253  1338 	C$frequencimetro_simples.c$49$3$52 ==.
                           1339 ;	frequencimetro_simples.c:49: tempo--;
   02E8 1E            [12] 1340 	dec	r6
   02E9 80 F5         [24] 1341 	sjmp	00105$
   02EB                    1342 00107$:
                     0256  1343 	C$frequencimetro_simples.c$51$2$51 ==.
                           1344 ;	frequencimetro_simples.c:51: TR1=0; //para contagens
   02EB C2 8E         [12] 1345 	clr	_TR1
                     0258  1346 	C$frequencimetro_simples.c$52$2$51 ==.
                           1347 ;	frequencimetro_simples.c:52: TR0=0;
   02ED C2 8C         [12] 1348 	clr	_TR0
                     025A  1349 	C$frequencimetro_simples.c$55$2$51 ==.
                           1350 ;	frequencimetro_simples.c:55: freq=65535*estouros+256*TH1+TL1;
   02EF 85 0B 23      [24] 1351 	mov	__mullong_PARM_2,_estouros
   02F2 75 24 00      [24] 1352 	mov	(__mullong_PARM_2 + 1),#0x00
   02F5 75 25 00      [24] 1353 	mov	(__mullong_PARM_2 + 2),#0x00
   02F8 75 26 00      [24] 1354 	mov	(__mullong_PARM_2 + 3),#0x00
   02FB 90 FF FF      [24] 1355 	mov	dptr,#0xFFFF
   02FE E4            [12] 1356 	clr	a
   02FF F5 F0         [12] 1357 	mov	b,a
   0301 12 05 89      [24] 1358 	lcall	__mullong
   0304 85 82 12      [24] 1359 	mov	_main_sloc0_1_0,dpl
   0307 85 83 13      [24] 1360 	mov	(_main_sloc0_1_0 + 1),dph
   030A 85 F0 14      [24] 1361 	mov	(_main_sloc0_1_0 + 2),b
   030D F5 15         [12] 1362 	mov	(_main_sloc0_1_0 + 3),a
   030F AE 8D         [24] 1363 	mov	r6,_TH1
   0311 7A 00         [12] 1364 	mov	r2,#0x00
   0313 EE            [12] 1365 	mov	a,r6
   0314 33            [12] 1366 	rlc	a
   0315 95 E0         [12] 1367 	subb	a,acc
   0317 FD            [12] 1368 	mov	r5,a
   0318 FC            [12] 1369 	mov	r4,a
   0319 EA            [12] 1370 	mov	a,r2
   031A 25 12         [12] 1371 	add	a,_main_sloc0_1_0
   031C F5 12         [12] 1372 	mov	_main_sloc0_1_0,a
   031E EE            [12] 1373 	mov	a,r6
   031F 35 13         [12] 1374 	addc	a,(_main_sloc0_1_0 + 1)
   0321 F5 13         [12] 1375 	mov	(_main_sloc0_1_0 + 1),a
   0323 ED            [12] 1376 	mov	a,r5
   0324 35 14         [12] 1377 	addc	a,(_main_sloc0_1_0 + 2)
   0326 F5 14         [12] 1378 	mov	(_main_sloc0_1_0 + 2),a
   0328 EC            [12] 1379 	mov	a,r4
   0329 35 15         [12] 1380 	addc	a,(_main_sloc0_1_0 + 3)
   032B F5 15         [12] 1381 	mov	(_main_sloc0_1_0 + 3),a
   032D AB 8B         [24] 1382 	mov	r3,_TL1
   032F E4            [12] 1383 	clr	a
   0330 FE            [12] 1384 	mov	r6,a
   0331 33            [12] 1385 	rlc	a
   0332 95 E0         [12] 1386 	subb	a,acc
   0334 FD            [12] 1387 	mov	r5,a
   0335 FC            [12] 1388 	mov	r4,a
   0336 EB            [12] 1389 	mov	a,r3
   0337 25 12         [12] 1390 	add	a,_main_sloc0_1_0
   0339 FB            [12] 1391 	mov	r3,a
   033A EE            [12] 1392 	mov	a,r6
   033B 35 13         [12] 1393 	addc	a,(_main_sloc0_1_0 + 1)
   033D FE            [12] 1394 	mov	r6,a
   033E ED            [12] 1395 	mov	a,r5
   033F 35 14         [12] 1396 	addc	a,(_main_sloc0_1_0 + 2)
   0341 EC            [12] 1397 	mov	a,r4
   0342 35 15         [12] 1398 	addc	a,(_main_sloc0_1_0 + 3)
                     02AF  1399 	C$frequencimetro_simples.c$58$2$51 ==.
                           1400 ;	frequencimetro_simples.c:58: imprimeFrase4bits("f: ");
   0344 90 06 B8      [24] 1401 	mov	dptr,#__str_0
   0347 75 F0 80      [24] 1402 	mov	b,#0x80
   034A C0 06         [24] 1403 	push	ar6
   034C C0 03         [24] 1404 	push	ar3
   034E 12 01 C4      [24] 1405 	lcall	_imprimeFrase4bits
   0351 D0 03         [24] 1406 	pop	ar3
   0353 D0 06         [24] 1407 	pop	ar6
                     02C0  1408 	C$frequencimetro_simples.c$59$2$51 ==.
                           1409 ;	frequencimetro_simples.c:59: asciiNum(freq);
   0355 7D 00         [12] 1410 	mov	r5,#0x00
   0357 7C 00         [12] 1411 	mov	r4,#0x00
   0359 8B 82         [24] 1412 	mov	dpl,r3
   035B 8E 83         [24] 1413 	mov	dph,r6
   035D 8D F0         [24] 1414 	mov	b,r5
   035F EC            [12] 1415 	mov	a,r4
   0360 12 03 D8      [24] 1416 	lcall	_asciiNum
                     02CE  1417 	C$frequencimetro_simples.c$60$2$51 ==.
                           1418 ;	frequencimetro_simples.c:60: for(i=ndigitos; i>=0; i--)
   0363 AF 0A         [24] 1419 	mov	r7,_ndigitos
   0365                    1420 00115$:
   0365 EF            [12] 1421 	mov	a,r7
   0366 30 E7 03      [24] 1422 	jnb	acc.7,00146$
   0369 02 02 B7      [24] 1423 	ljmp	00110$
   036C                    1424 00146$:
                     02D7  1425 	C$frequencimetro_simples.c$61$2$51 ==.
                           1426 ;	frequencimetro_simples.c:61: imprimeChar4bits(ascii[i]);
   036C EF            [12] 1427 	mov	a,r7
   036D 24 0C         [12] 1428 	add	a,#_ascii
   036F F9            [12] 1429 	mov	r1,a
   0370 87 82         [24] 1430 	mov	dpl,@r1
   0372 C0 07         [24] 1431 	push	ar7
   0374 12 01 96      [24] 1432 	lcall	_imprimeChar4bits
   0377 D0 07         [24] 1433 	pop	ar7
                     02E4  1434 	C$frequencimetro_simples.c$60$2$51 ==.
                           1435 ;	frequencimetro_simples.c:60: for(i=ndigitos; i>=0; i--)
   0379 1F            [12] 1436 	dec	r7
   037A 80 E9         [24] 1437 	sjmp	00115$
                     02E7  1438 	C$frequencimetro_simples.c$63$1$50 ==.
                     02E7  1439 	XG$main$0$0 ==.
   037C 22            [24] 1440 	ret
                           1441 ;------------------------------------------------------------
                           1442 ;Allocation info for local variables in function 'pow'
                           1443 ;------------------------------------------------------------
                           1444 ;pot                       Allocated with name '_pow_PARM_2'
                           1445 ;base                      Allocated to registers r4 r5 r6 r7 
                           1446 ;i                         Allocated to registers r3 
                           1447 ;resp                      Allocated with name '_pow_resp_1_54'
                           1448 ;------------------------------------------------------------
                     02E8  1449 	G$pow$0$0 ==.
                     02E8  1450 	C$frequencimetro_simples.c$65$1$50 ==.
                           1451 ;	frequencimetro_simples.c:65: long int pow(long int base, unsigned char pot){
                           1452 ;	-----------------------------------------
                           1453 ;	 function pow
                           1454 ;	-----------------------------------------
   037D                    1455 _pow:
   037D AC 82         [24] 1456 	mov	r4,dpl
   037F AD 83         [24] 1457 	mov	r5,dph
   0381 AE F0         [24] 1458 	mov	r6,b
   0383 FF            [12] 1459 	mov	r7,a
                     02EF  1460 	C$frequencimetro_simples.c$67$1$50 ==.
                           1461 ;	frequencimetro_simples.c:67: long int resp=base;
   0384 8C 17         [24] 1462 	mov	_pow_resp_1_54,r4
   0386 8D 18         [24] 1463 	mov	(_pow_resp_1_54 + 1),r5
   0388 8E 19         [24] 1464 	mov	(_pow_resp_1_54 + 2),r6
   038A 8F 1A         [24] 1465 	mov	(_pow_resp_1_54 + 3),r7
                     02F7  1466 	C$frequencimetro_simples.c$69$1$54 ==.
                           1467 ;	frequencimetro_simples.c:69: for(i=1; i<pot; i++){
   038C 7B 01         [12] 1468 	mov	r3,#0x01
   038E                    1469 00103$:
   038E C3            [12] 1470 	clr	c
   038F EB            [12] 1471 	mov	a,r3
   0390 95 16         [12] 1472 	subb	a,_pow_PARM_2
   0392 50 38         [24] 1473 	jnc	00101$
                     02FF  1474 	C$frequencimetro_simples.c$70$1$54 ==.
                           1475 ;	frequencimetro_simples.c:70: resp*=base;
   0394 8C 23         [24] 1476 	mov	__mullong_PARM_2,r4
   0396 8D 24         [24] 1477 	mov	(__mullong_PARM_2 + 1),r5
   0398 8E 25         [24] 1478 	mov	(__mullong_PARM_2 + 2),r6
   039A 8F 26         [24] 1479 	mov	(__mullong_PARM_2 + 3),r7
   039C 85 17 82      [24] 1480 	mov	dpl,_pow_resp_1_54
   039F 85 18 83      [24] 1481 	mov	dph,(_pow_resp_1_54 + 1)
   03A2 85 19 F0      [24] 1482 	mov	b,(_pow_resp_1_54 + 2)
   03A5 E5 1A         [12] 1483 	mov	a,(_pow_resp_1_54 + 3)
   03A7 C0 07         [24] 1484 	push	ar7
   03A9 C0 06         [24] 1485 	push	ar6
   03AB C0 05         [24] 1486 	push	ar5
   03AD C0 04         [24] 1487 	push	ar4
   03AF C0 03         [24] 1488 	push	ar3
   03B1 12 05 89      [24] 1489 	lcall	__mullong
   03B4 85 82 17      [24] 1490 	mov	_pow_resp_1_54,dpl
   03B7 85 83 18      [24] 1491 	mov	(_pow_resp_1_54 + 1),dph
   03BA 85 F0 19      [24] 1492 	mov	(_pow_resp_1_54 + 2),b
   03BD F5 1A         [12] 1493 	mov	(_pow_resp_1_54 + 3),a
   03BF D0 03         [24] 1494 	pop	ar3
   03C1 D0 04         [24] 1495 	pop	ar4
   03C3 D0 05         [24] 1496 	pop	ar5
   03C5 D0 06         [24] 1497 	pop	ar6
   03C7 D0 07         [24] 1498 	pop	ar7
                     0334  1499 	C$frequencimetro_simples.c$69$1$54 ==.
                           1500 ;	frequencimetro_simples.c:69: for(i=1; i<pot; i++){
   03C9 0B            [12] 1501 	inc	r3
   03CA 80 C2         [24] 1502 	sjmp	00103$
   03CC                    1503 00101$:
                     0337  1504 	C$frequencimetro_simples.c$72$1$54 ==.
                           1505 ;	frequencimetro_simples.c:72: return(resp);
   03CC 85 17 82      [24] 1506 	mov	dpl,_pow_resp_1_54
   03CF 85 18 83      [24] 1507 	mov	dph,(_pow_resp_1_54 + 1)
   03D2 85 19 F0      [24] 1508 	mov	b,(_pow_resp_1_54 + 2)
   03D5 E5 1A         [12] 1509 	mov	a,(_pow_resp_1_54 + 3)
                     0342  1510 	C$frequencimetro_simples.c$73$1$54 ==.
                     0342  1511 	XG$pow$0$0 ==.
   03D7 22            [24] 1512 	ret
                           1513 ;------------------------------------------------------------
                           1514 ;Allocation info for local variables in function 'asciiNum'
                           1515 ;------------------------------------------------------------
                           1516 ;num                       Allocated with name '_asciiNum_num_1_56'
                           1517 ;i                         Allocated to registers r3 
                           1518 ;a                         Allocated with name '_asciiNum_a_1_57'
                           1519 ;------------------------------------------------------------
                     0343  1520 	G$asciiNum$0$0 ==.
                     0343  1521 	C$frequencimetro_simples.c$75$1$54 ==.
                           1522 ;	frequencimetro_simples.c:75: void asciiNum (long int num){//Imprime número decimal (ASCII), ord=ordem da base 10
                           1523 ;	-----------------------------------------
                           1524 ;	 function asciiNum
                           1525 ;	-----------------------------------------
   03D8                    1526 _asciiNum:
   03D8 85 82 1B      [24] 1527 	mov	_asciiNum_num_1_56,dpl
   03DB 85 83 1C      [24] 1528 	mov	(_asciiNum_num_1_56 + 1),dph
   03DE 85 F0 1D      [24] 1529 	mov	(_asciiNum_num_1_56 + 2),b
   03E1 F5 1E         [12] 1530 	mov	(_asciiNum_num_1_56 + 3),a
                     034E  1531 	C$frequencimetro_simples.c$76$1$54 ==.
                           1532 ;	frequencimetro_simples.c:76: char i=5;
   03E3 7B 05         [12] 1533 	mov	r3,#0x05
                     0350  1534 	C$frequencimetro_simples.c$79$1$57 ==.
                           1535 ;	frequencimetro_simples.c:79: ndigitos=0;
   03E5 75 0A 00      [24] 1536 	mov	_ndigitos,#0x00
                     0353  1537 	C$frequencimetro_simples.c$80$3$59 ==.
                           1538 ;	frequencimetro_simples.c:80: while(i>0){
   03E8                    1539 00105$:
   03E8 C3            [12] 1540 	clr	c
   03E9 E4            [12] 1541 	clr	a
   03EA 64 80         [12] 1542 	xrl	a,#0x80
   03EC 8B F0         [24] 1543 	mov	b,r3
   03EE 63 F0 80      [24] 1544 	xrl	b,#0x80
   03F1 95 F0         [12] 1545 	subb	a,b
   03F3 40 03         [24] 1546 	jc	00122$
   03F5 02 04 81      [24] 1547 	ljmp	00107$
   03F8                    1548 00122$:
                     0363  1549 	C$frequencimetro_simples.c$81$2$58 ==.
                           1550 ;	frequencimetro_simples.c:81: a=pow(10,i);
   03F8 8B 16         [24] 1551 	mov	_pow_PARM_2,r3
   03FA 90 00 0A      [24] 1552 	mov	dptr,#(0x0A&0x00ff)
   03FD E4            [12] 1553 	clr	a
   03FE F5 F0         [12] 1554 	mov	b,a
   0400 C0 03         [24] 1555 	push	ar3
   0402 12 03 7D      [24] 1556 	lcall	_pow
   0405 85 82 1F      [24] 1557 	mov	_asciiNum_a_1_57,dpl
   0408 85 83 20      [24] 1558 	mov	(_asciiNum_a_1_57 + 1),dph
   040B 85 F0 21      [24] 1559 	mov	(_asciiNum_a_1_57 + 2),b
   040E F5 22         [12] 1560 	mov	(_asciiNum_a_1_57 + 3),a
                     037B  1561 	C$frequencimetro_simples.c$82$1$57 ==.
                           1562 ;	frequencimetro_simples.c:82: if(num/a>0){
   0410 85 1F 23      [24] 1563 	mov	__divslong_PARM_2,_asciiNum_a_1_57
   0413 85 20 24      [24] 1564 	mov	(__divslong_PARM_2 + 1),(_asciiNum_a_1_57 + 1)
   0416 85 21 25      [24] 1565 	mov	(__divslong_PARM_2 + 2),(_asciiNum_a_1_57 + 2)
   0419 85 22 26      [24] 1566 	mov	(__divslong_PARM_2 + 3),(_asciiNum_a_1_57 + 3)
   041C 85 1B 82      [24] 1567 	mov	dpl,_asciiNum_num_1_56
   041F 85 1C 83      [24] 1568 	mov	dph,(_asciiNum_num_1_56 + 1)
   0422 85 1D F0      [24] 1569 	mov	b,(_asciiNum_num_1_56 + 2)
   0425 E5 1E         [12] 1570 	mov	a,(_asciiNum_num_1_56 + 3)
   0427 12 06 46      [24] 1571 	lcall	__divslong
   042A AA 82         [24] 1572 	mov	r2,dpl
   042C AD 83         [24] 1573 	mov	r5,dph
   042E AE F0         [24] 1574 	mov	r6,b
   0430 FF            [12] 1575 	mov	r7,a
   0431 D0 03         [24] 1576 	pop	ar3
   0433 C3            [12] 1577 	clr	c
   0434 E4            [12] 1578 	clr	a
   0435 9A            [12] 1579 	subb	a,r2
   0436 E4            [12] 1580 	clr	a
   0437 9D            [12] 1581 	subb	a,r5
   0438 E4            [12] 1582 	clr	a
   0439 9E            [12] 1583 	subb	a,r6
   043A E4            [12] 1584 	clr	a
   043B 64 80         [12] 1585 	xrl	a,#0x80
   043D 8F F0         [24] 1586 	mov	b,r7
   043F 63 F0 80      [24] 1587 	xrl	b,#0x80
   0442 95 F0         [12] 1588 	subb	a,b
   0444 50 37         [24] 1589 	jnc	00104$
                     03B1  1590 	C$frequencimetro_simples.c$83$3$59 ==.
                           1591 ;	frequencimetro_simples.c:83: ascii[i]=num/a+48; //ascii do digito
   0446 EB            [12] 1592 	mov	a,r3
   0447 24 0C         [12] 1593 	add	a,#_ascii
   0449 F9            [12] 1594 	mov	r1,a
   044A 74 30         [12] 1595 	mov	a,#0x30
   044C 2A            [12] 1596 	add	a,r2
   044D F7            [12] 1597 	mov	@r1,a
                     03B9  1598 	C$frequencimetro_simples.c$84$3$59 ==.
                           1599 ;	frequencimetro_simples.c:84: if(ndigitos==0) //se ndigitos ainda não foi alterado
   044E E5 0A         [12] 1600 	mov	a,_ndigitos
   0450 70 02         [24] 1601 	jnz	00102$
                     03BD  1602 	C$frequencimetro_simples.c$85$3$59 ==.
                           1603 ;	frequencimetro_simples.c:85: ndigitos=i;
   0452 8B 0A         [24] 1604 	mov	_ndigitos,r3
   0454                    1605 00102$:
                     03BF  1606 	C$frequencimetro_simples.c$87$1$57 ==.
                           1607 ;	frequencimetro_simples.c:87: num=num%a;
   0454 85 1F 23      [24] 1608 	mov	__modslong_PARM_2,_asciiNum_a_1_57
   0457 85 20 24      [24] 1609 	mov	(__modslong_PARM_2 + 1),(_asciiNum_a_1_57 + 1)
   045A 85 21 25      [24] 1610 	mov	(__modslong_PARM_2 + 2),(_asciiNum_a_1_57 + 2)
   045D 85 22 26      [24] 1611 	mov	(__modslong_PARM_2 + 3),(_asciiNum_a_1_57 + 3)
   0460 85 1B 82      [24] 1612 	mov	dpl,_asciiNum_num_1_56
   0463 85 1C 83      [24] 1613 	mov	dph,(_asciiNum_num_1_56 + 1)
   0466 85 1D F0      [24] 1614 	mov	b,(_asciiNum_num_1_56 + 2)
   0469 E5 1E         [12] 1615 	mov	a,(_asciiNum_num_1_56 + 3)
   046B C0 03         [24] 1616 	push	ar3
   046D 12 05 F7      [24] 1617 	lcall	__modslong
   0470 85 82 1B      [24] 1618 	mov	_asciiNum_num_1_56,dpl
   0473 85 83 1C      [24] 1619 	mov	(_asciiNum_num_1_56 + 1),dph
   0476 85 F0 1D      [24] 1620 	mov	(_asciiNum_num_1_56 + 2),b
   0479 F5 1E         [12] 1621 	mov	(_asciiNum_num_1_56 + 3),a
   047B D0 03         [24] 1622 	pop	ar3
   047D                    1623 00104$:
                     03E8  1624 	C$frequencimetro_simples.c$89$2$58 ==.
                           1625 ;	frequencimetro_simples.c:89: i--;
   047D 1B            [12] 1626 	dec	r3
   047E 02 03 E8      [24] 1627 	ljmp	00105$
   0481                    1628 00107$:
                     03EC  1629 	C$frequencimetro_simples.c$91$1$57 ==.
                           1630 ;	frequencimetro_simples.c:91: ascii[0]=(num%10)+48;//ASCII da unidade
   0481 75 23 0A      [24] 1631 	mov	__modslong_PARM_2,#0x0A
   0484 E4            [12] 1632 	clr	a
   0485 F5 24         [12] 1633 	mov	(__modslong_PARM_2 + 1),a
   0487 F5 25         [12] 1634 	mov	(__modslong_PARM_2 + 2),a
   0489 F5 26         [12] 1635 	mov	(__modslong_PARM_2 + 3),a
   048B 85 1B 82      [24] 1636 	mov	dpl,_asciiNum_num_1_56
   048E 85 1C 83      [24] 1637 	mov	dph,(_asciiNum_num_1_56 + 1)
   0491 85 1D F0      [24] 1638 	mov	b,(_asciiNum_num_1_56 + 2)
   0494 E5 1E         [12] 1639 	mov	a,(_asciiNum_num_1_56 + 3)
   0496 12 05 F7      [24] 1640 	lcall	__modslong
   0499 AC 82         [24] 1641 	mov	r4,dpl
   049B 74 30         [12] 1642 	mov	a,#0x30
   049D 2C            [12] 1643 	add	a,r4
   049E F5 0C         [12] 1644 	mov	_ascii,a
                     040B  1645 	C$frequencimetro_simples.c$92$1$57 ==.
                     040B  1646 	XG$asciiNum$0$0 ==.
   04A0 22            [24] 1647 	ret
                           1648 	.area CSEG    (CODE)
                           1649 	.area CONST   (CODE)
                     0000  1650 Ffrequencimetro_simples$_str_0$0$0 == .
   06B8                    1651 __str_0:
   06B8 66 3A 20           1652 	.ascii "f: "
   06BB 00                 1653 	.db 0x00
                           1654 	.area XINIT   (CODE)
                           1655 	.area CABS    (ABS,CODE)
