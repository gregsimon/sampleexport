
/*
L-702-5	Orch. MT Set14.4sec	L702_5.ZIP
This Volume Contains:
1)	MLT: Or Full St
2)	MLT: Or Clarinet
3)	MLT: Or Oboe
4)	MLT: Or Horns
5)	MLT: Or Trumpet
6)	MLT: Or Orch Perc
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <stdint.h>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;



int main(int argc, char** argv) 
{
	u8* raw;
	u32 len;

	FILE* f = fopen("L702_5.OUT", "rb");
	if (!f)
		return -1;
	fseek(f, 0, SEEK_END);
	len = (u32)ftell(f);
	fseek(f, 0, SEEK_SET);
	raw = new u8[len];
	if (!raw)
		return -2;
	fread(raw, len, 1, f);
	fclose(f);

	printf("read %u bytes\n", len);


	delete[] raw;
	return 0;
}