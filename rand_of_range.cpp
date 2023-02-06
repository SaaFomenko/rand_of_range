#include <stdlib.h>
#include <time.h> 
#include "rand_of_range.h"


int rand_of_range(int min_num, int max_num)
{
  srand(time(NULL));

  // Получить случайное число - формула
  int num = min_num + rand() % (max_num - min_num + 1);

  return num;
}
