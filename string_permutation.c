/**
* Problem: Given two strings, write a method to decide if one is permutation of the other.
*
*/

#include<stdio.h>
#include<string.h>
int main(){

	char string1[]="arcdefg";
	char string2[]="gfcdeba";
 	isPermutation(string1,string2);
	if(isPermutation(string1,string2)){
		printf("Strings are permutation");
	}else{
		printf("Strings are not permutation");
	}
	return 0;

}

int isPermutation(char string1[],char string2[]){
	
	if(strlen(string1)!=strlen(string2)){
		return 0;
	}
	int s1=0,s2=0;
	for(int i=0;i<strlen(string1);i++){
		s1+=string1[i];
		s2+=string2[i];
	}
	
	if(s1==s2){
		return 1;
	}
	return 0;
	
}
