#include<stdio.h>

main(){
	char str[1000];
	int i;
	
	printf("Enter any string: ");
	gets(str);
	
	int freq[26] = {0};
	for(i=0;i<26;i++){
		freq[str[i]-'a']+=1;
	}
	
printf("The frequency of each letter is: \n");
 for(i=0;i<26;i++){
 	if(freq[i]!=0){
 		char ch='a'+i;
 		printf("\t%c = %d\n",ch,freq[i]);
	 }
 }
}
