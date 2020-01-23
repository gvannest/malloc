// calloc() alloue la mémoire nécessaire pour un tableau de nmemb éléments de taille size octets, et renvoie un pointeur vers la mémoire allouée.
// Cette zone est remplie avec des zéros. Si nmemb ou size vaut 0, calloc() renvoie soit NULL, soit un pointeur unique qui pourra être passé ultérieurement à free() avec succès.

#include "ft_malloc.h"

void        *calloc(size_t nmemb, size_t size)
{
    void*   ptr_user;

    if (!nmemb || !size)
        return NULL;
    if (!(ptr_user = malloc(nmemb * size)))
        return NULL;
    ft_bzero(ptr_user, nmemb * size);
    return ptr_user;
}