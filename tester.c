#include <stdio.h>
#include "libft.h"

char toupper_new(unsigned int i, char c)
{
    ((void)i);
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putchar_new(unsigned int index, char *c)
{
    ((void)index);
    ft_putchar(*c);
}

// Función para imprimir el contenido de un nodo
void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

// Función para modificar el contenido de un nodo
void *modify_content(void *content)
{
    char *new_content = ft_strdup("Modified ");
    ft_strlcat(new_content, (char *)content, ft_strlen(new_content) + ft_strlen((char *)content) + 1);
    return new_content;
}

// Función para liberar la memoria de un nodo
void del(void *content)
{
    if (content)
        free(content); // Liberar el contenido del nodo
}


int main()
{

    // Test ft_isalpha
    // Resultado esperado: 1 0
    printf("ft_isalpha('a'): %d\n", ft_isalpha('a'));
    printf("ft_isalpha('1'): %d\n", ft_isalpha('1'));

    // Test ft_isdigit
    // Resultado esperado: 0 1
    printf("ft_isdigit('a'): %d\n", ft_isdigit('a'));
    printf("ft_isdigit('1'): %d\n", ft_isdigit('1'));

    // Test ft_isalnum
    // Resultado esperado: 1 1
    printf("ft_isalnum('a'): %d\n", ft_isalnum('a'));
    printf("ft_isalnum('1'): %d\n", ft_isalnum('1'));

    // Test ft_isascii
    // Resultado esperado: 1 0
    printf("ft_isascii('a'): %d\n", ft_isascii('a'));
    printf("ft_isascii(128): %d\n", ft_isascii(128));

    // Test ft_isprint
    // Resultado esperado: 1 0
    printf("ft_isprint('a'): %d\n", ft_isprint('a'));
    printf("ft_isprint('✂'): %d\n", ft_isprint('\n'));

    // Test ft_strlen
    // Resultado esperado: 13
    char str1[] = "Hello, world!";
    printf("ft_strlen(str1): %zu\n", ft_strlen(str1));

    // Test ft_memset
    // Resultado esperado: XXXXXfghij
    char str2[10] = "abcdefghij";
    ft_memset(str2, 'X', 5);
    printf("ft_memset: %s\n", str2);

    // Test ft_bzero
    // Resultado esperado:
    char str3[10] = "abcdefghij";
    ft_bzero(str3, 5);
    printf("ft_bzero: %s\n", str3);

    // Test ft_memcpy
    // Resultado esperado: 12345fghij
    char str4[10] = "abcdefghij";
    ft_memcpy(str4, "12345", 5);
    printf("ft_memcpy: %s\n", str4);

    // Test ft_memmove
	// Resultado esperado: Brasil
    char src[] = "Brasil";
    printf("ft_memmove_original: %s\n", src);
    printf("ft_memmove: %s\n", (char *)ft_memmove(src, src, 1));

    // Test ft_strlcpy
    // Resultado esperado: 12345
    char str6[10] = "abcdefghij";
    ft_strlcpy(str6, "1234567890", 6);
    printf("ft_strlcpy: %s\n", str6);

    // Test ft_strlcat
	// Resultado esperado: abcdefghij12345
	char str7[20] = "abcdefghij";
	ft_strlcat(str7, "12345", 20);
	printf("ft_strlcat: %s\n", str7);

    // Test ft_toupper y ft_tolower
    // Resultado esperado: A a
    printf("ft_toupper('a'): %c\n", ft_toupper('a'));
    printf("ft_tolower('A'): %c\n", ft_tolower('A'));

    // Test ft_strchr
    // Resultado esperado: world!
    char *ptr1 = ft_strchr(str1, 'w');
    printf("ft_strchr: %s\n", ptr1);

    // Test ft_strrchr
    // Resultado esperado: orld!
    char *ptr2 = ft_strrchr(str1, 'o');
    printf("ft_strrchr: %s\n", ptr2);

    // Test ft_strncmp
    // Resultado esperado: -1
    printf("ft_strncmp(\"abc\", \"abd\", 3): %d\n", ft_strncmp("abc", "abd", 3));
    
        // Test ft_memchr
    // Resultado esperado: world!
    char *ptr3 = ft_memchr(str1, 'w', 10);
    printf("ft_memchr: %s\n", ptr3);

	// Test ft_memcmp
	// Resultado esperado: 1
	printf("ft_memcmp(\"abc\", \"abd\", 3): %d\n", ft_memcmp("abc", "abd", 3));

    
    // Test ft_strnstr
	// Resultado esperado: a
    const char str[20] = "Brasilbr";
    const char substr[10] = "asil";
    char *ret;
    ret = ft_strnstr(str, substr, 10);
    printf("ft_strnstr: %c\n", ret[0]);

    // Test ft_atoi
    // Resultado esperado: 123
    char str8[] = "123";
    int num = ft_atoi(str8);
    printf("ft_atoi: %d\n", num);

    // Test ft_strdup
    // Resultado esperado: Hello, world!
    char *str9 = ft_strdup(str1);
    printf("ft_strdup: %s\n", str9);

    // Test ft_calloc
    // Resultado esperado: 0 0 0 0 0
    int *arr = ft_calloc(5, sizeof(int));
    printf("ft calloc :%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
    free(arr);

    // Test ft_substr
    // Resultado esperado: world
    char *str10 = ft_substr(str1, 7, 5);
    printf("ft_substr: %s\n", str10);
    free(str10);

    // Test ft_strjoin
    // Resultado esperado: Hello, world!
    char *str11 = ft_strjoin("Hello", ", world!");
    printf("ft_strjoin: %s\n", str11);
    free(str11);

    // Test ft_strtrim
    // Resultado esperado: Hello, world!
    char str12[] = "   Hello, world!   ";
    char *str13 = ft_strtrim(str12, " ");
    printf("ft_strtrim: %s\n", str13);
    free(str13);

	// Test ft_split
	// Resultado esperado: Hello
	//                     world!
	char str14[] = "Hello, world!";
	char **str15 = ft_split(str14, ',');
	printf("ft split :%s\n", str15[0]);
	printf("%s\n", str15[1]);
	free(str15[0]);
	free(str15[1]);
	free(str15);


    // Test ft_itoa
    // Resultado esperado: -123
    int num2 = -123;
    char *str16 = ft_itoa(num2);
    printf("ft_itoa: %s\n", str16);
    free(str16);

    // Test ft_strmapi con función toupper
	// Resultado esperado: HOLA, MUNDO!
	{
    char *str = "Hola, mundo!";
    char *new_str = ft_strmapi(str, toupper_new);
    printf("ft_strmapi :%s\n", new_str);
    free(new_str);
	}

    // Test ft_striteri con función ft_putchar_new
	// Resultado esperado: Hola
	{
    char str[] = "Hola";
    ft_striteri(str, ft_putchar_new);
	}
	printf("\n");

    // Test ft_putchar_fd
	// Resultado esperado: a
	ft_putchar_fd('a', 1);
	printf("\n");

	// Test ft_putstr_fd
	// Resultado esperado: Hello
	ft_putstr_fd("Hello", 1);
	printf("\n");
	
	// Test ft_putnbr_fd
	// Resultado esperado: 123
	ft_putnbr_fd(123, 1);
	printf("\n");

	printf("LINKED LIST\n");

	t_list *head = NULL;
	
    // Test ft_lstnew
    head = ft_lstnew(ft_strdup("Node 1"));
    if (head == NULL)
    {
        printf("Error: ft_lstnew\n");
        return 1;
    }

    // Test ft_lstadd_front
    ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node 2")));
    if (ft_strncmp(head->content, "Node 2", 6)!= 0)
	{
    printf("Error: ft_lstadd_front\n");
    return 1;
	}

    // Test ft_lstadd_back
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node 3")));
	if (ft_strncmp(ft_lstlast(head)->content, "Node 3", 6)!= 0)
	{
    printf("Error: ft_lstadd_back\n");
    return 1;
	}

    // Test ft_lstsize
    if (ft_lstsize(head)!= 3)
    {
        printf("Error: ft_lstsize\n");
        return 1;
    }

    // Test ft_lstlast
    if (ft_strncmp(ft_lstlast(head)->content, "Node 3", 6)!= 0)
	{
    printf("Error: ft_lstlast\n");
    return 1;
	}

	// Test ft_lstdelone
	
	while (head != NULL)
	{
    t_list *temp = head->next;  // Guardar el siguiente nodo antes de eliminar el actual
    ft_lstdelone(head, del);    // Eliminar el nodo actual
    head = temp;    // Actualizar el puntero head al siguiente nodo
	}

	// Verificar que el puntero head sea NULL (todos los nodos eliminados)
	if (head != NULL)
	{
    printf("Error: ft_lstdelone\n");
    return 1;
	}

    // Test ft_lstclear
	ft_lstclear(&head, del);
	head = NULL;
	if (head!= NULL)
	{
    printf("Error: ft_lstclear\n");
    return 1;
	}

    // Test ft_lstiter
    head = ft_lstnew(ft_strdup("Node 1"));
    ft_lstadd_front(&head, ft_lstnew(ft_strdup("Node 2")));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("Node 3")));
    ft_lstiter(head, print_content);

    // Test ft_lstmap
    t_list *mapped_list = ft_lstmap(head, modify_content, del);
    ft_lstiter(mapped_list, print_content);

    // Liberar memoria
    ft_lstclear(&head, del);
    ft_lstclear(&mapped_list, del);

    printf("Todos los tests pasaron correctamente\n");

    return 0;
}
