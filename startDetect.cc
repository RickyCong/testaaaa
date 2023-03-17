__int64 __usercall esandinfo::esfaceid::EsLivingDetection::startDetect@<X0>(
        unsigned __int8 *a1@<X0>,
        unsigned __int8 *a2@<X1>,
        const void *a3@<X2>,
        int a4@<W3>,
        int a5@<W4>,
        const char *a6@<X5>,
        unsigned int a7@<W6>,
        unsigned int *a8@<X8>)
{
  long double v8; // q8
  long double v9; // q9
  long double v10; // q10
  void **v16; // x0
  void **v17; // x27
  void *v18; // x0
  unsigned __int64 v19; // x24
  unsigned __int64 v20; // x25
  unsigned __int64 v21; // x8
  unsigned __int64 v22; // x23
  unsigned __int64 v23; // x22
  const void *v24; // x0
  unsigned __int8 *v25; // x1
  unsigned __int8 *v26; // x9
  const void *v27; // x7
  unsigned __int64 v28; // x1
  unsigned __int64 v29; // x2
  void *v30; // x23
  __int128 v31; // q0
  unsigned __int64 v32; // x22
  const void *v33; // x21
  char *v34; // x23
  unsigned __int64 v35; // x0
  __int64 v36; // x21
  char *v37; // x22
  unsigned __int64 v38; // x23
  char v39; // w20
  __int64 v40; // x0
  float v41; // s0
  __int64 v42; // x22
  int32x2_t v43; // d0
  __int64 v44; // x0
  unsigned __int64 v45; // d1
  unsigned int *v46; // x20
  void **v47; // x20
  void *v48; // x0
  float32x2_t v49; // d11
  __int64 v50; // x0
  esandinfo::esfaceid::EsDlibWrapper *Instance; // x0
  _BYTE *v52; // x21
  _BYTE *v53; // x20
  _OWORD *v54; // x0
  unsigned __int64 v55; // x8
  _OWORD *v56; // x0
  esandinfo::esfaceid *v57; // x0
  _OWORD *v59; // x0
  void *v60; // x0
  __int64 v61; // x23
  __int64 v62; // x24
  __int64 v63; // x22
  __int64 v64; // x25
  __int128 v65; // q1
  __int64 v66; // x2
  __int64 v67; // x3
  int v68; // w0
  _OWORD *v69; // x0
  int v70; // w23
  int v71; // s12
  int v72; // s13
  float v73; // s0
  int v74; // w26
  int v75; // w23
  int v76; // w25
  int v77; // w24
  __int128 v78; // q0
  __int128 v79; // q2
  __int128 v80; // q1
  char v81; // w9
  void *v82; // x0
  unsigned __int8 *v83; // x1
  int v84; // w8
  int v85; // w6
  int v86; // w7
  int v87; // w3
  __int64 v88; // x0
  __int64 v89; // x1
  void *v90; // x2
  esandinfo::esfaceid::EsDlibWrapper *v91; // x0
  __int64 v92; // x0
  _OWORD *v93; // x0
  __int64 v94; // x21
  __int64 v95; // x27
  int v96; // w28
  char *v97; // x24
  char *v98; // x26
  signed __int64 v99; // x22
  char *v100; // x0
  unsigned __int64 v101; // x9
  char *v102; // x8
  _OWORD *v103; // x0
  char v104; // w8
  __int64 v105; // x8
  __int128 v106; // q0
  unsigned int *v107; // x9
  char v108; // w8
  __int64 v109; // x8
  __int128 v110; // q0
  int v111; // w8
  int isDarkRectInImage; // w0
  unsigned __int64 v113; // x8
  __int64 v114; // x9
  char v115; // w9
  char v116; // w8
  __int64 v117; // x8
  __int128 v118; // q0
  unsigned int *v119; // x9
  char v120; // w8
  __int64 v121; // x8
  __int128 v122; // q0
  __int64 i; // x9
  int32x2_t *v124; // x10
  int32x2_t v125; // d0
  int32x2_t v126; // d1
  __int64 v127; // x0
  __int64 v128; // x23
  unsigned __int8 **v129; // x4
  unsigned __int64 v130; // x24
  void *v131; // x0
  _OWORD *v132; // x0
  __int64 v133; // x8
  _OWORD *v134; // x11
  __int128 *v135; // x12
  __int64 v136; // x13
  __int128 v137; // q0
  __int128 v138; // q1
  __int128 v139; // q2
  __int128 v140; // q3
  int v141; // w8
  void *v142; // x1
  int v143; // w21
  int v144; // w24
  int v145; // w22
  signed __int64 v146; // x21
  signed __int64 v147; // x24
  unsigned __int64 v148; // x25
  _BYTE *v149; // x8
  __int64 j; // x8
  char **v151; // x1
  unsigned int v152; // w24
  char *v153; // x22
  unsigned __int64 v154; // x0
  esandinfo::esfaceid *String; // x0
  unsigned int v156; // w25
  unsigned __int64 v157; // x0
  unsigned int v158; // w0
  const void *v159; // x23
  unsigned __int64 v160; // x24
  char *v161; // x22
  void *v162; // x22
  char *v163; // x22
  size_t v164; // w0
  __int64 v165; // x0
  __int64 v166; // x21
  __int64 v167; // x9
  char v168; // w22
  char v169; // w8
  __int64 v170; // x8
  __int64 v171; // x9
  char v172; // w10
  __int64 v173; // x10
  __int64 v174; // x9
  _QWORD *v175; // x22
  _QWORD *v176; // x21
  char *v177; // x4
  char *v179; // [xsp+0h] [xbp-9F0h]
  unsigned __int8 *v180; // [xsp+18h] [xbp-9D8h]
  int size; // [xsp+68h] [xbp-988h]
  _QWORD *v182; // [xsp+80h] [xbp-970h]
  int v184; // [xsp+A4h] [xbp-94Ch]
  void **v185; // [xsp+A8h] [xbp-948h]
  int v187; // [xsp+100h] [xbp-8F0h]
  void *v188; // [xsp+118h] [xbp-8D8h]
  __int64 v190; // [xsp+130h] [xbp-8C0h]
  _WORD *v191; // [xsp+138h] [xbp-8B8h]
  int v192; // [xsp+150h] [xbp-8A0h]
  _WORD *v193; // [xsp+158h] [xbp-898h]
  unsigned int *v194; // [xsp+160h] [xbp-890h]
  __int64 v195; // [xsp+168h] [xbp-888h]
  unsigned __int64 v196; // [xsp+170h] [xbp-880h]
  int v197; // [xsp+184h] [xbp-86Ch]
  __int64 v198; // [xsp+188h] [xbp-868h] BYREF
  __int64 v199; // [xsp+190h] [xbp-860h]
  void *v200; // [xsp+198h] [xbp-858h]
  char *v201; // [xsp+1A0h] [xbp-850h] BYREF
  char *s; // [xsp+1A8h] [xbp-848h] BYREF
  unsigned __int64 v203; // [xsp+1B0h] [xbp-840h]
  void *v204; // [xsp+1B8h] [xbp-838h]
  int v205; // [xsp+1C0h] [xbp-830h]
  void *v206; // [xsp+1C8h] [xbp-828h] BYREF
  __int128 v207[2]; // [xsp+1D0h] [xbp-820h] BYREF
  void *v208; // [xsp+1F0h] [xbp-800h] BYREF
  void *v209; // [xsp+1F8h] [xbp-7F8h]
  char *v210; // [xsp+200h] [xbp-7F0h]
  __int128 v211; // [xsp+210h] [xbp-7E0h] BYREF
  void *v212; // [xsp+220h] [xbp-7D0h]
  __int128 dest; // [xsp+230h] [xbp-7C0h] BYREF
  __int128 v214; // [xsp+240h] [xbp-7B0h]
  void *v215; // [xsp+250h] [xbp-7A0h]
  char *v216; // [xsp+258h] [xbp-798h]
  __int64 v217[4]; // [xsp+268h] [xbp-788h] BYREF
  __int64 v218[2]; // [xsp+288h] [xbp-768h] BYREF
  void *v219; // [xsp+298h] [xbp-758h]
  char v220; // [xsp+2A0h] [xbp-750h] BYREF
  _BYTE v221[23]; // [xsp+2A1h] [xbp-74Fh]
  __int64 v222[2]; // [xsp+2B8h] [xbp-738h] BYREF
  void *v223; // [xsp+2C8h] [xbp-728h]
  char v224; // [xsp+2D0h] [xbp-720h] BYREF
  _BYTE v225[23]; // [xsp+2D1h] [xbp-71Fh]
  __int64 v226[2]; // [xsp+2E8h] [xbp-708h] BYREF
  void *v227; // [xsp+2F8h] [xbp-6F8h]
  __int128 v228; // [xsp+300h] [xbp-6F0h] BYREF
  void *v229; // [xsp+310h] [xbp-6E0h]
  __int64 v230[2]; // [xsp+318h] [xbp-6D8h] BYREF
  void *v231; // [xsp+328h] [xbp-6C8h]
  __int128 v232; // [xsp+330h] [xbp-6C0h] BYREF
  void *v233; // [xsp+340h] [xbp-6B0h]
  _OWORD v234[2]; // [xsp+350h] [xbp-6A0h] BYREF
  _OWORD v235[2]; // [xsp+370h] [xbp-680h] BYREF
  __int64 v236[2]; // [xsp+398h] [xbp-658h] BYREF
  void *v237; // [xsp+3A8h] [xbp-648h]
  char v238; // [xsp+3B0h] [xbp-640h] BYREF
  _BYTE v239[23]; // [xsp+3B1h] [xbp-63Fh]
  __int64 v240[2]; // [xsp+3C8h] [xbp-628h] BYREF
  void *v241; // [xsp+3D8h] [xbp-618h]
  char v242; // [xsp+3E0h] [xbp-610h] BYREF
  _BYTE v243[23]; // [xsp+3E1h] [xbp-60Fh]
  __int64 v244[2]; // [xsp+3F8h] [xbp-5F8h] BYREF
  void *v245; // [xsp+408h] [xbp-5E8h]
  char v246; // [xsp+410h] [xbp-5E0h] BYREF
  _BYTE v247[23]; // [xsp+411h] [xbp-5DFh]
  __int64 v248[2]; // [xsp+428h] [xbp-5C8h] BYREF
  void *v249; // [xsp+438h] [xbp-5B8h]
  char v250; // [xsp+440h] [xbp-5B0h] BYREF
  _BYTE v251[23]; // [xsp+441h] [xbp-5AFh]
  __int64 v252[2]; // [xsp+458h] [xbp-598h] BYREF
  void *v253; // [xsp+468h] [xbp-588h]
  char v254; // [xsp+470h] [xbp-580h] BYREF
  _BYTE v255[15]; // [xsp+471h] [xbp-57Fh]
  void *v256; // [xsp+480h] [xbp-570h]
  __int64 v257[2]; // [xsp+488h] [xbp-568h] BYREF
  void *v258; // [xsp+498h] [xbp-558h]
  __int128 v259; // [xsp+4A0h] [xbp-550h] BYREF
  void *v260; // [xsp+4B0h] [xbp-540h]
  __int64 v261[2]; // [xsp+4B8h] [xbp-538h] BYREF
  void *v262; // [xsp+4C8h] [xbp-528h]
  __int128 v263; // [xsp+4D0h] [xbp-520h] BYREF
  void *v264; // [xsp+4E0h] [xbp-510h]
  __int64 v265[2]; // [xsp+4E8h] [xbp-508h] BYREF
  void *v266; // [xsp+4F8h] [xbp-4F8h]
  __int128 v267; // [xsp+500h] [xbp-4F0h] BYREF
  void *v268; // [xsp+510h] [xbp-4E0h]
  __int64 v269[2]; // [xsp+520h] [xbp-4D0h] BYREF
  void *v270; // [xsp+530h] [xbp-4C0h]
  __int64 v271[2]; // [xsp+538h] [xbp-4B8h] BYREF
  void *v272; // [xsp+548h] [xbp-4A8h]
  __int64 v273[2]; // [xsp+550h] [xbp-4A0h] BYREF
  void *v274; // [xsp+560h] [xbp-490h]
  __int64 v275[2]; // [xsp+568h] [xbp-488h] BYREF
  void *v276; // [xsp+578h] [xbp-478h]
  __int64 v277[2]; // [xsp+580h] [xbp-470h] BYREF
  void *v278; // [xsp+590h] [xbp-460h]
  char v279; // [xsp+598h] [xbp-458h] BYREF
  _BYTE v280[23]; // [xsp+599h] [xbp-457h]
  __int64 v281[2]; // [xsp+5B0h] [xbp-440h] BYREF
  void *v282; // [xsp+5C0h] [xbp-430h]
  char v283; // [xsp+5C8h] [xbp-428h] BYREF
  _BYTE v284[23]; // [xsp+5C9h] [xbp-427h]
  __int128 v285; // [xsp+5E0h] [xbp-410h] BYREF
  void *v286; // [xsp+5F0h] [xbp-400h]
  unsigned __int64 v287; // [xsp+5F8h] [xbp-3F8h] BYREF
  __int64 v288; // [xsp+600h] [xbp-3F0h]
  void *ptr; // [xsp+608h] [xbp-3E8h]
  __int128 v290; // [xsp+610h] [xbp-3E0h] BYREF
  void *v291; // [xsp+620h] [xbp-3D0h]
  char v292[8]; // [xsp+630h] [xbp-3C0h] BYREF
  __int64 v293[2]; // [xsp+638h] [xbp-3B8h] BYREF
  int v294; // [xsp+648h] [xbp-3A8h]
  void *v295; // [xsp+650h] [xbp-3A0h] BYREF
  void *v296; // [xsp+658h] [xbp-398h]
  __int64 v297; // [xsp+660h] [xbp-390h]
  __int64 v298; // [xsp+668h] [xbp-388h]
  __int64 (__fastcall **v299)(); // [xsp+670h] [xbp-380h]
  __int64 v300; // [xsp+678h] [xbp-378h]
  __int64 v301; // [xsp+680h] [xbp-370h]
  char v302; // [xsp+688h] [xbp-368h]
  _QWORD v303[2]; // [xsp+690h] [xbp-360h]
  __int128 v304; // [xsp+6A0h] [xbp-350h]
  __int128 v305; // [xsp+6B0h] [xbp-340h]
  __int128 v306; // [xsp+6C0h] [xbp-330h]
  __int128 v307; // [xsp+6D0h] [xbp-320h]
  __int64 v308; // [xsp+6E0h] [xbp-310h]
  _BYTE *v309; // [xsp+6F0h] [xbp-300h] BYREF
  _BYTE v310[24]; // [xsp+6F8h] [xbp-2F8h] BYREF
  __int128 v311; // [xsp+710h] [xbp-2E0h]
  __int128 v312; // [xsp+720h] [xbp-2D0h] BYREF
  __int64 v313; // [xsp+730h] [xbp-2C0h]
  unsigned __int64 v314; // [xsp+738h] [xbp-2B8h]
  __int16 v315; // [xsp+740h] [xbp-2B0h]
  _QWORD *v316; // [xsp+748h] [xbp-2A8h]
  __int64 v317; // [xsp+958h] [xbp-98h]

  v317 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  esandinfo::esfaceid::LDTResult::LDTResult((esandinfo::esfaceid::LDTResult *)a8);
  TimeUtil::TimeUtil((TimeUtil *)v292);
  v16 = (void **)operator new(0x18uLL);
  *((_DWORD *)v16 + 4) = 3;
  v17 = v16;
  *((_DWORD *)v16 + 2) = a4;
  *((_DWORD *)v16 + 3) = a5;
  v18 = malloc(3 * a5 * a4);
  *v17 = v18;
  size = 3 * a5 * a4;
  memcpy(v18, a3, size);
  v19 = *a1;
  v20 = *a2;
  v21 = v19 >> 1;
  if ( (v19 & 1) != 0 )
    v22 = *((_QWORD *)a1 + 1);
  else
    v22 = v19 >> 1;
  if ( (v20 & 1) != 0 )
    v23 = *((_QWORD *)a2 + 1);
  else
    v23 = v20 >> 1;
  if ( v22 != v23 )
    goto LABEL_22;
  if ( (v19 & 1) != 0 )
    v24 = (const void *)*((_QWORD *)a1 + 2);
  else
    v24 = a1 + 1;
  if ( (v20 & 1) != 0 )
    v25 = (unsigned __int8 *)*((_QWORD *)a2 + 2);
  else
    v25 = a2 + 1;
  if ( (v19 & 1) != 0 )
  {
    if ( v22 && memcmp(v24, v25, v22) )
      goto LABEL_22;
LABEL_55:
    v190 = dword_826194;
    v197 = *(_DWORD *)(*((_QWORD *)a1 + 3) + 4LL * dword_826194);
    v40 = operator new(0x18uLL);
    *(double *)&v8 = (double)a4;
    v41 = 70.0 / (double)a4;
    v42 = v40;
    *(_QWORD *)v40 = 0LL;
    *(_DWORD *)(v40 + 8) = (int)(float)((float)a4 * v41);
    *(_DWORD *)(v40 + 12) = (int)(float)((float)a5 * v41);
    *(_DWORD *)(v40 + 16) = 3;
    ImageUtil::imgTrans(v17, v40, 1LL);
    if ( a4 < 481 )
    {
      v43.n64_u32[0] = 1.0;
      v46 = (unsigned int *)v17;
    }
    else
    {
      v44 = operator new(0x18uLL);
      *(float *)&v45 = 480.0 / *(double *)&v8;
      v196 = v45;
      v46 = (unsigned int *)v44;
      *(_QWORD *)v44 = 0LL;
      *(_DWORD *)(v44 + 8) = (int)(float)((float)a4 * *(float *)&v45);
      *(_DWORD *)(v44 + 12) = (int)(float)((float)a5 * *(float *)&v45);
      *(_DWORD *)(v44 + 16) = 3;
      ImageUtil::imgTrans(v17, v44, 1LL);
      v43.n64_u64[0] = v196;
    }
    v191 = a8 + 8;
    v182 = a1 + 48;
    v193 = a8 + 2;
    v194 = v46;
    v188 = a8 + 14;
    v49.n64_u64[0] = vdup_lane_s32(v43, 0).n64_u64[0];
    v50 = (__int64)&v198;
    v179 = (char *)&v198 + 1;
    LODWORD(v8) = 4.0;
    LODWORD(v9) = 2.0;
    LODWORD(v10) = 7.0;
    v180 = a1;
    v185 = v17;
    v184 = a5;
    v195 = v42;
    while ( 1 )
    {
      Instance = (esandinfo::esfaceid::EsDlibWrapper *)esandinfo::esfaceid::EsDlibWrapper::getInstance((esandinfo::esfaceid::EsDlibWrapper *)v50);
      esandinfo::esfaceid::EsDlibWrapper::faceDetect(
        Instance,
        *(unsigned __int8 **)v42,
        *(_DWORD *)(v42 + 8),
        *(_DWORD *)(v42 + 12));
      v52 = *(_BYTE **)v310;
      v53 = v309;
      v285 = 0uLL;
      v286 = 0LL;
      v54 = (_OWORD *)operator new(0x20uLL);
      v286 = v54;
      *(_OWORD *)((char *)v54 + 15) = *(__int128 *)((char *)&xmmword_79467C + 15);
      *v54 = xmmword_79467C;
      v285 = xmmword_794530;
      *((_BYTE *)v54 + 31) = 0;
      TimeUtil::timeErapsed(v292, &v285);
      if ( (v285 & 1) != 0 )
        operator delete(v286);
      std::mutex::lock((std::mutex *)&unk_8261F8);
      if ( v53 == v52 )
      {
        if ( dword_82619C++ < 1 )
        {
          if ( v197 == 6 )
          {
            v276 = 0LL;
            v275[1] = 0LL;
            v275[0] = 0LL;
            v273[0] = 0LL;
            v274 = 0LL;
            v273[1] = 0LL;
            esandinfo::esfaceid::LDTResult::init(a8, 4294967200LL, v275, v273, 2LL);
            if ( (v273[0] & 1) != 0 )
              operator delete(v274);
            if ( (v275[0] & 1) == 0 )
              goto LABEL_180;
            v82 = v276;
          }
          else
          {
            v272 = 0LL;
            v271[1] = 0LL;
            v271[0] = 0LL;
            v269[0] = 0LL;
            v270 = 0LL;
            v269[1] = 0LL;
            esandinfo::esfaceid::LDTResult::init(a8, 0xFFFFFFFFLL, v271, v269, 2LL);
            if ( (v269[0] & 1) != 0 )
              operator delete(v270);
            if ( (v271[0] & 1) == 0 )
              goto LABEL_180;
            v82 = v272;
          }
        }
        else
        {
          if ( v197 == 6 )
          {
            v283 = 36;
            *(_QWORD *)&v284[15] = 12092416LL;
            v281[0] = 0LL;
            *(_OWORD *)v284 = xmmword_79469C;
            v282 = 0LL;
            v281[1] = 0LL;
            v57 = (esandinfo::esfaceid *)esandinfo::esfaceid::LDTResult::init(a8, 4294967201LL, &v283, v281, 2LL);
            if ( (v281[0] & 1) != 0 )
              operator delete(v282);
            if ( (v283 & 1) != 0 )
              operator delete(*(void **)&v284[15]);
            goto LABEL_74;
          }
          v279 = 36;
          *(_QWORD *)&v280[15] = 12092416LL;
          v277[0] = 0LL;
          *(_OWORD *)v280 = xmmword_79469C;
          v278 = 0LL;
          v277[1] = 0LL;
          esandinfo::esfaceid::LDTResult::init(a8, 5LL, &v279, v277, 2LL);
          if ( (v277[0] & 1) != 0 )
            operator delete(v278);
          if ( (v279 & 1) == 0 )
            goto LABEL_180;
          v82 = *(void **)&v280[15];
        }
LABEL_179:
        operator delete(v82);
        goto LABEL_180;
      }
      dword_82619C = 0;
      v55 = 0x8E38E38E38E38E39LL * ((v52 - v53) >> 3);
      if ( dword_8261A8 < 2 )
      {
        if ( v55 >= 2 )
        {
          if ( v197 == 6 )
          {
            v260 = 0LL;
            v259 = 0uLL;
            v59 = (_OWORD *)operator new(0x20uLL);
            v260 = v59;
            v259 = xmmword_794540;
            *((_BYTE *)v59 + 30) = 0;
            v258 = 0LL;
            v257[1] = 0LL;
            *(_OWORD *)((char *)v59 + 14) = *(__int128 *)((char *)&xmmword_7946AF + 14);
            *v59 = xmmword_7946AF;
            v257[0] = 0LL;
            esandinfo::esfaceid::LDTResult::init(a8, 4294967200LL, &v259, v257, 7LL);
            if ( (v257[0] & 1) != 0 )
              operator delete(v258);
            if ( (v259 & 1) != 0 )
            {
              v60 = v260;
              goto LABEL_130;
            }
          }
          else
          {
            v254 = 24;
            v256 = 0LL;
            *(_QWORD *)&v255[7] = 0x8BB5E68000LL;
            v252[0] = 0LL;
            *(_QWORD *)v255 = 0xA3E6A89CE5A3ADE6LL;
            v253 = 0LL;
            v252[1] = 0LL;
            esandinfo::esfaceid::LDTResult::init(a8, 10LL, &v254, v252, 7LL);
            if ( (v252[0] & 1) != 0 )
              operator delete(v253);
            if ( (v254 & 1) != 0 )
            {
              v60 = v256;
LABEL_130:
              operator delete(v60);
            }
          }
          ++dword_8261A8;
          goto LABEL_180;
        }
      }
      else if ( v55 >= 2 )
      {
        if ( v197 == 6 )
        {
          v268 = 0LL;
          v267 = 0uLL;
          v56 = (_OWORD *)operator new(0x20uLL);
          v268 = v56;
          v267 = xmmword_794540;
          *((_BYTE *)v56 + 30) = 0;
          v266 = 0LL;
          v265[1] = 0LL;
          *(_OWORD *)((char *)v56 + 14) = *(__int128 *)((char *)&xmmword_7946AF + 14);
          *v56 = xmmword_7946AF;
          v265[0] = 0LL;
          v57 = (esandinfo::esfaceid *)esandinfo::esfaceid::LDTResult::init(a8, 4294967201LL, &v267, v265, 3LL);
          if ( (v265[0] & 1) != 0 )
            operator delete(v266);
          if ( (v267 & 1) != 0 )
            operator delete(v268);
LABEL_74:
          esandinfo::esfaceid::ldtReset(v57);
LABEL_180:
          v50 = std::mutex::unlock((std::mutex *)&unk_8261F8);
          v70 = 2;
          goto LABEL_181;
        }
        v264 = 0LL;
        v263 = 0uLL;
        v103 = (_OWORD *)operator new(0x20uLL);
        v264 = v103;
        v263 = xmmword_794540;
        *((_BYTE *)v103 + 30) = 0;
        v262 = 0LL;
        v261[1] = 0LL;
        *(_OWORD *)((char *)v103 + 14) = *(__int128 *)((char *)&xmmword_7946AF + 14);
        *v103 = xmmword_7946AF;
        v261[0] = 0LL;
        esandinfo::esfaceid::LDTResult::init(a8, 5LL, &v263, v261, 3LL);
        if ( (v261[0] & 1) != 0 )
          operator delete(v262);
        if ( (v263 & 1) == 0 )
          goto LABEL_180;
        v82 = v264;
        goto LABEL_179;
      }
      v62 = *(_QWORD *)v53;
      v61 = *((_QWORD *)v53 + 1);
      v64 = *((_QWORD *)v53 + 2);
      v63 = *((_QWORD *)v53 + 3);
      if ( !qword_8261B0 )
      {
        v83 = (unsigned __int8 *)*(unsigned int *)(v195 + 8);
        v84 = *(_DWORD *)(v195 + 16);
        if ( v61 <= v63 )
        {
          v87 = v84 * (_DWORD)v83;
          if ( v62 <= v64 )
            v85 = v64 - v62 + 1;
          else
            v85 = 0;
          if ( v62 <= v64 )
            v86 = v63 - v61 + 1;
          else
            v86 = 0;
        }
        else
        {
          v85 = 0;
          v86 = 0;
          v87 = v84 * (_DWORD)v83;
        }
        isDarkRectInImage = ImageUtil::isDarkRectInImage(
                              *(ImageUtil **)v195,
                              v83,
                              *(_DWORD *)(v195 + 12),
                              v87,
                              v62,
                              v61,
                              v85,
                              v86,
                              (int)v179);
        if ( isDarkRectInImage == 2 )
        {
          if ( v197 == 6 )
          {
            v242 = 36;
            *(_QWORD *)&v243[15] = 12157440LL;
            v240[0] = 0LL;
            *(_OWORD *)v243 = xmmword_7946EE;
            v241 = 0LL;
            v240[1] = 0LL;
            esandinfo::esfaceid::LDTResult::init(a8, 4294967200LL, &v242, v240, 5LL);
            v42 = v195;
            if ( (v240[0] & 1) != 0 )
              operator delete(v241);
            if ( (v242 & 1) == 0 )
              goto LABEL_180;
            v82 = *(void **)&v243[15];
          }
          else
          {
            v238 = 36;
            *(_QWORD *)&v239[15] = 12157440LL;
            v236[0] = 0LL;
            *(_OWORD *)v239 = xmmword_7946EE;
            v237 = 0LL;
            v236[1] = 0LL;
            esandinfo::esfaceid::LDTResult::init(a8, 5LL, &v238, v236, 5LL);
            v42 = v195;
            if ( (v236[0] & 1) != 0 )
              operator delete(v237);
            if ( (v238 & 1) == 0 )
              goto LABEL_180;
            v82 = *(void **)&v239[15];
          }
          goto LABEL_179;
        }
        if ( isDarkRectInImage == 1 )
        {
          if ( v197 == 6 )
          {
            v250 = 36;
            *(_QWORD *)&v251[15] = 12157440LL;
            v248[0] = 0LL;
            *(_OWORD *)v251 = xmmword_7946DB;
            v249 = 0LL;
            v248[1] = 0LL;
            esandinfo::esfaceid::LDTResult::init(a8, 4294967200LL, &v250, v248, 4LL);
            v42 = v195;
            if ( (v248[0] & 1) != 0 )
              operator delete(v249);
            if ( (v250 & 1) == 0 )
              goto LABEL_180;
            v82 = *(void **)&v251[15];
          }
          else
          {
            v246 = 36;
            *(_QWORD *)&v247[15] = 12157440LL;
            v244[0] = 0LL;
            *(_OWORD *)v247 = xmmword_7946DB;
            v245 = 0LL;
            v244[1] = 0LL;
            esandinfo::esfaceid::LDTResult::init(a8, 5LL, &v246, v244, 4LL);
            v42 = v195;
            if ( (v244[0] & 1) != 0 )
              operator delete(v245);
            if ( (v246 & 1) == 0 )
              goto LABEL_180;
            v82 = *(void **)&v247[15];
          }
          goto LABEL_179;
        }
      }
      dword_8261A8 = 0;
      if ( v197 != 1 && v197 != 7 )
      {
        std::mutex::unlock((std::mutex *)&unk_8261F8);
        v65 = *((_OWORD *)v53 + 1);
        v66 = *(unsigned int *)(v195 + 8);
        v67 = *(unsigned int *)(v195 + 12);
        if ( v197 == 6 )
        {
          v235[0] = *(_OWORD *)v53;
          v235[1] = v65;
          v68 = LDTFaceSize::faceSizeDetect(v182, v235, v66, v67, v8, v9);
        }
        else
        {
          v234[0] = *(_OWORD *)v53;
          v234[1] = v65;
          v68 = LDTFaceSize::faceSizeDetect(v182, v234, v66, v67, v10, v9);
        }
        if ( v68 == 1 )
        {
          if ( v197 == 6 )
          {
            v224 = 42;
            v222[0] = 0LL;
            *(_QWORD *)&v225[13] = 0xB982E780B8E495B9LL;
            *(_OWORD *)v225 = xmmword_79471A;
            *(_WORD *)&v225[21] = 0;
            v223 = 0LL;
            v222[1] = 0LL;
            v50 = esandinfo::esfaceid::LDTResult::init(a8, 4294967200LL, &v224, v222, 9LL);
            v42 = v195;
            if ( (v222[0] & 1) != 0 )
              operator delete(v223);
            if ( (v224 & 1) != 0 )
            {
              operator delete(*(void **)&v225[15]);
              v70 = 2;
              if ( !v53 )
                goto LABEL_63;
              goto LABEL_182;
            }
          }
          else
          {
            v220 = 42;
            v218[0] = 0LL;
            *(_QWORD *)&v221[13] = 0xB982E780B8E495B9LL;
            *(_OWORD *)v221 = xmmword_79471A;
            *(_WORD *)&v221[21] = 0;
            v219 = 0LL;
            v218[1] = 0LL;
            v50 = esandinfo::esfaceid::LDTResult::init(a8, 5LL, &v220, v218, 9LL);
            v42 = v195;
            if ( (v218[0] & 1) != 0 )
              operator delete(v219);
            if ( (v220 & 1) != 0 )
            {
              operator delete(*(void **)&v221[15]);
              v70 = 2;
              if ( !v53 )
                goto LABEL_63;
              goto LABEL_182;
            }
          }
LABEL_235:
          v70 = 2;
          if ( !v53 )
            goto LABEL_63;
          goto LABEL_182;
        }
        if ( v68 == -1 )
        {
          if ( v197 == 6 )
          {
            v233 = 0LL;
            v232 = 0uLL;
            v69 = (_OWORD *)operator new(0x20uLL);
            v233 = v69;
            v232 = xmmword_794550;
            *((_BYTE *)v69 + 24) = 0;
            v231 = 0LL;
            v230[1] = 0LL;
            *((_QWORD *)v69 + 2) = 0xB982E780B8E491BFLL;
            *v69 = xmmword_794701;
            v230[0] = 0LL;
            v50 = esandinfo::esfaceid::LDTResult::init(a8, 4294967200LL, &v232, v230, 8LL);
            v42 = v195;
            if ( (v230[0] & 1) != 0 )
              operator delete(v231);
            if ( (v232 & 1) != 0 )
            {
              operator delete(v233);
              v70 = 2;
              if ( !v53 )
                goto LABEL_63;
              goto LABEL_182;
            }
          }
          else
          {
            v229 = 0LL;
            v228 = 0uLL;
            v132 = (_OWORD *)operator new(0x20uLL);
            v229 = v132;
            v228 = xmmword_794550;
            *((_BYTE *)v132 + 24) = 0;
            v227 = 0LL;
            v226[1] = 0LL;
            *((_QWORD *)v132 + 2) = 0xB982E780B8E491BFLL;
            *v132 = xmmword_794701;
            v226[0] = 0LL;
            v50 = esandinfo::esfaceid::LDTResult::init(a8, 5LL, &v228, v226, 8LL);
            v42 = v195;
            if ( (v226[0] & 1) != 0 )
              operator delete(v227);
            if ( (v228 & 1) != 0 )
            {
              operator delete(v229);
              v70 = 2;
              if ( !v53 )
                goto LABEL_63;
              goto LABEL_182;
            }
          }
          goto LABEL_235;
        }
      }
      std::mutex::unlock((std::mutex *)&unk_8261F8);
      v71 = *(_DWORD *)(v195 + 8);
      v72 = v194[2];
      __android_log_print(6, "LDT", "\x1B[31m [%s]%s[%d]:", "WARN", "startDetect", 330LL);
      v73 = (float)v71 / (float)v72;
      v74 = (int)(float)((float)v62 / v73);
      v75 = (int)(float)((float)v61 / v73);
      v76 = (int)(float)((float)v64 / v73);
      v77 = (int)(float)((float)v63 / v73);
      __android_log_print(
        6,
        "LDT",
        aTrack,
        (unsigned int)v74,
        (unsigned int)v75,
        (unsigned int)v76,
        (unsigned int)v77,
        v73);
      __android_log_print(6, "LDT", " :( \x1B[0m\n");
      v217[1] = v75;
      v217[0] = v74;
      v217[3] = v77;
      v217[2] = v76;
      v192 = v77;
      if ( v197 < 7 )
        break;
      v304 = *(_OWORD *)v53;
      v79 = *((_OWORD *)v53 + 2);
      v78 = *((_OWORD *)v53 + 3);
      v80 = *((_OWORD *)v53 + 1);
      v308 = *((_QWORD *)v53 + 8);
      v306 = v79;
      v307 = v78;
      v305 = v80;
      esandinfo::esfaceid::processLivingDetect();
      v81 = *((_BYTE *)a8 + 8);
      v42 = v195;
      *a8 = (unsigned int)v309;
      if ( (v81 & 1) != 0 )
      {
        **((_BYTE **)a8 + 3) = 0;
        v104 = *((_BYTE *)a8 + 8);
        *((_QWORD *)a8 + 2) = 0LL;
        if ( (v104 & 1) != 0 )
        {
          operator delete(*((void **)a8 + 3));
          *((_QWORD *)a8 + 1) = 0LL;
        }
      }
      else
      {
        *v193 = 0;
      }
      v105 = *(_QWORD *)&v310[16];
      v106 = *(_OWORD *)v310;
      memset(v310, 0, sizeof(v310));
      *((_QWORD *)a8 + 3) = v105;
      *(_OWORD *)v193 = v106;
      v107 = a8 + 8;
      if ( (*(_BYTE *)v191 & 1) != 0 )
      {
        **((_BYTE **)a8 + 6) = 0;
        v108 = *((_BYTE *)a8 + 32);
        *((_QWORD *)a8 + 5) = 0LL;
        if ( (v108 & 1) != 0 )
        {
          operator delete(*((void **)a8 + 6));
          v107 = a8 + 8;
          *((_QWORD *)a8 + 4) = 0LL;
        }
      }
      else
      {
        *v191 = 0;
      }
      v109 = v312;
      v110 = v311;
      *(_QWORD *)&v312 = 0LL;
      v311 = 0uLL;
      *((_QWORD *)v107 + 2) = v109;
      *(_OWORD *)v107 = v110;
      v50 = (__int64)memcpy(v188, (char *)&v312 + 8, 0x230u);
      if ( (v310[0] & 1) != 0 )
      {
        operator delete(*(void **)&v310[16]);
        v111 = *a8;
        if ( (int)*a8 < 7 )
          goto LABEL_206;
LABEL_205:
        a8[82] = v74;
        a8[152] = v75;
        a8[83] = v76;
        a8[153] = v192;
        goto LABEL_206;
      }
LABEL_204:
      v111 = *a8;
      if ( (int)*a8 >= 7 )
        goto LABEL_205;
LABEL_206:
      for ( i = 0LL; i != 70; i += 2LL )
      {
        v124 = (int32x2_t *)&a8[i];
        v125.n64_u64[0] = *(unsigned __int64 *)&a8[i + 14];
        v126.n64_u64[0] = *(unsigned __int64 *)&a8[i + 84];
        v124[7].n64_u64[0] = vcvt_s32_f32(vdiv_f32(vcvt_f32_s32(v125), v49)).n64_u64[0];
        v124[42].n64_u64[0] = vcvt_s32_f32(vdiv_f32(vcvt_f32_s32(v126), v49)).n64_u64[0];
      }
      if ( v111 == -100 )
      {
        v70 = 0;
        if ( (_DWORD)v190 != 3 || byte_826190[0] )
          goto LABEL_181;
        std::mutex::lock((std::mutex *)&unk_8261D0);
        if ( !qword_8261B0 )
        {
          dword_8261A0 = a4;
          dword_8261A4 = a5;
          qword_8261B0 = (__int64)malloc(size);
          memcpy((void *)qword_8261B0, a3, size);
        }
        v50 = std::mutex::unlock((std::mutex *)&unk_8261D0);
        v111 = *a8;
      }
      if ( v111 == -99 )
      {
        v70 = 4;
        if ( !v53 )
          goto LABEL_63;
        goto LABEL_182;
      }
      if ( v111 < 100 )
      {
        v70 = 0;
        if ( !v53 )
          goto LABEL_63;
        goto LABEL_182;
      }
      if ( byte_826190[v190 + 8] || (v50 = std::mutex::try_lock((std::mutex *)&unk_8261D0), (v50 & 1) == 0) )
      {
        v70 = 0;
        *a8 = -1;
        if ( !v53 )
          goto LABEL_63;
        goto LABEL_182;
      }
      if ( (_DWORD)v190 != 3 )
      {
        byte_826190[v190 + 8] = 1;
        v141 = dword_826194;
        *a8 = -98;
        dword_826194 = v141 + 1;
        esandinfo::esfaceid::ldtReset((esandinfo::esfaceid *)v50);
LABEL_287:
        v50 = std::mutex::unlock((std::mutex *)&unk_8261D0);
        v70 = 0;
        if ( !v53 )
          goto LABEL_63;
LABEL_182:
        operator delete(v53);
        goto LABEL_63;
      }
      byte_826190[0] = 1;
      v127 = time(0LL);
      v309 = 0LL;
      v310[0] = 0;
      *(_OWORD *)&v310[8] = xmmword_794560;
      v128 = v127;
      v297 = 0LL;
      v313 = 0LL;
      v311 = 0u;
      v312 = 0u;
      v315 = 256;
      v314 = 1LL;
      v316 = 0LL;
      v296 = 0LL;
      v295 = 0LL;
      *(_QWORD *)&v214 = 0LL;
      dest = 0uLL;
      v206 = 0LL;
      v130 = ImageUtil::rgb2jpg(
               (ImageUtil *)qword_8261B0,
               (unsigned __int8 *)dword_8261A0,
               dword_8261A4,
               (int)&v206,
               v129);
      v131 = (void *)dest;
      if ( v130 <= *((_QWORD *)&dest + 1) - (_QWORD)dest )
      {
        if ( v130 < *((_QWORD *)&dest + 1) - (_QWORD)dest )
          *((_QWORD *)&dest + 1) = dest + v130;
      }
      else
      {
        std::vector<unsigned char>::__append((int)&dest, v130 - (DWORD2(dest) - dest));
        v131 = (void *)dest;
      }
      memcpy(v131, v206, v130);
      if ( (_QWORD)dest == *((_QWORD *)&dest + 1) )
        v142 = &flatbuffers::data<unsigned char,std::allocator<unsigned char>>(std::vector<unsigned char> const&)::t;
      else
        LODWORD(v142) = dest;
      flatbuffers::FlatBufferBuilder::CreateVector<unsigned char>((int)&v309, (int)v142, *((_QWORD *)&dest + 1) - dest);
      v143 = v311;
      v144 = v312;
      v145 = DWORD2(v311);
      BYTE6(v313) = 1;
      flatbuffers::FlatBufferBuilder::AddOffset<flatbuffers::Vector<unsigned char>>((flatbuffers::vector_downward *)&v309);
      v205 = flatbuffers::FlatBufferBuilder::EndTable((flatbuffers::FlatBufferBuilder *)&v309, v143 - v144 + v145);
      std::vector<flatbuffers::Offset<Image>>::insert((int)&v295, v296);
      v146 = (_BYTE *)v296 - (_BYTE *)v295;
      v147 = ((_BYTE *)v296 - (_BYTE *)v295) >> 2;
      flatbuffers::FlatBufferBuilder::StartVector((flatbuffers::FlatBufferBuilder *)&v309, v147, 4uLL);
      if ( v146 )
      {
        while ( 1 )
        {
          --v147;
          if ( v314 <= 3 )
            v314 = 4LL;
          v148 = -((_DWORD)v311 - (_DWORD)v312 + DWORD2(v311)) & 3LL;
          if ( (_QWORD)v312 - *((_QWORD *)&v312 + 1) >= v148 )
            break;
          flatbuffers::vector_downward::reallocate(
            (flatbuffers::vector_downward *)&v309,
            -((_DWORD)v311 - (_DWORD)v312 + DWORD2(v311)) & 3LL);
          *(_QWORD *)&v312 = v312 - v148;
          *(_BYTE *)v312 = 0;
          if ( v148 != 1 )
            goto LABEL_257;
LABEL_259:
          flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::vector_downward *)&v309);
          if ( !v147 )
            goto LABEL_260;
        }
        v149 = (_BYTE *)(v312 - v148);
        *(_QWORD *)&v312 = v312 - v148;
        if ( !v148 )
          goto LABEL_259;
        *v149 = 0;
        if ( v148 == 1 )
          goto LABEL_259;
LABEL_257:
        for ( j = 1LL; j != v148; ++j )
          *(_BYTE *)(v312 + j) = 0;
        goto LABEL_259;
      }
LABEL_260:
      BYTE6(v313) = 0;
      v152 = flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::vector_downward *)&v309);
      if ( v180[36] )
      {
        s = 0LL;
        esandinfo::esfaceid::getDetectHistory(&s, v151);
        v153 = s;
        v154 = strlen(s);
        String = (esandinfo::esfaceid *)flatbuffers::FlatBufferBuilder::CreateString(
                                          (flatbuffers::FlatBufferBuilder *)&v309,
                                          v153,
                                          v154);
        v156 = (unsigned int)String;
        esandinfo::esfaceid::releaseColorDetectMemory(String);
        mFree(s);
      }
      else
      {
        v157 = __strlen_chk("empty", 6u);
        v156 = flatbuffers::FlatBufferBuilder::CreateString((flatbuffers::FlatBufferBuilder *)&v309, "empty", v157);
      }
      v158 = CreateVerifyMsg(&v309, v152, v128, v156, 1LL);
      flatbuffers::FlatBufferBuilder::Finish((flatbuffers::FlatBufferBuilder *)&v309, v158, 0LL, 0);
      v159 = (const void *)v312;
      v203 = 0LL;
      v204 = 0LL;
      s = 0LL;
      v160 = (unsigned int)(v311 - v312 + DWORD2(v311));
      if ( v160 >= 0x17 )
      {
        v161 = (char *)operator new((v160 + 16) & 0x1FFFFFFF0LL);
        s = (char *)((v160 + 16) & 0x1FFFFFFF0LL | 1);
        v203 = v160;
        v204 = v161;
LABEL_267:
        memcpy(v161, v159, v160);
        goto LABEL_268;
      }
      v161 = (char *)&s + 1;
      LOBYTE(s) = 2 * (v311 - v312 + BYTE8(v311));
      if ( (_DWORD)v311 - (_DWORD)v312 + DWORD2(v311) )
        goto LABEL_267;
LABEL_268:
      v161[v160] = 0;
      v201 = 0LL;
      if ( (unsigned int)aesEncryption2(v159, v160, 2LL, &v201) )
      {
        v70 = 2;
        if ( ((unsigned __int8)s & 1) == 0 )
          goto LABEL_271;
LABEL_270:
        operator delete(v204);
        goto LABEL_271;
      }
      v198 = 22LL;
      v163 = v201;
      v199 = 0LL;
      v200 = 0LL;
      *(_QWORD *)v179 = *(_QWORD *)"flatbuffer@";
      *(_DWORD *)(v179 + 7) = 1081238886;
      BYTE4(v199) = 0;
      v164 = strlen(v163);
      v165 = std::string::append((int)&v198, v163, v164);
      v166 = *(_QWORD *)(v165 + 16);
      v167 = *(_QWORD *)(v165 + 1);
      v168 = *(_BYTE *)v165;
      *(_QWORD *)((char *)v303 + 7) = *(_QWORD *)(v165 + 8);
      v303[0] = v167;
      *(_QWORD *)v165 = 0LL;
      *(_QWORD *)(v165 + 8) = 0LL;
      *(_QWORD *)(v165 + 16) = 0LL;
      if ( (*(_BYTE *)v191 & 1) != 0 )
      {
        **((_BYTE **)a8 + 6) = 0;
        v169 = *((_BYTE *)a8 + 32);
        *((_QWORD *)a8 + 5) = 0LL;
        if ( (v169 & 1) != 0 )
        {
          operator delete(*((void **)a8 + 6));
          *((_QWORD *)a8 + 4) = 0LL;
        }
      }
      else
      {
        *v191 = 0;
      }
      v170 = *(_QWORD *)((char *)v303 + 7);
      v171 = v303[0];
      *(_QWORD *)((char *)v303 + 7) = 0LL;
      v172 = v198;
      *((_BYTE *)a8 + 32) = v168;
      v303[0] = 0LL;
      *((_QWORD *)a8 + 5) = v170;
      *(_QWORD *)((char *)a8 + 33) = v171;
      *((_QWORD *)a8 + 6) = v166;
      if ( (v172 & 1) != 0 )
        operator delete(v200);
      byte_826190[v190 + 8] = 1;
      mFree(qword_8261B0);
      mFree(v201);
      mFree(v206);
      v173 = (unsigned int)v313;
      *((_QWORD *)&dest + 1) = dest;
      LODWORD(v313) = 0;
      *((_QWORD *)&v312 + 1) -= 8 * v173;
      WORD2(v313) = 0;
      if ( *((_QWORD *)&v311 + 1) )
      {
        v174 = *((_QWORD *)&v311 + 1) + v311;
      }
      else
      {
        v311 = 0uLL;
        v174 = 0LL;
      }
      v175 = v316;
      *((_QWORD *)&v312 + 1) = *((_QWORD *)&v311 + 1);
      *(_QWORD *)&v312 = v174;
      HIWORD(v313) = 0;
      v314 = 1LL;
      if ( v316 )
      {
        v176 = v316 + 1;
        std::__tree<flatbuffers::Offset<flatbuffers::String>,flatbuffers::FlatBufferBuilder::StringOffsetCompare,std::allocator<flatbuffers::Offset<flatbuffers::String>>>::destroy(
          v316,
          v316[1]);
        *v175 = v176;
        v175[2] = 0LL;
        *v176 = 0LL;
      }
      v70 = 0;
      qword_8261B0 = 0LL;
      if ( ((unsigned __int8)s & 1) != 0 )
        goto LABEL_270;
LABEL_271:
      if ( (_QWORD)dest )
      {
        *((_QWORD *)&dest + 1) = dest;
        operator delete((void *)dest);
      }
      v50 = (__int64)v295;
      if ( v295 )
      {
        v296 = v295;
        operator delete(v295);
      }
      v162 = v316;
      if ( v316 )
      {
        std::__tree<flatbuffers::Offset<flatbuffers::String>,flatbuffers::FlatBufferBuilder::StringOffsetCompare,std::allocator<flatbuffers::Offset<flatbuffers::String>>>::destroy(
          v316,
          v316[1]);
        operator delete(v162);
      }
      v42 = v195;
      if ( *((_QWORD *)&v311 + 1) )
      {
        if ( v309 )
          v50 = (*(__int64 (**)(void))(*(_QWORD *)v309 + 24LL))();
        else
          operator delete[](*((void **)&v311 + 1));
      }
      *((_QWORD *)&v311 + 1) = 0LL;
      if ( v310[0] )
      {
        v50 = (__int64)v309;
        if ( v309 )
          v50 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v309 + 8LL))(v309);
      }
      if ( !v70 )
        goto LABEL_287;
LABEL_181:
      if ( v53 )
        goto LABEL_182;
LABEL_63:
      if ( v70 != 4 )
      {
        v47 = (void **)v42;
        v48 = *v17;
        if ( !*v17 )
          goto LABEL_302;
        goto LABEL_301;
      }
    }
    v295 = &off_7CACA8;
    v296 = 0LL;
    v297 = 0LL;
    v298 = 0LL;
    v299 = off_7CAD28;
    v88 = v194[2];
    v89 = v194[3];
    v90 = *(void **)v194;
    v300 = 0LL;
    v301 = 0LL;
    v302 = 1;
    v91 = (esandinfo::esfaceid::EsDlibWrapper *)rgbBuffToArray2D(v88, v89, v90, &v295);
    v92 = esandinfo::esfaceid::EsDlibWrapper::getInstance(v91);
    esandinfo::esfaceid::EsDlibWrapper::getFaceLandmarks(v92, &v295, v217);
    v212 = 0LL;
    v211 = 0uLL;
    v93 = (_OWORD *)operator new(0x20uLL);
    v212 = v93;
    *((_QWORD *)v93 + 2) = 0xB697E69780E88DBDLL;
    *v93 = xmmword_794783;
    v211 = xmmword_794550;
    *((_BYTE *)v93 + 24) = 0;
    TimeUtil::timeErapsed(v292, &v211);
    if ( (v211 & 1) != 0 )
      operator delete(v212);
    v187 = v74;
    v95 = *(_QWORD *)v194;
    v94 = *((_QWORD *)v194 + 1);
    v96 = v194[4];
    std::mutex::lock((std::mutex *)&unk_8261D0);
    v97 = v216;
    v98 = (char *)v215;
    v99 = v216 - (_BYTE *)v215;
    v207[0] = dest;
    v207[1] = v214;
    v208 = 0LL;
    v209 = 0LL;
    v210 = 0LL;
    if ( v216 == v215 )
    {
LABEL_188:
      v293[1] = v94;
      v293[0] = v95;
      v294 = v96;
      esandinfo::esfaceid::processLivingDetect((unsigned int)v197, v207, (_DWORD)v190 == 3, v293, a7);
      v115 = *((_BYTE *)a8 + 8);
      v17 = v185;
      a5 = v184;
      v42 = v195;
      v74 = v187;
      *a8 = (unsigned int)v309;
      if ( (v115 & 1) != 0 )
      {
        **((_BYTE **)a8 + 3) = 0;
        v116 = *((_BYTE *)a8 + 8);
        *((_QWORD *)a8 + 2) = 0LL;
        if ( (v116 & 1) != 0 )
        {
          operator delete(*((void **)a8 + 3));
          *((_QWORD *)a8 + 1) = 0LL;
        }
      }
      else
      {
        *v193 = 0;
      }
      v117 = *(_QWORD *)&v310[16];
      v118 = *(_OWORD *)v310;
      memset(v310, 0, sizeof(v310));
      *((_QWORD *)a8 + 3) = v117;
      *(_OWORD *)v193 = v118;
      v119 = a8 + 8;
      if ( (*(_BYTE *)v191 & 1) != 0 )
      {
        **((_BYTE **)a8 + 6) = 0;
        v120 = *((_BYTE *)a8 + 32);
        *((_QWORD *)a8 + 5) = 0LL;
        if ( (v120 & 1) != 0 )
        {
          operator delete(*((void **)a8 + 6));
          v119 = a8 + 8;
          *((_QWORD *)a8 + 4) = 0LL;
        }
      }
      else
      {
        *v191 = 0;
      }
      v121 = v312;
      v122 = v311;
      *(_QWORD *)&v312 = 0LL;
      v311 = 0uLL;
      *((_QWORD *)v119 + 2) = v121;
      *(_OWORD *)v119 = v122;
      memcpy(v188, (char *)&v312 + 8, 0x230u);
      if ( (v310[0] & 1) != 0 )
        operator delete(*(void **)&v310[16]);
      if ( v208 )
      {
        v209 = v208;
        operator delete(v208);
      }
      std::mutex::unlock((std::mutex *)&unk_8261D0);
      if ( v215 )
      {
        v216 = (char *)v215;
        operator delete(v215);
      }
      v50 = (__int64)v296;
      v295 = &off_7CACA8;
      if ( v296 )
      {
        operator delete[](v296);
        v296 = 0LL;
        v297 = 0LL;
        v298 = 0LL;
        v302 = 1;
        v300 = 0LL;
        v301 = 0LL;
      }
      goto LABEL_204;
    }
    if ( (unsigned __int64)(v99 >> 4) >> 60 )
      std::__vector_base_common<true>::__throw_length_error(&v208);
    v100 = (char *)operator new(v99);
    v209 = v100;
    v210 = &v100[16 * (v99 >> 4)];
    v208 = v100;
    if ( v98 != v97 )
    {
      v101 = ((unsigned __int64)(v99 - 16) >> 4) + 1;
      if ( v101 >= 4 )
      {
        v113 = (v99 - 16) & 0xFFFFFFFFFFFFFFF0LL;
        if ( v100 >= &v98[v113 + 16] || &v100[v113 + 16] <= v98 )
        {
          v133 = 16 * (v101 & 0x1FFFFFFFFFFFFFFCLL);
          v134 = v100 + 32;
          v100 += v133;
          v102 = &v98[v133];
          v135 = (__int128 *)(v98 + 32);
          v136 = v101 & 0x1FFFFFFFFFFFFFFCLL;
          do
          {
            v137 = *(v135 - 2);
            v138 = *(v135 - 1);
            v139 = *v135;
            v140 = v135[1];
            v135 += 4;
            v136 -= 4LL;
            *(v134 - 2) = v137;
            *(v134 - 1) = v138;
            *v134 = v139;
            v134[1] = v140;
            v134 += 4;
          }
          while ( v136 );
          if ( v101 == (v101 & 0x1FFFFFFFFFFFFFFCLL) )
            goto LABEL_187;
        }
        else
        {
          v102 = v98;
        }
      }
      else
      {
        v102 = v98;
      }
      do
      {
        *(_QWORD *)v100 = *(_QWORD *)v102;
        v114 = *((_QWORD *)v102 + 1);
        v102 += 16;
        *((_QWORD *)v100 + 1) = v114;
        v100 += 16;
      }
      while ( v102 != v97 );
    }
LABEL_187:
    v209 = v100;
    goto LABEL_188;
  }
  if ( !v22 )
    goto LABEL_55;
  v26 = a1 + 1;
  while ( *v26 == *v25 )
  {
    --v21;
    ++v26;
    ++v25;
    if ( !v21 )
      goto LABEL_55;
  }
LABEL_22:
  if ( a1 == a2 )
    goto LABEL_38;
  if ( (v20 & 1) != 0 )
    v27 = (const void *)*((_QWORD *)a2 + 2);
  else
    v27 = a2 + 1;
  if ( (v19 & 1) == 0 )
  {
    v28 = 22LL;
    v29 = v23 - 22;
    if ( v23 <= 0x16 )
      goto LABEL_28;
LABEL_32:
    std::string::__grow_by_and_replace(a1, v28, v29, v22, 0LL, v22, v23, v27);
    goto LABEL_38;
  }
  v28 = (*(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFELL) - 1;
  v29 = v23 - v28;
  if ( v23 > v28 )
    goto LABEL_32;
LABEL_28:
  if ( (v19 & 1) != 0 )
  {
    v30 = (void *)*((_QWORD *)a1 + 2);
    if ( !v23 )
      goto LABEL_35;
    goto LABEL_34;
  }
  v30 = a1 + 1;
  if ( v23 )
LABEL_34:
    memmove(v30, v27, v23);
LABEL_35:
  *((_BYTE *)v30 + v23) = 0;
  if ( (*a1 & 1) != 0 )
    *((_QWORD *)a1 + 1) = v23;
  else
    *a1 = 2 * v23;
LABEL_38:
  v291 = 0LL;
  v290 = 0uLL;
  if ( (*a2 & 1) == 0 )
  {
    v31 = *(_OWORD *)a2;
    v291 = (void *)*((_QWORD *)a2 + 2);
    v290 = v31;
    goto LABEL_47;
  }
  v32 = *((_QWORD *)a2 + 1);
  if ( v32 >= 0xFFFFFFFFFFFFFFF0LL )
    std::__basic_string_common<true>::__throw_length_error(&v290);
  v33 = (const void *)*((_QWORD *)a2 + 2);
  if ( v32 >= 0x17 )
  {
    v34 = (char *)operator new((v32 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    *(_QWORD *)&v290 = (v32 + 16) & 0xFFFFFFFFFFFFFFF0LL | 1;
    v291 = v34;
    *((_QWORD *)&v290 + 1) = v32;
  }
  else
  {
    v34 = (char *)&v290 + 1;
    LOBYTE(v290) = 2 * v32;
    if ( !v32 )
      goto LABEL_46;
  }
  memcpy(v34, v33, v32);
LABEL_46:
  v34[v32] = 0;
LABEL_47:
  ptr = 0LL;
  v288 = 0LL;
  v287 = 0LL;
  v35 = strlen(a6);
  v36 = v35;
  if ( v35 >= 0x17 )
  {
    v38 = (v35 + 16) & 0xFFFFFFFFFFFFFFF0LL;
    v37 = (char *)operator new(v38);
    v287 = v38 | 1;
    ptr = v37;
    v288 = v36;
    goto LABEL_51;
  }
  v37 = (char *)&v287 + 1;
  LOBYTE(v287) = 2 * v35;
  if ( v35 )https://github.com/RickyCong/testaaaa
LABEL_51:
    memcpy(v37, a6, v36);
  v37[v36] = 0;
  v39 = esandinfo::esfaceid::EsLivingDetection::verifyToken(a1, &v290, &v287, a8);
  if ( (v287 & 1) == 0 )
  {
    if ( (v290 & 1) == 0 )
      goto LABEL_54;
LABEL_58:
    operator delete(v291);
    if ( (v39 & 1) != 0 )
      goto LABEL_55;
    goto LABEL_59;
  }
  operator delete(ptr);
  if ( (v290 & 1) != 0 )
    goto LABEL_58;
LABEL_54:
  if ( (v39 & 1) != 0 )
    goto LABEL_55;
LABEL_59:
  v194 = 0LL;
  v42 = 0LL;
  v47 = 0LL;
  v48 = *v17;
  if ( *v17 )
LABEL_301:
    free(v48);
LABEL_302:
  operator delete(v17);
  if ( v47 )
  {
    if ( *v47 )
      free(*v47);
    operator delete((void *)v42);
  }
  if ( v194 )
  {
    if ( *(_QWORD *)v194 )
      free(*(void **)v194);
    operator delete(v194);
  }
  __android_log_print(6, "LDT", "\x1B[31m [%s]%s[%d]:", "WARN", "startDetect", 479LL);
  if ( (a8[2] & 1) != 0 )
    v177 = (char *)*((_QWORD *)a8 + 3);
  else
    v177 = (char *)a8 + 9;
  __android_log_print(6, "LDT", byte_7947A8, *a8, v177);
  return __android_log_print(6, "LDT", " :( \x1B[0m\n");
}
