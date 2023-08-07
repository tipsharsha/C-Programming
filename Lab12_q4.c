#include <stdio.h>
#include <stdlib.h>
struct node
{
    int r2d2;
    struct node *c3po;
};
struct node *head = NULL;
struct node *oddlist = NULL;
struct node *evenlist = NULL;
void insert(int r2d2)
{
    struct node *link = (struct node *)malloc(sizeof(struct node));
    link->r2d2 = r2d2;
    link->c3po = head;
    head = link;
}
void printlist()
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d =>", p->r2d2);
        p = p->c3po;
    }
}
#ifdef HELL
void append(struct node *q, int num)
{
    struct node *temp;
    temp = q;

    if (q == NULL)
    {
        q = malloc(sizeof(struct node));
        temp = q;
    }
    else
    {
        /*going to the node*/
        while (temp->c3po != NULL)
        {
            temp = temp->c3po;
        }
        temp->c3po = malloc(sizeof(struct node));
        temp = temp->c3po;
    }
}
#endif
void rearrangeEvenOdd(struct node **head, struct node **oddlist, struct node **evenlist)
{
    struct node *odd = NULL, *oddTail = NULL;
    struct node *even = NULL, *evenTail = NULL;

    struct node *curr = *head;

    while (curr != NULL)
    {
        if (curr->r2d2 & 1)
        {
            if (odd == NULL)
            {
                odd = oddTail = curr;
            }
            else
            {
                oddTail->c3po = curr;
                oddTail = oddTail->c3po;
            }
        }
        else
        {

            if (even == NULL)
            {
                even = evenTail = curr;
            }
            else
            {
                evenTail->c3po = curr;
                evenTail = curr;
            }
        }
        curr = curr->c3po;
    }
    *oddlist = odd;
    *evenlist = even;
}

void main()
{
    for (int i = 10; i > 0; i--)
        insert(i);
    printf("head =>");
    printlist();
    rearrangeEvenOdd(&head, &oddlist, &evenlist);
    head = evenlist;
    printf("\nEven list\n");
    printf("even=>");
    printlist();
    printf("null");
    head = oddlist;
    printf("\nOdd List\n");
    printf("odd=>");
    printlist();
    printf("null");
}