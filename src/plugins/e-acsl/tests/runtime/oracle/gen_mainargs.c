/* Generated by Frama-C */
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
extern int __e_acsl_sound_verdict;

/*@ requires \valid(&argc);
    requires \valid(&argv); */
int main(int argc, char **argv);

int __gen_e_acsl_main(int argc, char **argv)
{
  int __retres;
  int i;
  /*@ assert ∀ int k; 0 ≤ k < argc ⇒ \valid(argv + k); */
  {
    int __gen_e_acsl_forall;
    int __gen_e_acsl_k;
    __e_acsl_store_block((void *)(& argv),(size_t)8);
    __gen_e_acsl_forall = 1;
    __gen_e_acsl_k = 0;
    while (1) {
      if (__gen_e_acsl_k < argc) ; else break;
      {
        int __gen_e_acsl_valid;
        __gen_e_acsl_valid = __e_acsl_valid((void *)(argv + __gen_e_acsl_k),
                                            sizeof(char *),(void *)argv,
                                            (void *)(& argv));
        if (__gen_e_acsl_valid) ;
        else {
          __gen_e_acsl_forall = 0;
          goto e_acsl_end_loop1;
        }
      }
      __gen_e_acsl_k ++;
    }
    e_acsl_end_loop1: ;
    __e_acsl_assert(__gen_e_acsl_forall,(char *)"Assertion",(char *)"main",
                    (char *)"\\forall int k; 0 <= k < argc ==> \\valid(argv + k)",
                    12);
  }
  /*@ assert \block_length(argv) ≡ (argc + 1) * sizeof(char *); */
  {
    unsigned long __gen_e_acsl_block_length;
    __e_acsl_mpz_t __gen_e_acsl_block_length_2;
    __e_acsl_mpz_t __gen_e_acsl_;
    int __gen_e_acsl_eq;
    __gen_e_acsl_block_length = __e_acsl_block_length((void *)argv);
    __gmpz_init_set_ui(__gen_e_acsl_block_length_2,__gen_e_acsl_block_length);
    __gmpz_init_set_si(__gen_e_acsl_,(argc + 1L) * 8);
    __gen_e_acsl_eq = __gmpz_cmp((__e_acsl_mpz_struct const *)(__gen_e_acsl_block_length_2),
                                 (__e_acsl_mpz_struct const *)(__gen_e_acsl_));
    __e_acsl_assert(__gen_e_acsl_eq == 0,(char *)"Assertion",(char *)"main",
                    (char *)"\\block_length(argv) == (argc + 1) * sizeof(char *)",
                    13);
    __gmpz_clear(__gen_e_acsl_block_length_2);
    __gmpz_clear(__gen_e_acsl_);
  }
  /*@ assert *(argv + argc) ≡ \null; */
  {
    int __gen_e_acsl_valid_read;
    __gen_e_acsl_valid_read = __e_acsl_valid_read((void *)(argv + argc),
                                                  sizeof(char *),
                                                  (void *)argv,
                                                  (void *)(& argv));
    __e_acsl_assert(__gen_e_acsl_valid_read,(char *)"RTE",(char *)"main",
                    (char *)"mem_access: \\valid_read(argv + argc)",15);
    /*@ assert Eva: mem_access: \valid_read(argv + argc); */
    __e_acsl_assert(*(argv + argc) == (char *)0,(char *)"Assertion",
                    (char *)"main",(char *)"*(argv + argc) == \\null",15);
  }
  /*@ assert ¬\valid(*(argv + argc)); */
  {
    int __gen_e_acsl_initialized;
    int __gen_e_acsl_and;
    __gen_e_acsl_initialized = __e_acsl_initialized((void *)(argv + argc),
                                                    sizeof(char *));
    if (__gen_e_acsl_initialized) {
      int __gen_e_acsl_valid_read_2;
      int __gen_e_acsl_valid_2;
      __gen_e_acsl_valid_read_2 = __e_acsl_valid_read((void *)(argv + argc),
                                                      sizeof(char *),
                                                      (void *)argv,
                                                      (void *)(& argv));
      __e_acsl_assert(__gen_e_acsl_valid_read_2,(char *)"RTE",(char *)"main",
                      (char *)"mem_access: \\valid_read(argv + argc)",16);
      /*@ assert Eva: mem_access: \valid_read(argv + argc); */
      __gen_e_acsl_valid_2 = __e_acsl_valid((void *)*(argv + argc),
                                            sizeof(char),
                                            (void *)*(argv + argc),
                                            (void *)(argv + argc));
      __gen_e_acsl_and = __gen_e_acsl_valid_2;
    }
    else __gen_e_acsl_and = 0;
    __e_acsl_assert(! __gen_e_acsl_and,(char *)"Assertion",(char *)"main",
                    (char *)"!\\valid(*(argv + argc))",16);
  }
  i = 0;
  while (i < argc) {
    {
      size_t tmp;
      tmp = __gen_e_acsl_strlen((char const *)*(argv + i));
      int len = (int)tmp;
      /*@ assert \valid(*(argv + i)); */
      {
        int __gen_e_acsl_initialized_2;
        int __gen_e_acsl_and_2;
        __gen_e_acsl_initialized_2 = __e_acsl_initialized((void *)(argv + i),
                                                          sizeof(char *));
        if (__gen_e_acsl_initialized_2) {
          int __gen_e_acsl_valid_read_3;
          int __gen_e_acsl_valid_3;
          __gen_e_acsl_valid_read_3 = __e_acsl_valid_read((void *)(argv + i),
                                                          sizeof(char *),
                                                          (void *)argv,
                                                          (void *)(& argv));
          __e_acsl_assert(__gen_e_acsl_valid_read_3,(char *)"RTE",
                          (char *)"main",
                          (char *)"mem_access: \\valid_read(argv + i)",19);
          __gen_e_acsl_valid_3 = __e_acsl_valid((void *)*(argv + i),
                                                sizeof(char),
                                                (void *)*(argv + i),
                                                (void *)(argv + i));
          __gen_e_acsl_and_2 = __gen_e_acsl_valid_3;
        }
        else __gen_e_acsl_and_2 = 0;
        __e_acsl_assert(__gen_e_acsl_and_2,(char *)"Assertion",
                        (char *)"main",(char *)"\\valid(*(argv + i))",19);
      }
      /*@ assert ∀ int k; 0 ≤ k ≤ len ⇒ \valid(*(argv + i) + k); */
      {
        int __gen_e_acsl_forall_2;
        long __gen_e_acsl_k_2;
        __gen_e_acsl_forall_2 = 1;
        __gen_e_acsl_k_2 = 0;
        while (1) {
          if (__gen_e_acsl_k_2 <= (long)len) ; else break;
          {
            int __gen_e_acsl_valid_read_4;
            int __gen_e_acsl_valid_4;
            __gen_e_acsl_valid_read_4 = __e_acsl_valid_read((void *)(
                                                            argv + i),
                                                            sizeof(char *),
                                                            (void *)argv,
                                                            (void *)(& argv));
            __e_acsl_assert(__gen_e_acsl_valid_read_4,(char *)"RTE",
                            (char *)"main",
                            (char *)"mem_access: \\valid_read(argv + i)",20);
            __gen_e_acsl_valid_4 = __e_acsl_valid((void *)(*(argv + i) + __gen_e_acsl_k_2),
                                                  sizeof(char),
                                                  (void *)*(argv + i),
                                                  (void *)(argv + i));
            if (__gen_e_acsl_valid_4) ;
            else {
              __gen_e_acsl_forall_2 = 0;
              goto e_acsl_end_loop2;
            }
          }
          __gen_e_acsl_k_2 ++;
        }
        e_acsl_end_loop2: ;
        __e_acsl_assert(__gen_e_acsl_forall_2,(char *)"Assertion",
                        (char *)"main",
                        (char *)"\\forall int k; 0 <= k <= len ==> \\valid(*(argv + i) + k)",
                        20);
      }
    }
    i ++;
  }
  __retres = 0;
  __e_acsl_delete_block((void *)(& argv));
  return __retres;
}

/*@ requires \valid(&argc);
    requires \valid(&argv); */
int main(int argc, char **argv)
{
  int __retres;
  __e_acsl_memory_init(& argc,& argv,(size_t)8);
  {
    int __gen_e_acsl_valid;
    int __gen_e_acsl_valid_2;
    __gen_e_acsl_valid = __e_acsl_valid((void *)(& argc),sizeof(int),
                                        (void *)(& argc),(void *)0);
    __e_acsl_assert(__gen_e_acsl_valid,(char *)"Precondition",(char *)"main",
                    (char *)"\\valid(&argc)",7);
    __gen_e_acsl_valid_2 = __e_acsl_valid((void *)(& argv),sizeof(char **),
                                          (void *)(& argv),(void *)0);
    __e_acsl_assert(__gen_e_acsl_valid_2,(char *)"Precondition",
                    (char *)"main",(char *)"\\valid(&argv)",8);
  }
  __retres = __gen_e_acsl_main(argc,argv);
  __e_acsl_delete_block((void *)(& argv));
  __e_acsl_memory_clean();
  return __retres;
}

