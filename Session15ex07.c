#include<stdio.h>
#include<string.h>

int main(){
	char str[]="Gmail cua toi la bangtu2005.com@gmail.com";
	int length=strlen(str);
	int countLetter=0;
	int countNumber=0;
	int countDacBiet=0;
	for(int i=0; i<length; i++){
		if(isalpha(str[i])){
			countLetter++;
		}else if(isdigit(str[i])){
			countNumber++;
		}else{
			countDacBiet++;
		}
	}
	printf("So ky tu la chu cai la %d\n", countLetter);
	printf("So ky tu la chu so la %d\n", countNumber);
	printf("So ky tu dac biet la %d", countDacBiet);
}
