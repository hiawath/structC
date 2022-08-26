#include<stdio.h>

void hanoi(int n, int start, int work,int target){
	if(1==n)
		printf("%c에서 %d를 %c로 이동\n",start,n, target);
	else {
		hanoi(n-1, start, target, work);
		
		printf("%c에서 %d를 %c로 이동\n",start,n, target);
		hanoi(n-1, work, start,target);
	


	}
}
