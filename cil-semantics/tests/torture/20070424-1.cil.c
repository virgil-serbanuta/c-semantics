/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern void abort(void) ;
extern void exit(int  ) ;
void do_exit(void) 
{ 

  {
  exit(0);
}
}
void do_abort(void) 
{ 

  {
  abort();
  return;
}
}
void foo(int x , int a ) 
{ 

  {
  if (x < a) {
    goto doit;
  }
  do_exit();
  if (x != a) {
    goto doit;
  }
  do_abort();
  return;
  doit: 
  do_abort();
  return;
}
}
int main(void) 
{ 

  {
  foo(1, 0);
  return (0);
}
}