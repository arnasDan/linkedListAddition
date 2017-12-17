/*arnas danaitis. programa, leidzianti pries numeriu nurodyta vienpusio
saraso elementa iterpti nauja elementa*/

#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "functions.h"

int main()
{
    int i, var, numToAdd, n = 0;
    linkedList *firstNode, *currentNode;
    printf("Kiek elementu sarase?\n");
    scanf("%d", &n);
    printf("Iveskite saraso elementus:\n");
    scanf("%d", &var);
    createList(&firstNode, var);
    for (i = 1; i < n; i++)
    {
        scanf("%d", &var);
        addToList(&firstNode, var);
    }
    printf("Jusu ivestas sarasas: ");
    outputList(firstNode);
    printf("Iveskite nauja elementa: ");
    scanf("%d", &var);
    printf("Pries koki elementa iterpti nauja elementa? Nurodykite jo numeri: ");
    scanf("%d", &numToAdd);
    addByNumber(&firstNode, var, numToAdd);
    printf("Jusu ivestas sarasas po elemento pridejimo operacijos: ");
    outputList(firstNode);
    while (firstNode)
    {
        currentNode = firstNode;
        firstNode = firstNode -> next;
        free(currentNode);
    }
    return 0;
}
