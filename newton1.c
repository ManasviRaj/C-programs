#include <stdio.h> // header file for Standard Input Output
#include <stdlib.h> // header file for Standard Library
int findMax(int mArr[],int n){
    int maxValue = mArr[0];
    int loop;
    for(loop =1; loop<n; loop++){
		if(mArr[loop] > maxValue)
		    maxValue = mArr[loop];
	}
    return maxValue;
}
int findOccurence(int mArr[],int n, int maxValue){
    int loop,count=0;
    for(loop =0; loop<n; loop++){
		if(maxValue == mArr[loop])
		{
			count++;
		}
	}
    return count;
}
int main() {

	//Your code here
	int N;
	int loop, max, res;

	scanf("%d",&N);
	int *A = malloc(N*sizeof(int));
	for(loop =0; loop<N; ++loop){
		scanf("%d",A+loop);
	}
    max = findMax(A,N);
    //printf("%d",MAX);
    res = findOccurence(A,N,max);
    printf("%d", res);
	return 0;
}
