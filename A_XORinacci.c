// C Program to demonstrate use of bitwise operators
#include <stdio.h>

void solve()
{
    int a,b,n;
    scanf("%d%d%d", &a, &b, &n);
    if(n%3==0) printf("%d",a);
    else if(n%3==1) printf("%d",b);
    else printf("%d", a ^ b);
    printf("\n");

}
int main()
{
	// // a = 5(00000101), b = 9(00001001)
	// unsigned char a = 325, b = 265;

	// // The result is 00000001
	// printf("a = %d, b = %d\n", a, b);
	// printf("a&b = %d\n", a & b);

	// // The result is 00001101
	// printf("a|b = %d\n", a | b);

	// // The result is 00001100
	// printf("a^b = %d\n", a ^ b);

	// // The result is 11111010
	// printf("~a = %d\n", a = ~a);

	// // The result is 00010010
	// printf("b<<1 = %d\n", b << 1);

	// // The result is 00000100
	// printf("b>>1 = %d\n", b >> 1);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }

	return 0;
}
