/* 自增自减运算 */
#include <stdio.h>
main()
{
	int a = 5, b, c, i = 10;
	b = a++;	//先将 a = 5 赋值给 b ，然后 a 通过自增（a++） a = 6，b = 5
	c = ++b;	//先将 b 的值加 1，将加 1 后的 b 的值赋给 c，所以 c = 6，b = 6

	printf("a = %d, b = %d, c = %d\n", a, b, c);
	printf("i, i++, i++ = %d, %d, %d\n", i, i++, i++);
	printf(" %d \n",i);
	printf(" %d \n", ++i);
	printf(" %d \n", --i);
	printf(" %d \n", i++); 		//输出 i 的当前值，然后将 i 加 1，即输出 10，i 的值变为 11
	printf(" %d \n", i--);		//输出 i 的当前值，然后将 i 减 1，即输出 11，i 的值变为 10
	printf(" %d \n", -i++);		//输出 i 的当前值的相反数，然后再将 i 加 1。所以输出 -10，i 的值变为 11
	printf(" %d \n", -i--);		//输出 i 的当前值的相反数，然后再将 i 减 1。所以输出 -11，i 的值变为 10
	getchar();
}