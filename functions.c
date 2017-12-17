
#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "functions.h"

void outputList(linkedList *firstNode)
{
    linkedList *currentNode = firstNode;
    while (currentNode)
    {
        printf("%d ", currentNode -> var);
        currentNode = currentNode -> next;
    }
    printf("\n");
}

void addByNumber(linkedList **firstNode, int var, int numToAdd)
{
    int num = 0;
    linkedList *tmpNode, *currentNode;
    if (numToAdd == 0)
    {
        addToList(firstNode, var);
    }
    else
    {
        currentNode = (*firstNode);
        while (currentNode -> next)
        {
            if (num + 1 == numToAdd)
            {
                tmpNode = malloc(sizeof(linkedList));
                tmpNode -> var = var;
                tmpNode -> next = currentNode -> next;
                currentNode -> next = tmpNode;
                return;
            }
            currentNode = currentNode -> next;
            num++;
        }
        printf("Elementas nurodytu numeriu nerastas.\n");
    }
}

void addToList(linkedList **firstNode, int var)
{
    linkedList *tmpNode = malloc(sizeof(linkedList));
    tmpNode -> var = var;
    tmpNode -> next = *firstNode;
    *firstNode = tmpNode;
}

void createList(linkedList **firstNode, int var)
{
    *firstNode = malloc(sizeof(linkedList));
    (*firstNode) -> var = var;
    (*firstNode) -> next = NULL;
}
