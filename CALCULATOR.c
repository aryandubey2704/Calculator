/*THE C CALCULATOR*/
#include <stdio.h>
main()
{
int a, b, add, sub, multiply, divide;
printf("\nEnter the Number a\n");
scanf("%d", &a);
printf("\nEnter the Number b\n");
scanf("%d", &b);
printf("\nSELECT THE OPTION GIVEN BELOW\n");
int option;
printf("\nOPTIONS --->");
printf("\n1. Add");
printf("\n2. Sub");
printf("\n3. Multiply");
printf("\n4. Divide");
printf("\nEnter Option: ");
scanf("%d", &option);
printf("\nOutput: ");
if(option == 1){
	add=a+b;
	printf("%d", add);
}
else if (option == 2){
	sub=a-b;
	printf("%d", sub);
}
else if (option == 3){
	multiply=a*b;
	printf("%d", multiply);
}
else if(option == 4){
	divide=a/b;
	printf("%d", divide);
}
}
