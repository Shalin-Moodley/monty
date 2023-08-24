#include "monty.h"

/**
 * f_add - Adds the top two elements of the stack.
 * @head: Stack head
 * @counter: Line number
 *
 * Return: No return value
 */
void f_add(stack_t **head, unsigned int counter)
{
if (!(*head) || !(*head)->next)
{
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

(*head)->next->n += (*head)->n;
stack_t *temp = *head;
*head = (*head)->next;
(*head)->prev = NULL;
free(temp);
}
