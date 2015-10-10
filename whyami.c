/*
 * whyami - the ontological counterpart to whoami
 *
 * Copyright 2015 by Jack Kingsman <jack.kingsman@gmail.com>
 *
 * Permission to use, copy, modify, distribute, and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear in
 * supporting documentation.  No representations are made about the
 * suitability of this software for any purpose.  It is provided "as
 * is" without express or implied warranty.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "beliefstruct.h"
#include "meanings.h" /* holds all beliefs and meanings */

static const char default_meaning[] = "42";

int show_meaning(char *belief);
int get_meaning_count();

int main(int argc, char *argv[]) {
    char *belief;
    srand(time(NULL));

    /* if no belief is requested, show the default */
    if(argc == 1){
      belief = "random";
    } else{
      belief = argv[1] + 2;
    }

    if(!show_meaning(belief)){
      printf("A meaning for your specific belief system was not found. In the meantime, feel free to use \"42\" as a good starting point.");
      return 1;
    }

    return 0;
}

int show_meaning(char *belief) {
  int i, located_belief = 0;

  /* show random belief and meaning if they asked for one */
  if(strcmp(belief, "random") == 0){
    i = rand() % get_meaning_count();
    printf("According to the philosophy of %s: %s\n", meanings[i].prettybelief, meanings[i].meaning);
    located_belief = 1;
  }

  /* show belief list */
  if(strcmp(belief, "list") == 0){
    for(i = 0; meanings[i].belief != NULL; i++){
        printf("%s - %s\n", meanings[i].prettybelief, meanings[i].belief);
    }
    return 1;
  }

  /* show the requested belief */
  for(i = 0; meanings[i].belief != NULL; i++){
    if(strcmp(meanings[i].belief, belief) == 0 && !located_belief){
      printf("%s", meanings[i].meaning);
      located_belief = 1;
    };
  }

  return located_belief;
}

int get_meaning_count(){
  /* ugly, but we have a variable length array of variable length structs */
  int i;
  for(i = 0; meanings[i].belief != NULL; i++){}
  return i;
}
