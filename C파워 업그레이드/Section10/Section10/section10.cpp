/*
#include <stdio.h>

int main(){
	char hangeul[] = "�����ٶ󸶹ٻ������īŸ����";


	FILE* fp = fopen("character.txt", "w");
	if(fp){
		fprintf(fp, hangeul);
	}

	fclose(fp);
	printf("�Է��� �Ϸ��߽��ϴ�.\n");
	return 0;
}
*/
/*
#include <stdio.h>

int main(){

	int input;
	FILE* fp = fopen("character.txt", "r");
	if(fp==NULL){
		printf("������ ������ �ʽ��ϴ�.\n");
	}else{
		printf("����� ������ ������ ? ");
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
		puts("���� 'numberic.dat'�� ������ �ʾҽ��ϴ�.\n");
		return -1;
	}

	for(i = 0 ; i < 5 ; i++){
		printf("���Ͽ� ������ ���� %d : ", i+1);
		scanf("%d", &num);
		fwrite(&num, sizeof(int), 1, fp);
	}
	fclose(fp);
	puts("�Է��� �Ϸ�Ǿ����ϴ�.\n");
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
		puts("���� 'numeric.dat'�� ������ �ʾҽ��ϴ�.\n");
		return -1;
	}
	for(i=0; i <5; i++){
		fread(&num, sizeof(int), 1, fp);
		printf("%d ��° �Է� �� ���� : %d \n", i+1, num);
	}

	fclose(fp);
	puts("����� �Ϸ�Ǿ����ϴ�.\n");
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
		puts("���� 'string.txt'�� ������ �ʾҽ��ϴ�.\n");
		return -1;
	}
	for(i=0; i< 5; i++){
		printf("%d ��° ���ڿ� �Է� : ", i+1);
		gets(input);
		//fgets(input, STR_LEN, stdin);
		//fputs(input, fp);
		fprintf(fp, "%s\n", input); 
	}
	fclose(fp);
	puts("�Է��� �Ϸ�Ǿ����ϴ�.\n");

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
		puts("���� 'string.txt'�� ������ �ʽ��ϴ�.\n");
		return -1;
	}

	printf("����� ���ڿ� ���� �Է�(6�̻��� ��ü ���) : ");
	scanf("%d", &input);

	if(1<= input && input <=5){
		printLine(input, fp);
		//
	}else if(input==6){
		//��ü �� ���
		printAllLine(fp);
		
	}else
		puts("�Է��� �߸�����ϴ�.\n");

	fclose(fp);
	puts("����� �Ϸ�Ǿ����ϴ�.\n");
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
		printf("%d ��° ���ڿ� ��� : %s\n", i+1, str);
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
		puts("���� 'weather.dat'�� ������ �ʾҽ��ϴ�.\n");
		return -1;
	}

	while(1){
		fputs("** ���� ���� �Է� ******* \n", stdout);

		fputs("��¥ : ", stdout);
		ret = fscanf(stdin, "%d", &day);
		fflush(stdin);
		if(ret==EOF){
			break;
		}
		fprintf(fp, "%d ", day);

		fputs("���� : ", stdout);
		fgets(str, STR_LEN, stdin);
		fputs(str, fp);
		fflush(stdin);

		fputs("���� (A) / ���� (P) : ", stdout);
		ap=fgetc(stdin);
		fputc(ap, fp);
		fflush(stdin);

		fputs("���� : ", stdout);
		fgets(str, STR_LEN, stdin);
		fputs(str, fp);

		fputs("\n", stdout);
		

	}
}