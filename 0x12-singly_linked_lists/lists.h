#ifndef LISTS_H
#define LISTS_H
/**
 * Struct lists_singly linked list.
 * @len: length of string.
 * @str: String_(malloc'ed string).
 * @next: Points to next node.
 *
 * Description: Singly linked lists node structre.
 */

typedef struct list_s
{
char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
list_t *add_node(list_t **head, const char *str);

#endif
