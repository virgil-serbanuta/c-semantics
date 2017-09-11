#include <signal.h>
void handler(int sig) {
      if (sig == SIGUSR1) raise(SIGUSR2);
}

int main(void) {
      signal(SIGUSR1, handler);
      signal(SIGUSR2, handler);
      raise(SIGUSR1);
}
