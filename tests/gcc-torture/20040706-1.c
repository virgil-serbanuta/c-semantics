void exit(int status);
void abort(void);
int main ()
{
  int i;
  for (i = 0; i < 10; i++)
    continue;
  if (i < 10)
    abort ();
  exit (0);
}
