#include<stdio.h>

int main(){
	char str[]="bang trong tu";
	int length=strlen(str);
	for(int i=0; i<length; i++){
		if(i==0|| str[i-1]==' '){
			if(str[i]>='a' && str[i]<='z'){
				str[i]=toupper(str[i]);
			}
		}
	}
	printf("%s", str);
}
