#include "main.h"

int main(int argc, char *argv[argc])
{
  int hand;
  int count;

  count = 0;

  while ( count <= MAX_COUNT ) {
    hand = input_hand();
    output_number(hand);    
    judge(count, hand);
  }
  
  return 0;
}
