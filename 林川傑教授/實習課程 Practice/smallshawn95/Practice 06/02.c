#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int a[], int n)
{
    for(int i = 0; i < n; i++){
        a[i] = i;
    }
    for(int i = 0; i < n; i++){
        int x = rand() % n;
        int t = a[i];
        a[i] = a[x];
        a[x] = t;
    }
}

int main()
{
    // [Basic] Random Permutation (�ñ�)
    srand(time(NULL));
    /* char *tarot[22] = {
        "�M��", "�]�N�v", "�k���q", "�ӦZ", "�ӫ�", "�Ь�", "�ʤH", "�Ԩ�", "�O�q", "����",
        "�R�B����", "���q", "�˦Q�H", "����", "�`��", "�c�]", "��", "�P�P", "��G", "�Ӷ�",
        "�f�P", "�@��"
    }; */
    char* tarot[22] = {
        "The Fool", "The Magician", "The High Priestess", "The Empress", "The Emperor",
        "The Hierophant", "The Lovers", "The Chariot", "Justice", "The Hermit",
        "Wheel of Fortune", "Strength", "The Hanged Man", "Death", "Temperance",
        "The Devil", "The Tower", "The Star", "The Moon", "The Sun",
        "Judgement", "The World"
    };
    int card[22];
    shuffle(card, 22);
    printf("Shuffled tarot cards:\n");
    for(int i = 0; i < 22; i++){
        printf("[%02d] %s\n", card[i], tarot[card[i]]);
    }
    return 0;
}
