/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern void abort(void) ;
extern void exit(int  ) ;
int sub1(int val ) 
{ 

  {
  return (val);
}
}
int testcond(int val ) 
{ int flag1 ;
  int t1 ;
  int t2 ;
  int tmp ;

  {
  t1 = val;
  t2 = t1;
  tmp = sub1(t2);
  flag1 = tmp == 0;
  goto lab1;
  lab1: ;
  if (flag1 != 0) {
    return (5046272);
  } else {
    return (0);
  }
}
}
int main(void) 
{ int tmp ;

  {
  tmp = testcond(1);
  if (tmp) {
    abort();
  }
  exit(0);
}
}