/*data 변수를 통해 입력 파라메터로 주어진 특정 데이터를 찾아,
그 데이터가 저장된 노드를 삭제하고
삭제 전후의 연결 리스트의 내용을 인쇄하는 프로그램을 구현*/
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
			printf("삽입할 문자를 입력하시오(0을입력하면 종료) :");

		scanf("%c",&str);
		if(str !='0' ){
			if(str!='\n')
				insertNode(&L,str);	
		}
		else{
			printf("노드 삭제 전 연결 리스트의 내용:");
			printList(L);
			break;
		}

	}

	printf("\n삭제하고 싶은 노드의 data값을 입력하시오:");
	scanf("%c",&str2);
	deleteNode(&L, str2);

	printf("노드 삭제 후 연결 리스트의 내용:");
	printList(L);

	return 0;
} 
