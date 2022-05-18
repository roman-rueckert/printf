#include <stdio.h>

#define BLACK(string) "\x1b[30m" string "\x1b[0m"
#define RED(string) "\x1b[31m" string "\x1b[0m"
#define GREEN(string) "\x1b[32m" string "\x1b[0m"
#define YELLOW(string) "\x1b[93m" string "\x1b[0m"
#define BLUE(string) "\x1b[34m" string "\x1b[0m"
#define MAGENTA(string) "\x1b[35m" string "\x1b[0m"
#define CYAN(string) "\x1b[96m" string "\x1b[0m"
#define GRAY(string) "\x1b[37m" string "\x1b[0m"
#define WHITE(string) "\x1b[97m" string "\x1b[0m"
#define WHITE_BG(string) "\x1b[107m" string "\x1b[0m"
#define BLUE_BG(string) "\x1b[44m" string "\x1b[0m"

int main (void)
{
	printf(RED("H")GREEN("e")YELLOW("l")BLUE("l")MAGENTA("o")" "BLUE("W")CYAN("o")GREEN("r")RED("l")YELLOW("d")GRAY("!")"\n");
	printf(BLUE_BG(WHITE("MSV"))WHITE_BG(BLUE("Duisburg"))"\n");

	return 0;
}
