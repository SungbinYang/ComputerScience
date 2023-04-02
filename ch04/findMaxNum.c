#include <stdio.h>

void main() {
  int card_arr[5] = {1, 2, 3, 4, 5};
  int next_card_index = 1;
  int target_card = card_arr[0];
  int tmp = 0;

  exec:
    if (target_card < card_arr[next_card_index]) {
      tmp = target_card;
      target_card = card_arr[next_card_index];
      card_arr[next_card_index] = tmp;
    }

  if (next_card_index <= sizeof(card_arr)) {
    next_card_index++;
    goto exec;
  }

  return;
}
