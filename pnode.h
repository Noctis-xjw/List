#define _CRT_SECURE_NO_WARNINGS 1

#include<windows.h>
#include <stdio.h>
#include <assert.h>

typedef int DATATYPE;

typedef struct Node
{
	DATATYPE data;
	struct Node *next;
}Node,*PNode;

void InitList(PNode* pHead);
void PushBack(PNode* pHead, DATATYPE data);
void PopBack(PNode* pHead);
void PushFront(PNode* pHead, DATATYPE data);
void PopFront(PNode* pHead);
PNode Find(PNode pHead, DATATYPE data);
void Insert(PNode pos, DATATYPE data);
void Erase(PNode* pHead, PNode pos);			//ɾ��ĳһ����
void Remove(PNode* pHead, DATATYPE data);
void RemoveAll(PNode* pHead, DATATYPE data);
int Empty(PNode pHead);
void Clear(PNode* pHead);
void Destroy(PNode* pHead);
int Size(PNode pHead);
PNode BuyNode(DATATYPE data);
void PrintList(PNode pHead);
PNode Back(PNode pHead);
////////////////////////////////////////////////////
void ResversePrintList(PNode pHead);
void DeleteNotTailNode(PNode pos);
void InsertNotHeadNode(PNode pos,DATATYPE data);
PNode ResverseList(PNode pHead);					//���õ�����
void BubbleSort(PNode pHead);						//ð������
PNode MergeList(PNode pHead1 , PNode pHead2);		//�ϲ���������
PNode FindMidNode(PNode pHead);						//�����м���
PNode FindLastKNode(PNode pHead,int k);				//���ҵ�����K�����
PNode JosephCircle(PNode pHead,int M);				//Լɪ������
PNode ReverseList1(PNode pHead);				//����ż���ŵ�һ������
int IsCross(PNode pHead1, PNode pHead2);		//�����������Ƿ��ཻ
//�����������ཻ ��β�����ཻ
PNode GetCrossNode(PNode pHead1, PNode pHead2);
PNode HasCircle(PNode pHead);						//�ж��Ƿ����
int GetCircleLen(PNode pMeetNode);
PNode GetEnterNode(PNode pHead, PNode pMeetNode);  // �õ�����ʼ�ĵ�
int IsCrossWithCircle(PNode pHead1, PNode pHead2); // ���ʼ��и������������ཻ�ļ������
void UnionSet(Node* l1, Node* l2);

