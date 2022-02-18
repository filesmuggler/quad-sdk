/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) eval_jac_g_leg_simple_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[40] = {36, 1, 0, 36, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35};
static const casadi_int casadi_s1[18] = {14, 1, 0, 14, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
static const casadi_int casadi_s2[216] = {28, 36, 0, 4, 8, 11, 16, 21, 24, 26, 28, 30, 34, 40, 46, 53, 60, 68, 75, 82, 90, 97, 104, 112, 119, 126, 134, 138, 142, 145, 150, 155, 158, 159, 160, 161, 165, 171, 177, 0, 9, 10, 11, 1, 9, 10, 11, 2, 9, 10, 3, 4, 5, 10, 11, 3, 4, 5, 9, 11, 5, 9, 10, 0, 6, 1, 7, 2, 8, 3, 9, 10, 11, 3, 4, 5, 9, 10, 11, 3, 4, 5, 9, 10, 11, 0, 6, 9, 10, 11, 12, 13, 1, 7, 9, 10, 11, 14, 15, 2, 8, 9, 10, 12, 13, 14, 15, 0, 6, 9, 10, 11, 16, 17, 1, 7, 9, 10, 11, 18, 19, 2, 8, 9, 10, 16, 17, 18, 19, 0, 6, 9, 10, 11, 20, 21, 1, 7, 9, 10, 11, 22, 23, 2, 8, 9, 10, 20, 21, 22, 23, 0, 6, 9, 10, 11, 24, 25, 1, 7, 9, 10, 11, 26, 27, 2, 8, 9, 10, 24, 25, 26, 27, 0, 9, 10, 11, 1, 9, 10, 11, 2, 9, 10, 3, 4, 5, 10, 11, 3, 4, 5, 9, 11, 5, 9, 10, 6, 7, 8, 3, 9, 10, 11, 3, 4, 5, 9, 10, 11, 3, 4, 5, 9, 10, 11};

/* eval_jac_g_leg_simple:(w[36],p[14])->(jac_g[28x36,177nz]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a101, a102, a103, a104, a105, a106, a107, a108, a109, a11, a110, a111, a112, a113, a114, a115, a116, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=-1.;
  if (res[0]!=0) res[0][0]=a0;
  a1=5.0000000000000000e-01;
  a2=arg[0]? arg[0][4] : 0;
  a3=arg[0]? arg[0][28] : 0;
  a2=(a2+a3);
  a3=2.;
  a2=(a2/a3);
  a4=sin(a2);
  a5=arg[0]? arg[0][22] : 0;
  a6=(a4*a5);
  a7=arg[0]? arg[0][19] : 0;
  a8=(a4*a7);
  a6=(a6+a8);
  a8=arg[0]? arg[0][16] : 0;
  a9=(a4*a8);
  a6=(a6+a9);
  a9=arg[0]? arg[0][5] : 0;
  a10=arg[0]? arg[0][29] : 0;
  a9=(a9+a10);
  a9=(a9/a3);
  a10=sin(a9);
  a11=cos(a2);
  a12=arg[0]? arg[0][23] : 0;
  a13=(a11*a12);
  a14=arg[0]? arg[0][20] : 0;
  a15=(a11*a14);
  a16=(a13+a15);
  a17=arg[0]? arg[0][17] : 0;
  a18=(a11*a17);
  a16=(a16+a18);
  a19=arg[0]? arg[0][14] : 0;
  a20=(a11*a19);
  a16=(a16+a20);
  a21=(a10*a16);
  a6=(a6+a21);
  a21=arg[0]? arg[0][13] : 0;
  a22=(a4*a21);
  a6=(a6+a22);
  a6=(a1*a6);
  a6=(-a6);
  if (res[0]!=0) res[0][1]=a6;
  a22=cos(a9);
  a23=(a12+a14);
  a23=(a23+a17);
  a23=(a23+a19);
  a24=(a22*a23);
  a24=(a1*a24);
  a24=(-a24);
  if (res[0]!=0) res[0][2]=a24;
  a25=(a5+a7);
  a25=(a25+a8);
  a25=(a25+a21);
  a25=(a1*a25);
  if (res[0]!=0) res[0][3]=a25;
  if (res[0]!=0) res[0][4]=a0;
  a26=arg[0]? arg[0][21] : 0;
  a27=(a4*a26);
  a28=arg[0]? arg[0][18] : 0;
  a29=(a4*a28);
  a27=(a27+a29);
  a29=arg[0]? arg[0][15] : 0;
  a30=(a4*a29);
  a27=(a27+a30);
  a30=(a13+a15);
  a30=(a30+a18);
  a30=(a30+a20);
  a31=(a22*a30);
  a27=(a27+a31);
  a31=arg[0]? arg[0][12] : 0;
  a32=(a4*a31);
  a27=(a27+a32);
  a27=(a1*a27);
  if (res[0]!=0) res[0][5]=a27;
  a32=(a12+a14);
  a32=(a32+a17);
  a32=(a32+a19);
  a33=(a10*a32);
  a33=(a1*a33);
  a33=(-a33);
  if (res[0]!=0) res[0][6]=a33;
  a34=(a26+a28);
  a34=(a34+a29);
  a34=(a34+a31);
  a34=(a1*a34);
  a34=(-a34);
  if (res[0]!=0) res[0][7]=a34;
  if (res[0]!=0) res[0][8]=a0;
  a35=(a11*a22);
  a36=(a35*a5);
  a37=(a11*a10);
  a38=(a37*a26);
  a36=(a36-a38);
  a38=(a11*a22);
  a39=(a38*a7);
  a40=(a11*a10);
  a41=(a40*a28);
  a39=(a39-a41);
  a36=(a36+a39);
  a39=(a11*a22);
  a41=(a39*a8);
  a42=(a11*a10);
  a43=(a42*a29);
  a41=(a41-a43);
  a36=(a36+a41);
  a41=(a11*a22);
  a43=(a41*a21);
  a44=(a11*a10);
  a45=(a44*a31);
  a43=(a43-a45);
  a36=(a36+a43);
  a36=(a1*a36);
  a36=(-a36);
  if (res[0]!=0) res[0][9]=a36;
  a43=(a10*a5);
  a45=(a22*a26);
  a43=(a43+a45);
  a45=(a10*a7);
  a46=(a22*a28);
  a45=(a45+a46);
  a43=(a43+a45);
  a45=(a10*a8);
  a46=(a22*a29);
  a45=(a45+a46);
  a43=(a43+a45);
  a45=(a10*a21);
  a46=(a22*a31);
  a45=(a45+a46);
  a43=(a43+a45);
  a43=(a1*a43);
  if (res[0]!=0) res[0][10]=a43;
  a45=arg[0]? arg[0][3] : 0;
  a46=arg[0]? arg[0][27] : 0;
  a45=(a45+a46);
  a45=(a45/a3);
  a46=sin(a45);
  a47=arg[0]? arg[0][11] : 0;
  a48=arg[0]? arg[0][35] : 0;
  a49=(a47+a48);
  a49=(a49/a3);
  a50=(a4/a11);
  a51=(a49*a50);
  a51=(a46*a51);
  a52=cos(a45);
  a53=arg[0]? arg[0][10] : 0;
  a54=arg[0]? arg[0][34] : 0;
  a55=(a53+a54);
  a55=(a55/a3);
  a56=(a4/a11);
  a57=(a55*a56);
  a57=(a52*a57);
  a51=(a51-a57);
  a51=(a1*a51);
  a57=arg[1]? arg[1][0] : 0;
  a58=(1./a57);
  a59=(a51-a58);
  if (res[0]!=0) res[0][11]=a59;
  a59=(a52*a49);
  a60=(a46*a55);
  a59=(a59+a60);
  a59=(a1*a59);
  if (res[0]!=0) res[0][12]=a59;
  a60=(a49/a11);
  a60=(a46*a60);
  a61=(a55/a11);
  a61=(a52*a61);
  a60=(a60-a61);
  a60=(a1*a60);
  if (res[0]!=0) res[0][13]=a60;
  a61=22354293482292820.;
  a62=-1.3877787807814460e-17;
  a63=arg[0]? arg[0][9] : 0;
  a64=arg[0]? arg[0][33] : 0;
  a65=(a63+a64);
  a65=(a65/a3);
  a66=(a62*a65);
  a67=(a61*a66);
  a68=(a55*a67);
  a69=-4.8802931580173908e-01;
  a48=(a48-a47);
  a47=(a48/a57);
  a47=(a69*a47);
  a68=(a68+a47);
  a68=(a52*a68);
  a47=26445640661418040.;
  a66=(a47*a66);
  a70=(a49*a66);
  a71=4.3125046780173909e-01;
  a54=(a54-a53);
  a53=(a54/a57);
  a53=(a71*a53);
  a70=(a70+a53);
  a70=(a46*a70);
  a68=(a68-a70);
  a68=(a1*a68);
  if (res[0]!=0) res[0][14]=a68;
  a70=-3.6700698954086958e-01;
  a53=(a65*a49);
  a72=(a53*a11);
  a72=(a70*a72);
  a54=(a54/a57);
  a54=(a71*a54);
  a73=(a11*a54);
  a72=(a72+a73);
  a52=(a52*a72);
  a72=(a65*a55);
  a73=3.1022814154086947e-01;
  a74=(a73*a11);
  a75=(a72*a74);
  a76=4.8802931580173908e-01;
  a48=(a48/a57);
  a48=(a76*a48);
  a77=(a11*a48);
  a75=(a75+a77);
  a46=(a46*a75);
  a52=(a52-a46);
  a52=(a1*a52);
  if (res[0]!=0) res[0][15]=a52;
  a46=cos(a2);
  a75=sin(a45);
  a77=(a55*a75);
  a78=(a77/a11);
  a45=cos(a45);
  a79=(a49*a45);
  a80=(a79/a11);
  a78=(a78+a80);
  a78=(a46*a78);
  a2=sin(a2);
  a80=(a65*a11);
  a79=(a79*a4);
  a80=(a80+a79);
  a77=(a77*a4);
  a80=(a80+a77);
  a80=(a80/a11);
  a80=(a80/a11);
  a77=(a65/a11);
  a80=(a80-a77);
  a80=(a2*a80);
  a78=(a78+a80);
  a78=(a1*a78);
  a78=(-a78);
  if (res[0]!=0) res[0][16]=a78;
  a80=(1./a57);
  a77=(-a80);
  if (res[0]!=0) res[0][17]=a77;
  a77=(a49*a45);
  a79=(a55*a75);
  a77=(a77+a79);
  a77=(a77/a11);
  a77=(a77/a11);
  a77=(a2*a77);
  a77=(a1*a77);
  a77=(-a77);
  if (res[0]!=0) res[0][18]=a77;
  a79=arg[1]? arg[1][11] : 0;
  a81=arg[0]? arg[0][0] : 0;
  a82=arg[0]? arg[0][24] : 0;
  a81=(a81+a82);
  a81=(a81/a3);
  a82=(a79-a81);
  a83=(a82*a5);
  a84=arg[1]? arg[1][12] : 0;
  a85=arg[0]? arg[0][1] : 0;
  a86=arg[0]? arg[0][25] : 0;
  a85=(a85+a86);
  a85=(a85/a3);
  a86=(a84-a85);
  a87=(a86*a26);
  a83=(a83-a87);
  a87=arg[1]? arg[1][8] : 0;
  a88=(a87-a81);
  a89=(a88*a7);
  a83=(a83+a89);
  a89=arg[1]? arg[1][9] : 0;
  a90=(a89-a85);
  a91=(a90*a28);
  a83=(a83-a91);
  a91=arg[1]? arg[1][5] : 0;
  a92=(a91-a81);
  a93=(a92*a8);
  a83=(a83+a93);
  a93=arg[1]? arg[1][6] : 0;
  a94=(a93-a85);
  a95=(a94*a29);
  a83=(a83-a95);
  a95=arg[1]? arg[1][2] : 0;
  a96=(a95-a81);
  a97=(a96*a21);
  a83=(a83+a97);
  a97=arg[1]? arg[1][3] : 0;
  a98=(a97-a85);
  a99=(a98*a31);
  a83=(a83-a99);
  a83=(a46*a83);
  a99=(a85*a22);
  a100=(a81*a10);
  a101=(a99-a100);
  a102=(a84*a22);
  a101=(a101-a102);
  a102=(a79*a10);
  a101=(a101+a102);
  a102=(a101*a12);
  a103=arg[1]? arg[1][13] : 0;
  a104=arg[0]? arg[0][2] : 0;
  a105=arg[0]? arg[0][26] : 0;
  a104=(a104+a105);
  a104=(a104/a3);
  a103=(a103-a104);
  a3=(a103*a5);
  a105=(a22*a3);
  a102=(a102+a105);
  a105=(a103*a26);
  a106=(a10*a105);
  a102=(a102-a106);
  a106=(a99-a100);
  a107=(a89*a22);
  a106=(a106-a107);
  a107=(a87*a10);
  a106=(a106+a107);
  a107=(a106*a14);
  a102=(a102+a107);
  a107=arg[1]? arg[1][10] : 0;
  a107=(a107-a104);
  a108=(a107*a7);
  a109=(a22*a108);
  a102=(a102+a109);
  a109=(a107*a28);
  a110=(a10*a109);
  a102=(a102-a110);
  a110=(a99-a100);
  a111=(a93*a22);
  a110=(a110-a111);
  a111=(a91*a10);
  a110=(a110+a111);
  a111=(a110*a17);
  a102=(a102+a111);
  a111=arg[1]? arg[1][7] : 0;
  a111=(a111-a104);
  a112=(a111*a8);
  a113=(a22*a112);
  a102=(a102+a113);
  a113=(a111*a29);
  a114=(a10*a113);
  a102=(a102-a114);
  a99=(a99-a100);
  a100=(a97*a22);
  a99=(a99-a100);
  a100=(a95*a10);
  a99=(a99+a100);
  a100=(a99*a19);
  a102=(a102+a100);
  a100=arg[1]? arg[1][4] : 0;
  a100=(a100-a104);
  a104=(a100*a21);
  a114=(a22*a104);
  a102=(a102+a114);
  a114=(a100*a31);
  a115=(a10*a114);
  a102=(a102-a115);
  a102=(a2*a102);
  a83=(a83-a102);
  a83=(a1*a83);
  if (res[0]!=0) res[0][19]=a83;
  a102=-5.6778848000000048e-02;
  a115=(a55*a49);
  a115=(a102*a115);
  a116=-1.2102232626086960e-01;
  a64=(a64-a63);
  a64=(a64/a57);
  a64=(a116*a64);
  a115=(a115+a64);
  a46=(a46*a115);
  a70=(a70*a75);
  a53=(a53*a70);
  a72=(a72*a45);
  a73=(a73*a72);
  a53=(a53+a73);
  a48=(a45*a48);
  a53=(a53+a48);
  a54=(a75*a54);
  a53=(a53+a54);
  a2=(a2*a53);
  a46=(a46-a2);
  a46=(a1*a46);
  if (res[0]!=0) res[0][20]=a46;
  a2=(1./a57);
  a53=(-a2);
  if (res[0]!=0) res[0][21]=a53;
  a53=cos(a9);
  a54=(a79*a13);
  a105=(a11*a105);
  a54=(a54-a105);
  a105=(a87*a15);
  a54=(a54+a105);
  a109=(a11*a109);
  a54=(a54-a109);
  a109=(a91*a18);
  a54=(a54+a109);
  a113=(a11*a113);
  a54=(a54-a113);
  a113=(a95*a20);
  a54=(a54+a113);
  a16=(a81*a16);
  a54=(a54-a16);
  a114=(a11*a114);
  a54=(a54-a114);
  a54=(a53*a54);
  a9=sin(a9);
  a3=(a11*a3);
  a13=(a84*a13);
  a3=(a3-a13);
  a15=(a89*a15);
  a3=(a3-a15);
  a108=(a11*a108);
  a3=(a3+a108);
  a18=(a93*a18);
  a3=(a3-a18);
  a112=(a11*a112);
  a3=(a3+a112);
  a20=(a97*a20);
  a3=(a3-a20);
  a30=(a85*a30);
  a3=(a3+a30);
  a104=(a11*a104);
  a3=(a3+a104);
  a3=(a9*a3);
  a54=(a54-a3);
  a54=(a1*a54);
  if (res[0]!=0) res[0][22]=a54;
  a3=(a84*a12);
  a5=(a103*a5);
  a3=(a3-a5);
  a5=(a89*a14);
  a3=(a3+a5);
  a7=(a107*a7);
  a3=(a3-a7);
  a7=(a93*a17);
  a3=(a3+a7);
  a8=(a111*a8);
  a3=(a3-a8);
  a8=(a97*a19);
  a3=(a3+a8);
  a32=(a85*a32);
  a3=(a3-a32);
  a21=(a100*a21);
  a3=(a3-a21);
  a53=(a53*a3);
  a12=(a79*a12);
  a26=(a103*a26);
  a12=(a12-a26);
  a14=(a87*a14);
  a12=(a12+a14);
  a28=(a107*a28);
  a12=(a12-a28);
  a17=(a91*a17);
  a12=(a12+a17);
  a29=(a111*a29);
  a12=(a12-a29);
  a19=(a95*a19);
  a12=(a12+a19);
  a23=(a81*a23);
  a12=(a12-a23);
  a31=(a100*a31);
  a12=(a12-a31);
  a9=(a9*a12);
  a53=(a53-a9);
  a53=(a1*a53);
  if (res[0]!=0) res[0][23]=a53;
  a9=(-a57);
  if (res[0]!=0) res[0][24]=a9;
  if (res[0]!=0) res[0][25]=a0;
  a9=(-a57);
  if (res[0]!=0) res[0][26]=a9;
  if (res[0]!=0) res[0][27]=a0;
  a9=(-a57);
  if (res[0]!=0) res[0][28]=a9;
  if (res[0]!=0) res[0][29]=a0;
  a9=-5.0000000000000000e-01;
  if (res[0]!=0) res[0][30]=a9;
  a12=1.2102232626086960e-01;
  a12=(a12/a57);
  a31=(-a12);
  if (res[0]!=0) res[0][31]=a31;
  a31=(a49*a45);
  a47=(a47*a31);
  a31=(a55*a75);
  a61=(a61*a31);
  a47=(a47+a61);
  a62=(a62*a47);
  a62=(a1*a62);
  if (res[0]!=0) res[0][32]=a62;
  a70=(a11*a70);
  a47=(a49*a70);
  a74=(a45*a74);
  a61=(a55*a74);
  a47=(a47+a61);
  a47=(a1*a47);
  a116=(a116*a4);
  a116=(a116/a57);
  a61=(a47-a116);
  if (res[0]!=0) res[0][33]=a61;
  a56=(a75*a56);
  a56=(a1*a56);
  a56=(-a56);
  if (res[0]!=0) res[0][34]=a56;
  a61=(a1*a45);
  a61=(-a61);
  if (res[0]!=0) res[0][35]=a61;
  a31=(a75/a11);
  a31=(a1*a31);
  a31=(-a31);
  if (res[0]!=0) res[0][36]=a31;
  a23=5.6778848000000048e-02;
  a19=(a23*a49);
  a19=(a1*a19);
  if (res[0]!=0) res[0][37]=a19;
  a67=(a75*a67);
  a67=(a1*a67);
  a29=(a71*a45);
  a29=(a29/a57);
  a17=(a67-a29);
  if (res[0]!=0) res[0][38]=a17;
  a74=(a65*a74);
  a102=(a102*a4);
  a49=(a49*a102);
  a74=(a74+a49);
  a74=(a1*a74);
  a49=(a11*a75);
  a71=(a71*a49);
  a71=(a71/a57);
  a49=(a74-a71);
  if (res[0]!=0) res[0][39]=a49;
  a50=(a45*a50);
  a50=(a1*a50);
  a50=(-a50);
  if (res[0]!=0) res[0][40]=a50;
  a49=(a1*a75);
  if (res[0]!=0) res[0][41]=a49;
  a17=(a45/a11);
  a17=(a1*a17);
  a17=(-a17);
  if (res[0]!=0) res[0][42]=a17;
  a23=(a23*a55);
  a23=(a1*a23);
  if (res[0]!=0) res[0][43]=a23;
  a66=(a45*a66);
  a66=(a1*a66);
  a69=(a69*a75);
  a69=(a69/a57);
  a75=(a66-a69);
  if (res[0]!=0) res[0][44]=a75;
  a65=(a65*a70);
  a55=(a55*a102);
  a65=(a65+a55);
  a65=(a1*a65);
  a45=(a45*a11);
  a76=(a76*a45);
  a76=(a76/a57);
  a45=(a65-a76);
  if (res[0]!=0) res[0][45]=a45;
  a45=7.5187969924812026e-02;
  a55=casadi_sq(a57);
  a102=(a1*a55);
  a102=(a45*a102);
  a102=(-a102);
  if (res[0]!=0) res[0][46]=a102;
  a70=(a45*a57);
  a70=(-a70);
  if (res[0]!=0) res[0][47]=a70;
  a98=(a4*a98);
  a44=(a44*a100);
  a98=(a98+a44);
  a98=(-a98);
  if (res[0]!=0) res[0][48]=a98;
  a98=(a22*a100);
  a98=(-a98);
  if (res[0]!=0) res[0][49]=a98;
  a98=(a85-a97);
  a98=(-a98);
  if (res[0]!=0) res[0][50]=a98;
  a98=1.;
  if (res[0]!=0) res[0][51]=a98;
  if (res[0]!=0) res[0][52]=a0;
  a44=(a1*a55);
  a44=(a45*a44);
  a44=(-a44);
  if (res[0]!=0) res[0][53]=a44;
  a75=(a45*a57);
  a75=(-a75);
  if (res[0]!=0) res[0][54]=a75;
  a28=(a4*a96);
  a41=(a41*a100);
  a28=(a28+a41);
  if (res[0]!=0) res[0][55]=a28;
  a100=(a10*a100);
  a100=(-a100);
  if (res[0]!=0) res[0][56]=a100;
  a96=(-a96);
  if (res[0]!=0) res[0][57]=a96;
  if (res[0]!=0) res[0][58]=a98;
  if (res[0]!=0) res[0][59]=a0;
  a1=(a1*a55);
  a1=(a45*a1);
  a1=(-a1);
  if (res[0]!=0) res[0][60]=a1;
  a45=(a45*a57);
  a45=(-a45);
  if (res[0]!=0) res[0][61]=a45;
  a99=(a11*a99);
  if (res[0]!=0) res[0][62]=a99;
  a81=(a81*a22);
  a99=(a85*a10);
  a57=(a81+a99);
  a95=(a95*a22);
  a57=(a57-a95);
  a97=(a97*a10);
  a57=(a57-a97);
  a57=(-a57);
  if (res[0]!=0) res[0][63]=a57;
  a57=arg[1]? arg[1][1] : 0;
  a97=(-a57);
  if (res[0]!=0) res[0][64]=a97;
  a97=(-a57);
  if (res[0]!=0) res[0][65]=a97;
  a97=(-a57);
  if (res[0]!=0) res[0][66]=a97;
  a97=(-a57);
  if (res[0]!=0) res[0][67]=a97;
  if (res[0]!=0) res[0][68]=a102;
  if (res[0]!=0) res[0][69]=a70;
  a94=(a4*a94);
  a42=(a42*a111);
  a94=(a94+a42);
  a94=(-a94);
  if (res[0]!=0) res[0][70]=a94;
  a94=(a22*a111);
  a94=(-a94);
  if (res[0]!=0) res[0][71]=a94;
  a94=(a85-a93);
  a94=(-a94);
  if (res[0]!=0) res[0][72]=a94;
  if (res[0]!=0) res[0][73]=a98;
  if (res[0]!=0) res[0][74]=a0;
  if (res[0]!=0) res[0][75]=a44;
  if (res[0]!=0) res[0][76]=a75;
  a94=(a4*a92);
  a39=(a39*a111);
  a94=(a94+a39);
  if (res[0]!=0) res[0][77]=a94;
  a111=(a10*a111);
  a111=(-a111);
  if (res[0]!=0) res[0][78]=a111;
  a92=(-a92);
  if (res[0]!=0) res[0][79]=a92;
  if (res[0]!=0) res[0][80]=a98;
  if (res[0]!=0) res[0][81]=a0;
  if (res[0]!=0) res[0][82]=a1;
  if (res[0]!=0) res[0][83]=a45;
  a110=(a11*a110);
  if (res[0]!=0) res[0][84]=a110;
  a110=(a81+a99);
  a91=(a91*a22);
  a110=(a110-a91);
  a93=(a93*a10);
  a110=(a110-a93);
  a110=(-a110);
  if (res[0]!=0) res[0][85]=a110;
  a110=(-a57);
  if (res[0]!=0) res[0][86]=a110;
  a110=(-a57);
  if (res[0]!=0) res[0][87]=a110;
  a110=(-a57);
  if (res[0]!=0) res[0][88]=a110;
  a110=(-a57);
  if (res[0]!=0) res[0][89]=a110;
  if (res[0]!=0) res[0][90]=a102;
  if (res[0]!=0) res[0][91]=a70;
  a90=(a4*a90);
  a40=(a40*a107);
  a90=(a90+a40);
  a90=(-a90);
  if (res[0]!=0) res[0][92]=a90;
  a90=(a22*a107);
  a90=(-a90);
  if (res[0]!=0) res[0][93]=a90;
  a90=(a85-a89);
  a90=(-a90);
  if (res[0]!=0) res[0][94]=a90;
  if (res[0]!=0) res[0][95]=a98;
  if (res[0]!=0) res[0][96]=a0;
  if (res[0]!=0) res[0][97]=a44;
  if (res[0]!=0) res[0][98]=a75;
  a90=(a4*a88);
  a38=(a38*a107);
  a90=(a90+a38);
  if (res[0]!=0) res[0][99]=a90;
  a107=(a10*a107);
  a107=(-a107);
  if (res[0]!=0) res[0][100]=a107;
  a88=(-a88);
  if (res[0]!=0) res[0][101]=a88;
  if (res[0]!=0) res[0][102]=a98;
  if (res[0]!=0) res[0][103]=a0;
  if (res[0]!=0) res[0][104]=a1;
  if (res[0]!=0) res[0][105]=a45;
  a106=(a11*a106);
  if (res[0]!=0) res[0][106]=a106;
  a106=(a81+a99);
  a87=(a87*a22);
  a106=(a106-a87);
  a89=(a89*a10);
  a106=(a106-a89);
  a106=(-a106);
  if (res[0]!=0) res[0][107]=a106;
  a106=(-a57);
  if (res[0]!=0) res[0][108]=a106;
  a106=(-a57);
  if (res[0]!=0) res[0][109]=a106;
  a106=(-a57);
  if (res[0]!=0) res[0][110]=a106;
  a106=(-a57);
  if (res[0]!=0) res[0][111]=a106;
  if (res[0]!=0) res[0][112]=a102;
  if (res[0]!=0) res[0][113]=a70;
  a86=(a4*a86);
  a37=(a37*a103);
  a86=(a86+a37);
  a86=(-a86);
  if (res[0]!=0) res[0][114]=a86;
  a86=(a22*a103);
  a86=(-a86);
  if (res[0]!=0) res[0][115]=a86;
  a85=(a85-a84);
  a85=(-a85);
  if (res[0]!=0) res[0][116]=a85;
  if (res[0]!=0) res[0][117]=a98;
  if (res[0]!=0) res[0][118]=a0;
  if (res[0]!=0) res[0][119]=a44;
  if (res[0]!=0) res[0][120]=a75;
  a4=(a4*a82);
  a35=(a35*a103);
  a4=(a4+a35);
  if (res[0]!=0) res[0][121]=a4;
  a103=(a10*a103);
  a103=(-a103);
  if (res[0]!=0) res[0][122]=a103;
  a82=(-a82);
  if (res[0]!=0) res[0][123]=a82;
  if (res[0]!=0) res[0][124]=a98;
  if (res[0]!=0) res[0][125]=a0;
  if (res[0]!=0) res[0][126]=a1;
  if (res[0]!=0) res[0][127]=a45;
  a11=(a11*a101);
  if (res[0]!=0) res[0][128]=a11;
  a81=(a81+a99);
  a79=(a79*a22);
  a81=(a81-a79);
  a84=(a84*a10);
  a81=(a81-a84);
  a81=(-a81);
  if (res[0]!=0) res[0][129]=a81;
  a81=(-a57);
  if (res[0]!=0) res[0][130]=a81;
  a81=(-a57);
  if (res[0]!=0) res[0][131]=a81;
  a81=(-a57);
  if (res[0]!=0) res[0][132]=a81;
  a57=(-a57);
  if (res[0]!=0) res[0][133]=a57;
  if (res[0]!=0) res[0][134]=a98;
  if (res[0]!=0) res[0][135]=a6;
  if (res[0]!=0) res[0][136]=a24;
  if (res[0]!=0) res[0][137]=a25;
  if (res[0]!=0) res[0][138]=a98;
  if (res[0]!=0) res[0][139]=a27;
  if (res[0]!=0) res[0][140]=a33;
  if (res[0]!=0) res[0][141]=a34;
  if (res[0]!=0) res[0][142]=a98;
  if (res[0]!=0) res[0][143]=a36;
  if (res[0]!=0) res[0][144]=a43;
  a51=(a51+a58);
  if (res[0]!=0) res[0][145]=a51;
  if (res[0]!=0) res[0][146]=a59;
  if (res[0]!=0) res[0][147]=a60;
  if (res[0]!=0) res[0][148]=a68;
  if (res[0]!=0) res[0][149]=a52;
  if (res[0]!=0) res[0][150]=a78;
  if (res[0]!=0) res[0][151]=a80;
  if (res[0]!=0) res[0][152]=a77;
  if (res[0]!=0) res[0][153]=a83;
  if (res[0]!=0) res[0][154]=a46;
  if (res[0]!=0) res[0][155]=a2;
  if (res[0]!=0) res[0][156]=a54;
  if (res[0]!=0) res[0][157]=a53;
  if (res[0]!=0) res[0][158]=a98;
  if (res[0]!=0) res[0][159]=a98;
  if (res[0]!=0) res[0][160]=a98;
  if (res[0]!=0) res[0][161]=a9;
  if (res[0]!=0) res[0][162]=a12;
  if (res[0]!=0) res[0][163]=a62;
  a116=(a116+a47);
  if (res[0]!=0) res[0][164]=a116;
  if (res[0]!=0) res[0][165]=a56;
  if (res[0]!=0) res[0][166]=a61;
  if (res[0]!=0) res[0][167]=a31;
  if (res[0]!=0) res[0][168]=a19;
  a29=(a29+a67);
  if (res[0]!=0) res[0][169]=a29;
  a71=(a71+a74);
  if (res[0]!=0) res[0][170]=a71;
  if (res[0]!=0) res[0][171]=a50;
  if (res[0]!=0) res[0][172]=a49;
  if (res[0]!=0) res[0][173]=a17;
  if (res[0]!=0) res[0][174]=a23;
  a69=(a69+a66);
  if (res[0]!=0) res[0][175]=a69;
  a76=(a76+a65);
  if (res[0]!=0) res[0][176]=a76;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_simple(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_simple_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_simple_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_jac_g_leg_simple_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_simple_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void eval_jac_g_leg_simple_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_jac_g_leg_simple_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void eval_jac_g_leg_simple_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_jac_g_leg_simple_n_in(void) { return 2;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int eval_jac_g_leg_simple_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real eval_jac_g_leg_simple_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_jac_g_leg_simple_name_in(casadi_int i){
  switch (i) {
    case 0: return "w";
    case 1: return "p";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* eval_jac_g_leg_simple_name_out(casadi_int i){
  switch (i) {
    case 0: return "jac_g";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_jac_g_leg_simple_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* eval_jac_g_leg_simple_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int eval_jac_g_leg_simple_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


