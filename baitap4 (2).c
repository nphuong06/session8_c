#include<stdio.h>
int main(){
	int numbers[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, max;
	max = numbers[0][0];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(max < numbers[i][j]){
				max = numbers[i][j];
			}
		}
	}
	printf("phan tu lon nhat trong mang la: %d", max);
	return 0;
}
