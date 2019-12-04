/* Generated by Frama-C */
#include "stdio.h"
#include "stdlib.h"
int main(void)
{
  int __retres;
  __e_acsl_memory_init((int *)0,(char ***)0,(size_t)8);
  int x = -3;
  int y = 2;
  long z = 2L;
  /*@ assert -3 ≡ x; */
  __e_acsl_assert(-3 == x,(char *)"Assertion",(char *)"main",
                  (char *)"-3 == x",10);
  /*@ assert x ≡ -3; */
  __e_acsl_assert(x == -3,(char *)"Assertion",(char *)"main",
                  (char *)"x == -3",11);
  /*@ assert 0 ≢ ~0; */
  __e_acsl_assert(1,(char *)"Assertion",(char *)"main",(char *)"0 != ~0",12);
  /*@ assert x + 1 ≡ -2; */
  __e_acsl_assert(x + 1L == -2L,(char *)"Assertion",(char *)"main",
                  (char *)"x + 1 == -2",14);
  /*@ assert x - 1 ≡ -4; */
  __e_acsl_assert(x - 1L == -4L,(char *)"Assertion",(char *)"main",
                  (char *)"x - 1 == -4",15);
  /*@ assert x * 3 ≡ -9; */
  __e_acsl_assert(x * 3L == -9L,(char *)"Assertion",(char *)"main",
                  (char *)"x * 3 == -9",16);
  /*@ assert x / 3 ≡ -1; */
  __e_acsl_assert(x / 3 == -1,(char *)"Assertion",(char *)"main",
                  (char *)"x / 3 == -1",17);
  /*@ assert 0xffffffffffffffffffffff / 0xffffffffffffffffffffff ≡ 1; */
  {
    __e_acsl_mpz_t __gen_e_acsl_;
    __e_acsl_mpz_t __gen_e_acsl__2;
    int __gen_e_acsl_div_guard;
    __e_acsl_mpz_t __gen_e_acsl_div;
    long __gen_e_acsl__3;
    __gmpz_init_set_str(__gen_e_acsl_,"309485009821345068724781055",10);
    __gmpz_init_set_si(__gen_e_acsl__2,0L);
    __gen_e_acsl_div_guard = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_),
                                        (__e_acsl_mpz_struct const *)(__gen_e_acsl__2));
    __gmpz_init(__gen_e_acsl_div);
    /*@ assert E_ACSL: 0xffffffffffffffffffffff ≢ 0; */
    __e_acsl_assert(! (__gen_e_acsl_div_guard == 0),(char *)"Assertion",
                    (char *)"main",(char *)"0xffffffffffffffffffffff == 0",
                    18);
    __gmpz_tdiv_q(__gen_e_acsl_div,
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl_),
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl_));
    __gen_e_acsl__3 = __gmpz_get_si((__e_acsl_mpz_struct const *)(__gen_e_acsl_div));
    __e_acsl_assert(__gen_e_acsl__3 == 1L,(char *)"Assertion",(char *)"main",
                    (char *)"0xffffffffffffffffffffff / 0xffffffffffffffffffffff == 1",
                    18);
    __gmpz_clear(__gen_e_acsl_);
    __gmpz_clear(__gen_e_acsl__2);
    __gmpz_clear(__gen_e_acsl_div);
  }
  /*@ assert x % 2 ≡ -1; */
  __e_acsl_assert(x % 2 == -1,(char *)"Assertion",(char *)"main",
                  (char *)"x % 2 == -1",19);
  /*@ assert -3 % -2 ≡ -1; */
  __e_acsl_assert(1,(char *)"Assertion",(char *)"main",
                  (char *)"-3 % -2 == -1",20);
  /*@ assert 3 % -2 ≡ 1; */
  __e_acsl_assert(1,(char *)"Assertion",(char *)"main",(char *)"3 % -2 == 1",
                  21);
  /*@ assert ((x * 2 + (3 + y)) - 4) + (x - y) ≡ -10; */
  __e_acsl_assert(((x * 2L + (3L + y)) - 4L) + (x - (long)y) == -10L,
                  (char *)"Assertion",(char *)"main",
                  (char *)"((x * 2 + (3 + y)) - 4) + (x - y) == -10",23);
  /*@ assert (0 ≡ 1) ≡ !(0 ≡ 0); */
  __e_acsl_assert(1,(char *)"Assertion",(char *)"main",
                  (char *)"(0 == 1) == !(0 == 0)",25);
  /*@ assert (0 ≤ -1) ≡ (0 > 0); */
  __e_acsl_assert(1,(char *)"Assertion",(char *)"main",
                  (char *)"(0 <= -1) == (0 > 0)",26);
  /*@ assert (0 ≥ -1) ≡ (0 ≤ 0); */
  __e_acsl_assert(1,(char *)"Assertion",(char *)"main",
                  (char *)"(0 >= -1) == (0 <= 0)",27);
  /*@ assert (0 ≢ 1) ≡ !(0 ≢ 0); */
  __e_acsl_assert(1,(char *)"Assertion",(char *)"main",
                  (char *)"(0 != 1) == !(0 != 0)",28);
  /*@ assert (0 ≢ 0) ≡ !(1 ≢ 0); */
  __e_acsl_assert(1,(char *)"Assertion",(char *)"main",
                  (char *)"(0 != 0) == !(1 != 0)",30);
  /*@ assert 4 / y ≡ 2; */
  {
    __e_acsl_assert(y != 0,(char *)"RTE",(char *)"main",
                    (char *)"division_by_zero: y != 0",31);
    __e_acsl_assert(4 / y == 2,(char *)"Assertion",(char *)"main",
                    (char *)"4 / y == 2",31);
  }
  /*@ assert 1 + (z + 1) / (y - 123456789123456789) ≡ 1; */
  {
    __e_acsl_mpz_t __gen_e_acsl_z;
    __e_acsl_mpz_t __gen_e_acsl__4;
    __e_acsl_mpz_t __gen_e_acsl_add;
    __e_acsl_mpz_t __gen_e_acsl__5;
    __e_acsl_mpz_t __gen_e_acsl__6;
    int __gen_e_acsl_div_guard_2;
    __e_acsl_mpz_t __gen_e_acsl_div_2;
    long __gen_e_acsl__7;
    __gmpz_init_set_si(__gen_e_acsl_z,z);
    __gmpz_init_set_si(__gen_e_acsl__4,1L);
    __gmpz_init(__gen_e_acsl_add);
    __gmpz_add(__gen_e_acsl_add,
               (__e_acsl_mpz_struct const *)(__gen_e_acsl_z),
               (__e_acsl_mpz_struct const *)(__gen_e_acsl__4));
    __gmpz_init_set_si(__gen_e_acsl__5,y - 123456789123456789L);
    __gmpz_init_set_si(__gen_e_acsl__6,0L);
    __gen_e_acsl_div_guard_2 = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl__5),
                                          (__e_acsl_mpz_struct const *)(__gen_e_acsl__6));
    __gmpz_init(__gen_e_acsl_div_2);
    /*@ assert E_ACSL: y - 123456789123456789 ≢ 0; */
    __e_acsl_assert(! (__gen_e_acsl_div_guard_2 == 0),(char *)"Assertion",
                    (char *)"main",(char *)"y - 123456789123456789 == 0",34);
    __gmpz_tdiv_q(__gen_e_acsl_div_2,
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl_add),
                  (__e_acsl_mpz_struct const *)(__gen_e_acsl__5));
    __gen_e_acsl__7 = __gmpz_get_si((__e_acsl_mpz_struct const *)(__gen_e_acsl_div_2));
    /*@ assert Eva: signed_overflow: -2147483648 ≤ 1 + __gen_e_acsl__7; */
    /*@ assert Eva: signed_overflow: 1 + __gen_e_acsl__7 ≤ 2147483647; */
    __e_acsl_assert(1 + __gen_e_acsl__7 == 1,(char *)"Assertion",
                    (char *)"main",
                    (char *)"1 + (z + 1) / (y - 123456789123456789) == 1",34);
    __gmpz_clear(__gen_e_acsl_z);
    __gmpz_clear(__gen_e_acsl__4);
    __gmpz_clear(__gen_e_acsl_add);
    __gmpz_clear(__gen_e_acsl__5);
    __gmpz_clear(__gen_e_acsl__6);
    __gmpz_clear(__gen_e_acsl_div_2);
  }
  /*@ assert 1 - x ≡ -x + 1; */
  __e_acsl_assert(1L - x == - ((long)x) + 1L,(char *)"Assertion",
                  (char *)"main",(char *)"1 - x == -x + 1",36);
  __retres = 0;
  return __retres;
}

