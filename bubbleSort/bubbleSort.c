/*
 * bubbleSort.c
 *
 *  Created on: 21 mar 2020
 *      Author: Mattia Bressan
 */

#include <stdio.h>
#include <stdlib.h>
int * bubblesort(int *array, int size);
void swap(int *x,int *y);

int main(int argc,char *argv[]){
	//int x[10]={100,15,19,6,745,231};
	int x[10]={9,8,7,6,5,4,3,2,1,0};
	for(int i=0;i<10;++i)
		printf("%d ",x[i]);
	printf("\n");
	bubblesort(x,10);
	for(int i=0;i<10;++i)
		printf("%d ",x[i]);
	printf("\n");


	return EXIT_SUCCESS;
	}

/*

procedure bubbleSort(A : list of sortable items)
    n := length(A)
    repeat
        newn := 0
        for i := 1 to n - 1 inclusive do
            if A[i - 1] > A[i] then
                swap(A[i - 1], A[i])
                newn := i
            end if
        end for
        n := newn
    until n ≤ 1
end procedure
*/
//bubble sort
int * bubblesort(int *array, int size){
	if(size<0){
		perror("dimensione sbagliata");
		exit(EXIT_FAILURE);
		}
	int n=size;
	do{
		int newn=0;
		for(int i=1;i<n;++i){
			if(array[i-1]>array[i]){
				swap(&array[i-1],&array[i]);
				newn=i;
				}
			}
		n=newn;
	}while(n>1);
	return array;
	}
void swap(int *x,int *y){
	int z=*x;
	*x=*y;
	*y=z;
	}
