/* Generated by Frama-C */
#include "stdio.h"
#include "stdlib.h"
int main(void)
{
  int __retres;
  int x;
  __e_acsl_memory_init((int *)0,(char ***)0,(size_t)8);
  /*@ assert 0 ≡ 0; */
  {
    __e_acsl_mpz_t __gen_e_acsl_;
    int __gen_e_acsl_eq;
    __gmpz_init_set_si(__gen_e_acsl_,0L);
    __gen_e_acsl_eq = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_),
                                 (__e_acsl_mpz_struct const *)(__gen_e_acsl_));
    __e_acsl_assert(__gen_e_acsl_eq == 0,(char *)"Assertion",(char *)"main",
                    (char *)"0 == 0",6);
    __gmpz_clear(__gen_e_acsl_);
  }
  x = 0;
  x ++;
  /*@ assert 0 ≢ 1; */
  {
    __e_acsl_mpz_t __gen_e_acsl__2;
    __e_acsl_mpz_t __gen_e_acsl__3;
    int __gen_e_acsl_ne;
    __gmpz_init_set_si(__gen_e_acsl__2,0L);
    __gmpz_init_set_si(__gen_e_acsl__3,1L);
    __gen_e_acsl_ne = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__2),
                                 (__e_acsl_mpz_struct const *)(__gen_e_acsl__3));
    __e_acsl_assert(__gen_e_acsl_ne != 0,(char *)"Assertion",(char *)"main",
                    (char *)"0 != 1",8);
    __gmpz_clear(__gen_e_acsl__2);
    __gmpz_clear(__gen_e_acsl__3);
  }
  /*@ assert 1152921504606846975 ≡ 0xfffffffffffffff; */
  {
    __e_acsl_mpz_t __gen_e_acsl__4;
    int __gen_e_acsl_eq_2;
    __gmpz_init_set_ui(__gen_e_acsl__4,1152921504606846975UL);
    __gen_e_acsl_eq_2 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__4),
                                   (__e_acsl_mpz_struct const *)(__gen_e_acsl__4));
    __e_acsl_assert(__gen_e_acsl_eq_2 == 0,(char *)"Assertion",
                    (char *)"main",
                    (char *)"1152921504606846975 == 0xfffffffffffffff",9);
    __gmpz_clear(__gen_e_acsl__4);
  }
  /*@ assert
      0xffffffffffffffffffffffffffffffff ≡
      0xffffffffffffffffffffffffffffffff;
  */
  {
    __e_acsl_mpz_t __gen_e_acsl__5;
    int __gen_e_acsl_eq_3;
    __gmpz_init_set_str(__gen_e_acsl__5,
                        "340282366920938463463374607431768211455",10);
    __gen_e_acsl_eq_3 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__5),
                                   (__e_acsl_mpz_struct const *)(__gen_e_acsl__5));
    __e_acsl_assert(__gen_e_acsl_eq_3 == 0,(char *)"Assertion",
                    (char *)"main",
                    (char *)"0xffffffffffffffffffffffffffffffff == 0xffffffffffffffffffffffffffffffff",
                    11);
    __gmpz_clear(__gen_e_acsl__5);
  }
  __retres = 0;
  return __retres;
}

