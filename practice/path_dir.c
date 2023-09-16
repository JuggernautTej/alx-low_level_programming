#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * struct build_node - struct to build a list containing the directories of
 * the environment variable PATH.
 * @directory: the directory name.
 * @next: the pointer to the next node.
 *
 * Description: no further description necessary.
 */
struct build_node
{
char *directory;
struct build_node *next;
};

/**
 * path_list - a function that builds a linked list using the directories
 * from the PATH environment list.
 * Return: a linked list.
 */
struct build_node *path_list(void)
{
char *path_name, *tkn;
struct build_node *new_node;
struct build_node *head = NULL;
struct build_node *current = NULL;
path_name = getenv("PATH");
if (path_name == NULL)
return (NULL);
tkn = strtok(path_name, ":");
while (tkn != NULL)
{
new_node = (struct build_node *)malloc(sizeof(struct build_node));
if (new_node == NULL)
return (NULL);
new_node->directory = strdup(tkn);
new_node->next = NULL;
if (head == NULL)
{
head = new_node;
current = new_node;
}
else
{
current->next = new_node;
current = new_node;
}
tkn = strtok(NULL, ":");
}
return (head);
}

/**
 * main - entry point to example.
 * Return: Always 0.
 */
int main(void)
{
struct build_node *build_list, *current, *tmp;
build_list = path_list();
current = build_list;
while (current != NULL)
{
printf("Directory: %s\n", current->directory);
current = current->next;
}
current = build_list;
while (current != NULL)
{
tmp = current;
current = current->next;
free(tmp->directory);
free(tmp);
}
return (0);
}
