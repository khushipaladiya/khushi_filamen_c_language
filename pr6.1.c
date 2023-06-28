#include<stdio.h>

main(){
	char str[1000];
	int length=0,a=1,i;
	
	printf("Enter any string: ");
	gets(str);
	
    for(i=0;str[i]!=0;i++){
    	length++;
	}
	for(i=0;i<length;i++){
		if(str[i]==str[length--]){
			a=0;
		}
	}
	if(a==1){
		printf("This string is palindrome");
	}else{
		printf("This string is not palindrome");
	}
}
