/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2025 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

/********************* function pointers *******************/
typedef int (*Operation)(int, int);

int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

int calculate(int x, int y, Operation op) {
    return op(x, y); // Call the function through pointer
}
/********************* passing pointers to functions*******************/

//void modifyValue(int ***ppp) {
//    ***ppp = 100; // Modify through three levels of indirection
//}
//
//void passToModifier(int **pp) {
//    modifyValue(&pp); // Pass address of the pointer-to-pointer
//}

void modifyValue(int *ppp) {
    *ppp = 100; // Modify through three levels of indirection
}

void passToModifier(int *pp) {
    modifyValue(pp); // Pass address of the pointer-to-pointer
}

void updateVariable(int *p) {
    passToModifier(p); // Pass address of the pointer
}
/********************* end *******************/

int main(void)
{
	// pointer to pointer
	int value = 42;
	int *ptr1 = &value;    // Points to value
	int **ptr2 = &ptr1;    // Points to ptr1

	**ptr2 = 100;          // Changes value through two levels
	printf("%d\n", value); // Prints 100

	//passing pointers to functions:
	int x = 5;
	updateVariable(&x); // Pass address of x
	printf("%d\n", x);  // Prints 100

	//	function pointers
	printf("%d\n", calculate(5, 3, add));      // Prints 8
	printf("%d\n", calculate(5, 3, multiply)); // Prints 15

    /* Loop forever */
	for(;;);
}
