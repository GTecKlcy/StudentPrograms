#include<stdio.h>
#include<conio.h>
void main()
{
	int array[5],i,n,count_odd=0,count_even=0;
	printf("enter the elements of array\n");
	for(i=0;i<5;i++){
		scanf("%d",& array[i]);
	}
	printf("the array is\n");
	for(i=0;i<5;i++){
		printf("%d",array[i]);
	}
    for(i=0;i<5;i++){
    	if(array[i]%2==1){
    		count_odd++;
		}
	else{count_even++;
	}}
	printf("number of odd numbers =%d\nnumber of even numbers =%d",count_odd,count_even);
	getch();

}

