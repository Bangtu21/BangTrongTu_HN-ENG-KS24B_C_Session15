#include<stdio.h>
#include<string.h>
int main(){
	char string[]="bcdac";
	int count[256]={0};
	int length=strlen(string);
	for(int i=0; i<length; i++){
		count[string[i]]++;
	}
	for(int i=0; i<256; i++){
		if(count[i]>0){
			printf("%c=%d\n", i, count[i]);
		}
	}
}
