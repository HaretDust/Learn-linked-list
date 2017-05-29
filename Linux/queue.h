#pragma once
#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>

typedef struct item
{
	int gumption;
	int charisma;
}Item;

#define MAXQUEUE 10

typedef struct node
{
	Item item;
	struct node * next;    // ָ��ṹ�����ָ��
}Node;

typedef struct queue
{
	Node * front;    // ָ����������ָ��
	Node * rear;    // ָ�����β���ָ��
	int items;    // ���е�����
}Queue;

/* ��ʼ������ */
void InitializeQueue(Queue * pq);

/* �������Ƿ����� */
bool QueueIsFull(const Queue * pq);

/* �������Ƿ�Ϊ�� */
bool QueueIsEmpty(const Queue * pq);

/* ȷ�������ܵ����� */
int QueueItemCount(const Queue * pq);

/* �ڶ���ĩβ����� */
bool EnQueue(Item item, Queue * pq);

/* �Ӷ��п�ͷɾ���� */
bool DeQueue(Item * Pitem, Queue *pq);

/* ��ն��� */
void EmptyTheQueue(Queue * pq);

#endif // !_QUEUE_H_
