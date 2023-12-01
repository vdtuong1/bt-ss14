#include <stdio.h>
#include <string>

void Hoandoi(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
	
}
int main(){
	int x,y;
	printf("nhap x: ");
	scanf("%d",&x);
	printf("nhap y: ");
	scanf("%d",&y);	
	printf("gia tri truoc khi dao nguoc: x = %d, y = %d",x, y);
	Hoandoi(&x,&y);
	printf("gia tri sau khi dao nguoc: x = %d, y = %d",x, y);
	
}