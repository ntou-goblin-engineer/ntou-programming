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
    // [Basic] Random Permutation (亂排)
    srand(time(NULL));
    /* char *tarot[22] = {
        "愚者", "魔術師", "女祭司", "皇后", "皇帝", "教皇", "戀人", "戰車", "力量", "隱者",
        "命運之輪", "正義", "倒吊人", "死神", "節制", "惡魔", "塔", "星星", "月亮", "太陽",
        "審判", "世界"
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
