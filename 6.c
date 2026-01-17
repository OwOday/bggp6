#include <stdint.h>
#define six (6)
#define s6 (six-(six/six))
#define ssssss6 (six-six)
#define sssss6 (six-s6)
#define ss6 (s6-sssss6)
#define ssss6 (six-ss6)
#define sss6 (ss6-sssss6)
#define s6xx (ss6+sss6)
#define s6xxxx (ss6+s6)
#define s6xxx (s6xxxx-sssss6)
#define ss66 (six+ss6)
#define s66x (six+six)
#define s66xx (six+s6xx)
#define s66 (six+s6)
#define ss666 (six+ss66)
#define sx(x) #x
#define s(x) sx(x)
#define ______s6x (ss666*ss666*ss666*ss666*ss666*ss666)
#define ____s6x (ss666*ss666*ss666*ss666)
#define __s6x (ss666*ss666)
#define siix (((s6xx*s6*six)*(______s6x))+((ss666*s6xxx)*(____s6x))+(ss6*s6xxx)) //0xd2800020
#define siiix (((ss666)*(______s6x))+(((s6xxx*six*ss6)+1))) //0x100000c1
#define siiiix (((s6xx*s6*six)*(______s6x))+((ss666*s6xxx)*(____s6x))+((six*s66)))  //0xd2800042
#define siiiiix (((s6xx*s6*six)*(______s6x))+((ss666*s6xxx)*(____s6x))+((ss666*s6xxxx))) //0xd2800090
#define siiiiiix ((((six*ss66*ss6)+ssss6)*(______s6x))+((s6xxx*s6*ss6)*____s6x)+((ss6*ss666)*__s6x)+ss666) //0xf2a04010
#define siiiiiiix ((((s6xx*s6*six)+(ssss6))*______s6x) + (ss666*__s6x) + (sssss6) ) //0xd4001001
#define siiiiiiiix ((((six*s6xx*s6)+ss6)*(______s6x))+(((ss666+sss6)*s6)*____s6x)+(sss6*__s6x)+(s66x*ss666))//0xd65f03c0
__asm__(".text\n.p2align 2\n.global __6\n__6:\n\t"
        ".inst " s(siix) "\n\t"
        ".inst " s(siiix) "\n\t"
        ".inst " s(siiiix) "\n\t"
        ".inst " s(siiiiix) "\n\t"
        ".inst " s(siiiiiix) "\n\t"
        ".inst " s(siiiiiiix) "\n\t"
        ".inst " s(siiiiiiiix) "\n\t"
        ".p2align 2\n1: .ascii \"6\\n\"\n");void _6(void);int main(void){_6();return ssssss6;}