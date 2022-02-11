#include <stdio.h>
#include <stdlib.h>
#include "liste.h"
#include <stdbool.h>

int main()
{

List * my_list = initialize_list(); //we do not initialize empty list in order to create memory access at the beginning

// some examples
my_list = push_back(my_list, 15);
my_list = push_front(my_list, 1);
my_list = push_back(my_list, 3);
my_list = push_front(my_list, 999);
my_list = push_front(my_list, 555);


List * my_list2 = initialize_list(); //we do not initialize empty list in order to create memory access at the beginning

// some examples

print(my_list);


// sort_example


my_list = tri_fusion(my_list);

printf("liste_sorted\n");

print(my_list);

clear(my_list); // free memory
    

}
