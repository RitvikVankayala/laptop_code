#include <stdio.h>
#include <stdlib.h>

//starting introduction to the array nothing special in it

typedef struct my_array
{
    int total_size;
    int used_size;
    int *ptr;
} ma;

void create_array(struct my_array *a, int tsize, int usize)
{

    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}

void setvalue(struct my_array *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("ENTER THE VALUE OF THE NUMBER OF THE NUMBER  %d\n", (i + 1));
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

void showvalue(struct my_array *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("THE VALUE OF THE %d th ELEMENT IS %d\n", (i + 1), (a->ptr)[i]);
    }
}

int main()
{

    ma marks;
    create_array(&marks, 100, 5);
    setvalue(&marks);
    showvalue(&marks);

    return 0;
}