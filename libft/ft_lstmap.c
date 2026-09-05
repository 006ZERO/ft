#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
  t_list *new_list;
  t_list *new_node;
  void *mapped;

  if (f == NULL || del == NULL)
    return (NULL);
  new_list = NULL;
  while (lst) {
    mapped = f(lst->content);
    new_node = ft_lstnew(mapped);
    if (new_node == NULL) {
      del(mapped);
      ft_lstclear(&new_list, del);
      return (NULL);
    }
    ft_lstadd_back(&new_list, new_node);
    lst = lst->next;
  }
  return (new_list);
}
