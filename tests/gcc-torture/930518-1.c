void exit(int status);
void abort(void);
int bar = 0;

void f (p)
     int *p;
{
  int foo = 2;

  while (foo > bar)
    {
      foo -=  bar;
      *p++ = foo;
      bar = 1;
    }
}

int main ()
{
  int tab[2];
  tab[0] = tab[1] = 0;
  f (tab);
  if (tab[0] != 2 || tab[1] != 1)
    abort ();
  exit (0);
}
