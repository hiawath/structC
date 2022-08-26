#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "InsertLinkedList.h"


listNode* createlistNode(void) {
	listNode* L;
	L = (listNode*)malloc(sizeof(listNode));
	L->link = NULL;		
	return L;
}

void freelistNode(listNode* L) {
	listNode* p;
	while (L->link != NULL) {
		p = L->link;
		L->link = L->link->link;
		free(p);
		p = NULL;
	}
}

void printList(listNode* L) {
	listNode* p;
	printf("L = (");
	p = L->link;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->link;
		if (p != NULL) printf(", ");
	}
	printf(") \n");
}

void insertFirstNode(listNode* L, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);		
	newNode->link = L->link;
//	L->link = newNode;
}

void insertMiddleNode(listNode* L, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (L->link == NULL) {		
		newNode->link = NULL;
		L->link = newNode;
	}
	else if (pre == NULL) {	
		newNode->link = L->link;
		L->link = newNode;
	}
	else {
		newNode->link = pre->link;
		pre->link = newNode;
	}
}

void insertLastNode(listNode* L, char* x) {
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = NULL;
	if (L->link == NULL) {		
		L->link = newNode;	
		return;
	}
	temp = L->link;
	while (temp->link != NULL) temp = temp->link;
	temp->link = newNode;						
}

listNode* searchNode(listNode* L, char* x) {
	listNode* temp;
	temp = L->link;
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) return temp;
		else temp = temp->link;
	}
	return temp;
}
void reverse(listNode* L) {
	listNode* p;
	listNode* q;
	listNode* r;

	p = L->link;		
	q = NULL;
	r = NULL;

	while (p != NULL) {
		r = q;
		q = p;
		p = p->link;
		q->link = r;
	}
	L->link = q;
}
