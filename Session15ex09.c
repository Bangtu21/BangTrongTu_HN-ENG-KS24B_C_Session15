#include<stdio.h>
#include<string.h>
int main(){
	int j=0;
	char deleteLetter;
	char str[]="Bang Trong Tu";
	printf("Ban hay nhap ky tu muon xoa: ");
	scanf("%c", &deleteLetter);
	int length=sizeof(str)/sizeof(char);
	for(int i=0; i<length; i++){
		if(str[i]!=deleteLetter){
			str[j++]=str[i];
		}
	}
	printf("Chuoi sau khi xoa ky tu la: %s", str);
	
}
