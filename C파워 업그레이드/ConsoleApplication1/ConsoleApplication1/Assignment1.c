#include <stdio.h>
#include <stdlib.h>

struct node {
        char data;
        struct node *link;
};
void insertNode(struct node **L, char data);

void printList(struct node *L);
/* 리스트의 내용을 출력하는 함수 :
  최상위 노드 포인터를 매개변수로 입력하여
  리스트에 입력 되어있는 데이터를 출력
*/

void main()
{
	// 메뉴 선택을 위한 변수
	int c;
	// 리스트의 길이를 헤아리기 위한 변수
	int count;
	char a=0;
	// 리스트의 최상위 포인터
	struct node *ptr = NULL;

	while (1)
	{
		// 메뉴 출력
		printf("******메뉴***********\n");
		printf("1. 리스트 추가\n");
		printf("2. 리스트 프린트\n");
		printf("3. 프로그램 종료\n");
		printf("메뉴를 선택하세요. \n");
		printf("메뉴: ");
		scanf("%d", &c);

		switch ( c )
		{
		case 1:
			// 리스트에 노드 추가
			printf("리스트 데이터 입력: (단, 데이터는 숫자만 입력)");	
			scanf("%d",&a);
			insertNode(&ptr,a);
			break;
		case 2:
			// 리스트 출력
			printList(ptr);
			break;
		case 3:
			// 프로그램 종료
			exit(0);
		default:
			// 메뉴 선택이 잘못되었을 경우
			printf("메뉴는 1 ~ 3 만 있습니다.\n");
			break;
		}
	}
}
void insertNode(struct node **L, char a)		
{
	// 노드의 데이터 값을 입력받을 변수
	//int n;
	// 리스트에 삽입할 노드 스트럭쳐 포인터
	struct node *first = NULL;

	// 노드 스트럭쳐 크기로 메모리 할당
	first = (struct node*)malloc(sizeof(struct node));	
	// 노드에 대입할 데이터를 입력받음
	//printf("리스트 데이터 입력: (단, 데이터는 숫자만 입력)");	
	//scanf("%d",&n);
	// 노드에 입력된 데이터를 대입하고,
	// 노드를 리스트의 앞쪽에 추가함
	first->data = a;
	first->link = *L;
	*L = first;
}
void printList(struct node *L)			 
{
	printf("현재 생성된 리스트의 값: \n");
	// 최상위 노드로부터 노드 포인터가 NULL이 될때까지 
	// 노드 포인터를 따라 가며 노드의 데이터 값을 출력
	for( ; L; L = L->link)
		printf("%4d", L->data);	
	printf("\n");
}