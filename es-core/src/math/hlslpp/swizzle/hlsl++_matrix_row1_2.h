// -------------------------------
// _mNM
// -------------------------------

swizzle1<1> _m11;

swizzle2<0, 1> _m10_m11;
swizzle2<1, 0> _m11_m10;
swizzle2<1, 1> _m11_m11;

swizzle3<0, 0, 1> _m10_m10_m11;
swizzle3<0, 1, 0> _m10_m11_m10;
swizzle3<0, 1, 1> _m10_m11_m11;

swizzle3<1, 0, 0> _m11_m10_m10;
swizzle3<1, 0, 1> _m11_m10_m11;
swizzle3<1, 1, 0> _m11_m11_m10;
swizzle3<1, 1, 1> _m11_m11_m11;

swizzle4<0, 0, 0, 1> _m10_m10_m10_m11;

swizzle4<0, 0, 1, 0> _m10_m10_m11_m10;
swizzle4<0, 0, 1, 1> _m10_m10_m11_m11;

swizzle4<0, 1, 0, 0> _m10_m11_m10_m10;
swizzle4<0, 1, 0, 1> _m10_m11_m10_m11;

swizzle4<0, 1, 1, 0> _m10_m11_m11_m10;
swizzle4<0, 1, 1, 1> _m10_m11_m11_m11;

swizzle4<1, 0, 0, 0> _m11_m10_m10_m10;
swizzle4<1, 0, 0, 1> _m11_m10_m10_m11;

swizzle4<1, 0, 1, 0> _m11_m10_m11_m10;
swizzle4<1, 0, 1, 1> _m11_m10_m11_m11;

swizzle4<1, 1, 0, 0> _m11_m11_m10_m10;
swizzle4<1, 1, 0, 1> _m11_m11_m10_m11;

swizzle4<1, 1, 1, 0> _m11_m11_m11_m10;
swizzle4<1, 1, 1, 1> _m11_m11_m11_m11;

// -------------------------------
// _NM
// -------------------------------

swizzle1<1> _22;

swizzle2<0, 1> _21_22;
swizzle2<1, 0> _22_21;
swizzle2<1, 1> _22_22;

swizzle3<0, 0, 1> _21_21_22;
swizzle3<0, 1, 0> _21_22_21;
swizzle3<0, 1, 1> _21_22_22;

swizzle3<1, 0, 0> _22_21_21;
swizzle3<1, 0, 1> _22_21_22;
swizzle3<1, 1, 0> _22_22_21;
swizzle3<1, 1, 1> _22_22_22;

swizzle4<0, 0, 0, 1> _21_21_21_22;

swizzle4<0, 0, 1, 0> _21_21_22_21;
swizzle4<0, 0, 1, 1> _21_21_22_22;

swizzle4<0, 1, 0, 0> _21_22_21_21;
swizzle4<0, 1, 0, 1> _21_22_21_22;

swizzle4<0, 1, 1, 0> _21_22_22_21;
swizzle4<0, 1, 1, 1> _21_22_22_22;

swizzle4<1, 0, 0, 0> _22_21_21_21;
swizzle4<1, 0, 0, 1> _22_21_21_22;

swizzle4<1, 0, 1, 0> _22_21_22_21;
swizzle4<1, 0, 1, 1> _22_21_22_22;

swizzle4<1, 1, 0, 0> _22_22_21_21;
swizzle4<1, 1, 0, 1> _22_22_21_22;

swizzle4<1, 1, 1, 0> _22_22_22_21;
swizzle4<1, 1, 1, 1> _22_22_22_22;