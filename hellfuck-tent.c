// gcc hellfuck-tent.c && ./a.out

#include <stdio.h>

#define r return 0;
#define p(x) printf(x);r
#define S(x)T(x)
#define T(x)#x
#define c char
#define E(x) x()x()x()
#define D(x) x()x()
#define Z() E(I)E(I)E(I)E(I)E(I)E(I)I()I()
#define J() "\n"
#define F() "\\\\"
#define G() "/"
#define I() " "
#define Y() "-"
#define B() "z"
#define H(x,y) x ## y
#define L(x,y) H(x,y)
#define M(x) x ## x
#define O(x) M(x)M(x)M(x)
#define N(x) O(x)
#define Q() _
#define R(x) '\0'+x
#define P Q()Q()Q()
#define U (c)95
#define X s(U)
#define A() \
                      E(I)I()S(L(N(P),Q()Q()Q()))J() \
                    E(I                        )G(  )Z(\
                  )G(                        )F(      )E(\
                I)E                        (I)          I()\
              I()                        B()              J()\
            D(I                        )G(                  )Z(\
          )G(                       )I(                       )I(\
        )F(                       )E(                           I)E\
      (I)                       B()                               J()\
    I()G()Z()G()E(I)I()F()E(I)I()B()J()G()Z()G()E(I)E(I)F()I()I()B()J()\
  S(L   (L(   N(P   ),Q   ())   ,Q(   )))   G()   E(Y   )E(   Y)E   (Y) \
                                   J()


#pragma message\
  "\nHere's a nice pretty tent for you!:\n\n"\
  A()

c main() {
  p(A())
}
