#ifndef MEANINGS_LIST
#define MEANINGS_LIST

#ifndef BELIEF_STRUCT
#include beliefstruct.h
#define BELIEF_STRUCT
#endif

static Meaning meanings[] = {
    /* add your meaning here! */
    /* {"command line belief name",
     *  "pretty print belief name (that works with the intro phrase: Accoring to the philosophy of ...)",
     *  "meaning of life"}
     */
    {"hhgg", "The Answer to Life, the Universe, and Everything", "42"},
    {"christian", "Christianity", "Act with justice, to treasure the Lord's gracious love, and to walk humbly in the company of your God"},
    {"muslim", "Islam", "Faithfully worship Allah PBUH"},
    {"nhilism", "Nhilism", "You aren't."},
    {"communism", "Communism", "Work for the greater good."},
    {"democracy", "Democracy", "Cast your vote for the greater good."},
    {"software", "Software Development", "Write beautiful code."},
    {"jrdev", "Junior Software Developer", "StackOverflow.com"},
    {"hardware", "Hardware Development", "Don't let the magic smoke out."},
    {"management", "Management", "Delegate."},
    {"fengshui", "Feng Shui", "Harmony"},
    {"coke", "Cocaine Addict", "Just one more line"},
    {"ara", "Animal Rights Activist", "Consider, preserve, and honor all lives, including animals'."},
    {"feminism", "Feminism", "Equal rights for all human beings, especially with a mind to bring equality to women"},
    { NULL, NULL, NULL },   /* Indicates last element in the array; must be kept in */
};
#endif
