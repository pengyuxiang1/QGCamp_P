#include<stdio.h>
#include<stdlib.h>
			
typedef struct Node 
{ int data; 
  struct Node *next; 
}Node, *ptr_Node;

typedef enum Status 
{ 
	SUCCESS, 
	ERROR 
}Status;

















//������������һ�������ɹ��򷵻�ͷ�ڵ㣬ʧ�ܷ��� NULL 
ptr_Node create(int *arr, int n)
{
	struct Node *_p1,*_p2;
	int i=0;
	_p1=_p2=(ptr_Node)malloc(sizeof(Node));
	if(NULL==_p1){
		printf("����ʧ��\n");
		free(_p1);
		free(_p2);
		return NULL; 
	}
	
	printf("���������У�������%d������\n"��n);
	scanf("%d",&_p1->data);
	while(i<n){
		i++;
		if(i==1){
			arr=_p1;
		}
		else
		{
		_p2->next=_p1;
		_p2=_p1;
		_p1=(ptr_Node)malloc(sizeof(Node));
		scanf("%d",&_p1->data);
	}
	}
	_p2->next=NULL;
	return arr;	
}


//���ٸ��������� 
void destroy(ptr_Node head)
{
	struct node *_p1=NULL,*_p2=NULL;
	if(head->next==NULL){
		free(head);
		head=NULL;
	}
	else{
		_p1=_p2=head;
		do{
			_p2=_p1->next;
			free(_p1);
			_p1=_p2;
		}while(_p2->next=NULL);
		free(_p2);
		_p1=NULL;
		_p2=NULL;
	}
}

//�ڵ� index λ������� node ��� 
//����ɹ����� SUCCESS��ʧ�ܷ��� ERROR 
Status insert(ptr_Node *head, ptr_Node node, int index)//head��˫��ָ�룿�� //node=_p1,head=p2,num1=index;
{
	struct node* _p1=NULL,*_p2=NULL,*_p3=NULL; 
	//_p1=creat(_p1);
	int i=0;
	_p2=head;
	if(n==0){
		head=node;
		node->next=NULL;
	}
	else{
		while(i!=index){
			i++;
			_p2=_p->next;
		}
		
		/*while(_p2->data!=index&&_p2->next!=NULL){
			_p3=_p2;
			_p2=_p2->next;
		}*/
		if(i==index){
			_p3=_p2->next;
			_p2->next=node;
			node->next=_p3;
		}
		else {printf("error \n",index); 
			return ERROR;}

		}
	return SUCCESS;
}

//ɾ���� index λ�ڵ����Ľڵ㣬��ɾ���Ľ���ֵ���浽��*data���� 
//ɾ���ɹ����� SUCCESS������������� ERROR 
Status delete(ptr_Node *head, int index, int *data)
{
	struct node* _p1,*_p2;
	int i=0;
	_p1=_p2=head;
	if(head==NULL){
		printf("List is null!\n");
	}
	else{
		_p1=head;
		while(i!=index){
			i++;
			_p2=_p1;
			_p1=_p1->next;
		}
		if(i==index){
			/*if(_p1==head){
				
				printf("Delete number��%d\n",_p1->data);
				head=head->next;
				free(_p1);
			}*/
			//else{
				_p1=_p1->next;				
				data=_p1;
				printf("Delete numble��%d\n",_p1->data);
				_p2->next=_p1->next;
				free(_p1);
				_p1=NULL;
			//}
		}
		else printf("no find numble.\n");retuen ERROR;
	}
	return SUCCESS;
}


//�������в��ҽڵ�ֵ�� data ��ȵĽڵ㣬�������ҵ��ĵ�һ���ڵ��ǰһ���ڵ��λ�� 
//������ͷ�ڵ���ȣ����� 0����û�ҵ����������������-1
int search(ptr_Node head, int data)
{
	struct node *_p1,*_p2;
	int i=0;	
	_p1=head;
	while(_p1->next==NULL){
		if(data==_p1->data){
		//printf("there is a numble :%d\n",_p1->num);
		return 0;
	}
	while(data!=_p1->data&&_p1->next!=NULL){		
	i++;_p1=_p1->next;
	}
	if(_p1->data==data){
		//printf("there is a numble :%d\n",_p1->num);
		return i;
	}
	else {
		//printf("don'find numble \n");
		return -1;
	}
}


//�������� index λ�����Ľ���ֵ�޸�Ϊ(*data)����ԭֵ���浽(*data) 
//�޸ĳɹ����� SUCCESS������������� ERROR 
Status edit(ptr_Node head, int index, int *data)//shu ru de index yao you yi yi
{
	ptr_Node _p1=head,_p2=head; int i=1;
	while(i!=index){
		i++;_p1=_p1->next;}
	if(_p1->next!=NULL){	
	_p1=_p1->next;
	a=_p1->data;	
	_p1->data=*data;
	*data=a;
	return success;}
	else return error;
}

//����ѡ��,ʵ�ֵ������սڵ�ֵ��С�������� 
Status sort(ptr_Node *head)
{
	
}

//��������ֵ����һ���ĸ�ʽ�����ÿ�ж��ٸ��Լ����壬��ʽԽƯ��Խ�ã� 
void print(ptr_Node head)
{
	ptr_Node _p1;	

	while(_p1->next!=NULL){printf("%6d",_p1->data);i++;if(i==5){i=0;printf("\n");}}	
	printf("%6d",_p1->data);
}

int main()
{
		













return 0;
}
