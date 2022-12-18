#include "monty.h"

void swap_nodes(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	if (len_dlistint(*stack) < 2)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", line_number);
		free_list(*stack);
		free(global_t.ptr_line);
		exit(EXIT_FAILURE);
	}
temp = *stack;
*stack = (*stack)->next;
(*stack)->prev = NULL;
(*stack)->next = temp;
temp->prev = *stack;
temp->next = NULL;

}
void add_nodes(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
	if (len_dlistint(*stack) < 2)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", line_number);
		free_list(*stack);
		free(global_t.ptr_line);
		exit(EXIT_FAILURE);
	}
temp = *stack;
*stack = (*stack)->next;
(*stack)->n += temp->n;
free(temp);
}
