/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct __anonstruct_l_21 {
   int m : 11 ;
};
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
int main(void) 
{ int j ;
  struct __anonstruct_l_21 l ;

  {
  j = 1081;
  l.m = j;
  if (l.m == j) {
    abort();
  }
  exit(0);
}
}