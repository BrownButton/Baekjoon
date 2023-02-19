#include <stdio.h>

int main(void)
{
	int input1, input2 = 0;
	double result;

	scanf("%d %d", &input1, &input2);
	printf("%0.9f", (double)input1 / (double)input2);
	return 0;
}

/*

     9: 	printf("%0.9f", input1 / (double)input2);
00007FF67AEB1998 F2 0F 2A 45 04       cvtsi2sd    xmm0,dword ptr [input1]
00007FF67AEB199D F2 0F 2A 4D 24       cvtsi2sd    xmm1,dword ptr [input2]
00007FF67AEB19A2 F2 0F 5E C1          divsd       xmm0,xmm1
00007FF67AEB19A6 0F 28 C8             movaps      xmm1,xmm0
00007FF67AEB19A9 66 48 0F 7E CA       movq        rdx,xmm1
00007FF67AEB19AE 48 8D 0D C3 93 00 00 lea         rcx,[string "%0.9f" (07FF67AEBAD78h)]
00007FF67AEB19B5 E8 DB F7 FF FF       call        printf (07FF67AEB1195h)

	 9: 	printf("%0.9f", (double)input1 / (double)input2);
00007FF666DB1998 F2 0F 2A 45 04       cvtsi2sd    xmm0,dword ptr [input1]
00007FF666DB199D F2 0F 2A 4D 24       cvtsi2sd    xmm1,dword ptr [input2]
00007FF666DB19A2 F2 0F 5E C1          divsd       xmm0,xmm1
00007FF666DB19A6 0F 28 C8             movaps      xmm1,xmm0
00007FF666DB19A9 66 48 0F 7E CA       movq        rdx,xmm1
00007FF666DB19AE 48 8D 0D C3 93 00 00 lea         rcx,[string "%0.9f" (07FF666DBAD78h)]
00007FF666DB19B5 E8 DB F7 FF FF       call        printf (07FF666DB1195h)

*/