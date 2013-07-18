#include <stdio.h>
#include <stdlib.h>

struct node {
        char data;
        struct node *link;
};
void insertNode(struct node **L, char data);

void printList(struct node *L);
/* ����Ʈ�� ������ ����ϴ� �Լ� :
  �ֻ��� ��� �����͸� �Ű������� �Է��Ͽ�
  ����Ʈ�� �Է� �Ǿ��ִ� �����͸� ���
*/

void main()
{
	// �޴� ������ ���� ����
	int c;
	// ����Ʈ�� ���̸� ��Ƹ��� ���� ����
	int count;
	char a=0;
	// ����Ʈ�� �ֻ��� ������
	struct node *ptr = NULL;

	while (1)
	{
		// �޴� ���
		printf("******�޴�***********\n");
		printf("1. ����Ʈ �߰�\n");
		printf("2. ����Ʈ ����Ʈ\n");
		printf("3. ���α׷� ����\n");
		printf("�޴��� �����ϼ���. \n");
		printf("�޴�: ");
		scanf("%d", &c);

		switch ( c )
		{
		case 1:
			// ����Ʈ�� ��� �߰�
			printf("����Ʈ ������ �Է�: (��, �����ʹ� ���ڸ� �Է�)");	
			scanf("%d",&a);
			insertNode(&ptr,a);
			break;
		case 2:
			// ����Ʈ ���
			printList(ptr);
			break;
		case 3:
			// ���α׷� ����
			exit(0);
		default:
			// �޴� ������ �߸��Ǿ��� ���
			printf("�޴��� 1 ~ 3 �� �ֽ��ϴ�.\n");
			break;
		}
	}
}
void insertNode(struct node **L, char a)		
{
	// ����� ������ ���� �Է¹��� ����
	//int n;
	// ����Ʈ�� ������ ��� ��Ʈ���� ������
	struct node *first = NULL;

	// ��� ��Ʈ���� ũ��� �޸� �Ҵ�
	first = (struct node*)malloc(sizeof(struct node));	
	// ��忡 ������ �����͸� �Է¹���
	//printf("����Ʈ ������ �Է�: (��, �����ʹ� ���ڸ� �Է�)");	
	//scanf("%d",&n);
	// ��忡 �Էµ� �����͸� �����ϰ�,
	// ��带 ����Ʈ�� ���ʿ� �߰���
	first->data = a;
	first->link = *L;
	*L = first;
}
void printList(struct node *L)			 
{
	printf("���� ������ ����Ʈ�� ��: \n");
	// �ֻ��� ���κ��� ��� �����Ͱ� NULL�� �ɶ����� 
	// ��� �����͸� ���� ���� ����� ������ ���� ���
	for( ; L; L = L->link)
		printf("%4d", L->data);	
	printf("\n");
}