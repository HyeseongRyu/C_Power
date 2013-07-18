/*data ������ ���� �Է� �Ķ���ͷ� �־��� Ư�� �����͸� ã��,
�� �����Ͱ� ����� ��带 �����ϰ�
���� ������ ���� ����Ʈ�� ������ �μ��ϴ� ���α׷��� ����*/
#include <stdio.h>
#include<malloc.h>
typedef struct node {
	char data;
	struct node *link;

}list; 
typedef list* listPointer;

void insertNode (listPointer *L, char data){
	listPointer n;
	n=(listPointer)malloc(sizeof(*n));
	n->data=data;
	n->link=(*L);
	(*L)=n;
}

void printList(listPointer L){
	for(;L;L=L->link)
		printf("%4c",L->data);
}

void deleteNode(listPointer *L, char data){
	listPointer n;
	n=(listPointer)malloc(sizeof(*n));

	
	for(;L;(*L)=(*L)->link){
		if(	(*L)->data=data){
			
			(*L)->link=n;
			(*L)->link=n->link;
		}
	}
}

char str='a'; 
char str2='a';

int main(){

	listPointer L;
	L=(listPointer)malloc(sizeof(*L));
	L->link=NULL;

	while(1){

		if(str !='\n')
			printf("������ ���ڸ� �Է��Ͻÿ�(0���Է��ϸ� ����) :");

		scanf("%c",&str);
		if(str !='0' ){
			if(str!='\n')
				insertNode(&L,str);	
		}
		else{
			printf("��� ���� �� ���� ����Ʈ�� ����:");
			printList(L);
			break;
		}

	}

	printf("\n�����ϰ� ���� ����� data���� �Է��Ͻÿ�:");
	scanf("%c",&str2);
	deleteNode(&L, str2);

	printf("��� ���� �� ���� ����Ʈ�� ����:");
	printList(L);

	return 0;
} 
