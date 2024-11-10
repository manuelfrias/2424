#include <unistd.h>
int main(void)
{
    write(1, "g\n", 2);
	return 0;
}