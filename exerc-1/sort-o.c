#include<string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct  _range_t;



typedef struct
{
  
  char data [4096];
  int key;
} item_t;

item_t *array_new(int max)
{
  item_t *data=(item_t *) malloc( max * sizeof(item_t));

return array;
}


item_t array[] = {
    {"bill", 3},
    {"neil", 4},
    {"john", 2},
    {"rick", 5},
    {"alex", 1},
};

void sort(item_t *a, int n)
{
  int i = 0, j = 0;
  int s = 1;
  int sizeofVector=n;

  for (int i = 0; i < sizeofVector && s != 0; i++)
  {
    s = 0;
    for (j = 0; j < n - 1; j++)
      if (a[j].key > a[j + 1].key)
      {
        item_t t = a[j];
        a[j] = a[j + 1];
        a[j + 1] = t;
        s++;
       
      }
    n--;
  }
}

int main(void)
{
  array_new(5);
  sort(array, 5);
  for (int i = 0; i < 5; i++)
    printf("array[%d] = {%s, %d}\n", i, array[i].data, array[i].key);
}
