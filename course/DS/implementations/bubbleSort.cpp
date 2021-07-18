/*
 * @Author: FrankTudor
 * @Date: 2021-07-18 17:45:57
 * @LastEditors: FrankTudor
 * @Description: This file is created, edited, contributed by FrankTudor
 * @LastEditTime: 2021-07-18 17:54:41
 */
#include<iostream>

void print(int array[],int length);
void bubbleSort(int (&array)[], int length){
	int temp;
	for(int i=0; i<length;i++){
		for(int j=0; j < length-i-1; j++){//each time puts the max value of current loop to the determined position[length-[i+1]]
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}

}
void print(int array[],int length){
	for(int i=0;i<length;i++){
		printf(" %d ", array[i]);
	}
}
int main(void){
	int array[10]={3,7,1,6,9,4,2,8,0,5};
	bubbleSort(array,10);
	print(array,10);
	return 0;
}
