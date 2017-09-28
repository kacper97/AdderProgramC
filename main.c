/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

/****************************************************************************
 *                                                                          *
 * Function: main                                                           *
 *                                                                          *
 * Purpose : Main entry point.                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
/*
int integers[] ={1,2,3,4,5,6,7,8,9,10};
int main()
{
	int sum = 0;
	for (int i=0; i<10; i++) {
		sum+=integers[i];
	}
  printf("the average is %d \n", sum/10);
	
}
*/
int integers[] ={1,2,3,4,5,6,7,8,9,10};
int main()
{
	float sum = 0;
	for (int i=0; i<10; i++) {
		sum+=integers[i];
	}
  printf("the average is %f \n",(float) sum/10);
	
}
