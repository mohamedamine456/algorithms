#include "stacks.h"

int main() 
{
	t_stack	stack;

	stack = create_stack(6);

    stack = push(2, stack); 
    stack = push(1, stack); 
    stack = push(3, stack); 
    stack = push(6, stack);
	stack = push(5, stack);
    stack = push(8, stack);
	printf("\n---------------------------------------------------------\n");
    print_all(stack);
	//printf("\n---------------------------------------------------------\n");
	//r_a_b(stack.items, stack.top, stack.size);
    //print_all(stack.items, stack.top);
	//printf("\n---------------------------------------------------------\n");
	//r_a_b(stack.items, stack.top, stack.size);
    //print_all(stack.items, stack.top);
	printf("\n---------------------------------------------------------\n");
	pop(&stack.top); 
    pop(&stack.top); 
	print_all(stack);
	printf("\n---------------------------------------------------------\n");
	stack = push(24, stack);
    stack = push(15, stack);
    print_all(stack);
    return 0; 
}
