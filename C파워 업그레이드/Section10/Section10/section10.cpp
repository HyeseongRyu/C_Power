/*
#include <stdio.h>

int main(){
	char hangeul[] = "가나다라마바사아자차카타파하";


	FILE* fp = fopen("character.txt", "w");
	if(fp){
		fprintf(fp, hangeul);
	}

	fclose(fp);
	printf("입력을 완료했습니다.\n");
	return 0;
}
*/
/*
#include <stdio.h>

int main(){

	int input;
	FILE* fp = fopen("character.txt", "r");
	if(fp==NULL){
		printf("파일이 열리지 않습니다.\n");
	}else{
		printf("출력할 문자의 개수는 ? ");
		scanf("%d", &input);
		for(int i = 0 ; i < input*2; i++){
			char ch = fgetc(fp);
			printf("%c", ch);
		}
	}
	fclose(fp);
	
}
*/
/*
#include <stdio.h>

int main(){
	int num;
	int i;

	FILE* fp = fopen("numeric.dat", "wb");
	if(fp==NULL){
		puts("파일 'numberic.dat'가 열리지 않았습니다.\n");
		return -1;
	}

	for(i = 0 ; i < 5 ; i++){
		printf("파일에 저장할 숫자 %d : ", i+1);
		scanf("%d", &num);
		fwrite(&num, sizeof(int), 1, fp);
	}
	fclose(fp);
	puts("입력이 완료되었습니다.\n");
	return 0;
}

*/

/*
#include <stdio.h>

int main(){
	int num;
	int i;

	FILE* fp = fopen("numeric.dat", "rb");
	if(fp==NULL){
		puts("파일 'numeric.dat'가 열리지 않았습니다.\n");
		return -1;
	}
	for(i=0; i <5; i++){
		fread(&num, sizeof(int), 1, fp);
		printf("%d 번째 입력 된 숫자 : %d \n", i+1, num);
	}

	fclose(fp);
	puts("출력이 완료되었습니다.\n");
	return 0;

}

*/
/*
#include <stdio.h>
#define STR_LEN 100

int main(){
	char input[STR_LEN];
	int i;

	FILE* fp = fopen("string.txt", "w");
	if(fp==NULL){
		puts("파일 'string.txt'가 열리지 않았습니다.\n");
		return -1;
	}
	for(i=0; i< 5; i++){
		printf("%d 번째 문자열 입력 : ", i+1);
		gets(input);
		//fgets(input, STR_LEN, stdin);
		//fputs(input, fp);
		fprintf(fp, "%s\n", input); 
	}
	fclose(fp);
	puts("입력이 완료되었습니다.\n");

	return 0;
}
*/
/*
#include <stdio.h>
#define STR_LEN 100

void printAllLine(FILE* fp);
void printLine(int num, FILE* fp);

int main(){
	int input;
	
	FILE* fp = fopen("string.txt", "r");
	if(fp==NULL){
		puts("파일 'string.txt'가 열리지 않습니다.\n");
		return -1;
	}

	printf("출력할 문자열 정보 입력(6이상은 전체 출력) : ");
	scanf("%d", &input);

	if(1<= input && input <=5){
		printLine(input, fp);
		//
	}else if(input==6){
		//전체 다 출력
		printAllLine(fp);
		
	}else
		puts("입력이 잘못됬습니다.\n");

	fclose(fp);
	puts("출력이 완료되었습니다.\n");
	return 0;
}
void printLine(int num, FILE* fp){
	char str[STR_LEN];
	int ch;
	int count =0;
	while(count!=num){
		ch=fgetc(fp);
		if(num-count==1){
			printf("%c", ch);
		}
		if(ch=='\n')
			count++;
		
		
		
	}
	
}
void printAllLine(FILE* fp){
	int i;
	char str[STR_LEN];

	for(i= 0 ; i < 5 ; i++){
		fscanf(fp, "%s", &str);
		printf("%d 번째 문자열 출력 : %s\n", i+1, str);
	}


}

*/

#include <stdio.h>
#define STR_LEN 100

int main(){
	int day;
	int ap;
	int ret;
	char str[STR_LEN];

	FILE* fp = fopen("weather.dat", "w");
	if(fp==NULL){
		puts("파일 'weather.dat'가 열리지 않았습니다.\n");
		return -1;
	}

	while(1){
		fputs("** 날씨 정보 입력 ******* \n", stdout);

		fputs("날짜 : ", stdout);
		ret = fscanf(stdin, "%d", &day);
		fflush(stdin);
		if(ret==EOF){
			break;
		}
		fprintf(fp, "%d ", day);

		fputs("지역 : ", stdout);
		fgets(str, STR_LEN, stdin);
		fputs(str, fp);
		fflush(stdin);

		fputs("오전 (A) / 오후 (P) : ", stdout);
		ap=fgetc(stdin);
		fputc(ap, fp);
		fflush(stdin);

		fputs("날씨 : ", stdout);
		fgets(str, STR_LEN, stdin);
		fputs(str, fp);

		fputs("\n", stdout);
		

	}
}