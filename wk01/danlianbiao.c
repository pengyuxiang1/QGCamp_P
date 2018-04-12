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

















//根据数组生成一条链表，成功则返回头节点，失败返回 NULL 
ptr_Node create(int *arr, int n)
{
	struct Node *_p1,*_p2;
	int i=0;
	_p1=_p2=(ptr_Node)malloc(sizeof(Node));
	if(NULL==_p1){
		printf("创建失败\n");
		free(_p1);
		free(_p2);
		return NULL; 
	}
	
	printf("创建链表中：请输入%d个数据\n"，n);
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


//销毁给定的链表 
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

//在第 index 位后面插入 node 结点 
//插入成功返回 SUCCESS，失败返回 ERROR 
Status insert(ptr_Node *head, ptr_Node node, int index)//head是双重指针？？ //node=_p1,head=p2,num1=index;
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

//删除第 index 位节点后面的节点，将删除的结点的值保存到（*data）中 
//删除成功返回 SUCCESS，其他情况返回 ERROR 
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
				
				printf("Delete number；%d\n",_p1->data);
				head=head->next;
				free(_p1);
			}*/
			//else{
				_p1=_p1->next;				
				data=_p1;
				printf("Delete numble；%d\n",_p1->data);
				_p2->next=_p1->next;
				free(_p1);
				_p1=NULL;
			//}
		}
		else printf("no find numble.\n");retuen ERROR;
	}
	return SUCCESS;
}


//在链表中查找节点值与 data 相等的节点，并返回找到的第一个节点的前一个节点的位置 
//（例：头节点相等，返回 0），没找到或者其他情况返回-1
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


//将链表中 index 位点后面的结点的值修改为(*data)，将原值保存到(*data) 
//修改成功返回 SUCCESS，其他情况返回 ERROR 
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

//此题选做,实现单链表按照节点值大小升序排序 
Status sort(ptr_Node *head)
{
	
}

//将链表结点值按照一定的格式输出（每行多少个自己定义，格式越漂亮越好） 
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
