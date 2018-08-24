//
// dolly.c
//
// Lucas Fernandez Nicolau
// Thiago Orlando Akio Kumagai
// Sheeps by: Bob Allison
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 50

void printGrass(unsigned n);

int main() {

	while (1) {
		system("clear");

		printf("\n\n\n");
		printf("                 __  _\n");
		printf("             .-.\'  `; `-._  __  _\n");
		printf("            (_,         .-:'  `; `-._\n");
		printf("          ,\'o\"(        (_,           )\n");
		printf("         (__,-'      ,\'o\"(            )>\n");
		printf("            (       (__,-'            )\n");
		printf("             `-'._.--._(             )\n");
		printf("                ///  ///`-\'._.--._.-\'\n");
		printf("                           ///  ///\n\n");
		printGrass(N);

		sleep(1);

		system("clear");

		printf("              __  _\n");
		printf("          .-.\'  `; `-._  __  _\n");
		printf("         (_,         .-:'  `; `-._\n");
		printf("       ,\'o\"(        (_,           )\n");
		printf("      (__,-'      ,\'o\"(            )>\n");
		printf("         (       (__,-'            )\n");
		printf("          `-'._.--._(             )\n");
		printf("             |||  |||`-\'._.--._.-\'\n");
		printf("                        |||  |||\n\n");
		printf("\n\n\n");
		printGrass(N);

		sleep(1);

		system("clear");

		printf("\n\n\n");
		printf("           __  _\n");
		printf("       .-.\'  `; `-._  __  _\n");
		printf("      (_,         .-:'  `; `-._\n");
		printf("    ,\'o\"(        (_,           )\n");
		printf("   (__,-'      ,\'o\"(            )>\n");
		printf("      (       (__,-'            )\n");
		printf("       `-'._.--._(             )\n");
		printf("          \\\\\\  \\\\\\`-\'._.--._.-\'\n");
		printf("                     \\\\\\  \\\\\\\n\n");
		printGrass(N);

		sleep(1);
	}

	return 0;
}

void printGrass(unsigned n) {
	int i;
	for (i = 0; i < n; i++) printf("\"");
	printf("\n");
}
