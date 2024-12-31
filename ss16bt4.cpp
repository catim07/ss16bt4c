#include<stdio.h>
void printfValue(int *array,int size){
	for(int i=0;i<size;i++){
	printf("%d",*(array+i));
}
}
int main(){
	int array[]={3,1,0,7,2,0,0,6};
    int size=sizeof(array)/sizeof(array[0]);
	printfValue(array,size);
	return 0;
}
