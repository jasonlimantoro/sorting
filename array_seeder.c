#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "array_seeder.h"

int main()
{
    int seed[SEED_MAX], n, type;

    printf("Enter array seeder size: \n");
    scanf("%d", &n);

    switch (n){
        case 1000:
            printf("1. Random\n");
            printf("2. Ascending\n");
            printf("3. Descending\n");
            printf("Enter generation type: \n");
            scanf("%d", &type);
            switch (type){
                case 1:
                    freopen("./input/array_seed_thousand_random.txt", "w", stdout);
                    seedArray(seed, n, true);
                    shuffle(seed, n);
                    break;

                case 2:
                    freopen("./input/array_seed_thousand_ascending.txt", "w", stdout);
                    seedArray(seed, n, true);
                    break;

                case 3:
                    freopen("./input/array_seed_thousand_descending.txt", "w", stdout);
                    seedArray(seed, n, false);
                    break;

                default:
                    printf("Error\n");
            }
            break;
        case 10000:
            printf("1. Random\n");
            printf("2. Ascending\n");
            printf("3. Descending\n");
            printf("Enter generation type: \n");
            scanf("%d", &type);
            switch (type){
                case 1:
                    freopen("./input/array_seed_ten_thousand_random.txt", "w", stdout);
                    seedArray(seed, n, true);
                    shuffle(seed, n);
                    break;
                case 2:
                    freopen("./input/array_seed_ten_thousand_ascending.txt", "w", stdout);
                    seedArray(seed, n, true);
                    break;
                case 3:
                    freopen("./input/array_seed_ten_thousand_descending.txt", "w", stdout);
                    seedArray(seed, n, false);
                    break;
                default:
                    printf("Error\n");
            }
            break;
        case 100000:
            printf("1. Random\n");
            printf("2. Ascending\n");
            printf("3. Descending\n");
            printf("Enter generation type: \n");
            scanf("%d", &type);
            switch (type){
                case 1:
                    freopen("./input/array_seed_hundred_thousand_random.txt", "w", stdout);
                    seedArray(seed, n, true);
                    shuffle(seed, n);
                    break;
                case 2:
                    freopen("./input/array_seed_hundred_thousand_ascending.txt", "w", stdout);
                    seedArray(seed, n, true);
                    break;
                case 3:
                    freopen("./input/array_seed_hundred_thousand_descending.txt", "w", stdout);
                    seedArray(seed, n, false);
                    break;
                default:
                    printf("Error\n");
            }
            break;
        case 1000000:
            printf("1. Random\n");
            printf("2. Ascending\n");
            printf("3. Descending\n");
            printf("Enter generation type: \n");
            scanf("%d", &type);
            switch (type){
                case 1:
                    freopen("./input/array_seed_million_random.txt", "w", stdout);
                    seedArray(seed, n, true);
                    shuffle(seed, n);
                    break;
                case 2:
                    freopen("./input/array_seed_million_ascending.txt", "w", stdout);
                    seedArray(seed, n, true);
                    break;
                case 3:
                    freopen("./input/array_seed_million_descending.txt", "w", stdout);
                    seedArray(seed, n, false);
                    break;
                default:
                    printf("Error\n");
            }
            break;
        default:
            printf("Error!\n");
    }

    printf("%d\n", n);
    for (int k = 0; k < n; ++k) {
        printf("%d ", seed[k]);
    }
    printf("\n");

    return 0;
}

void swap(int *array, int first, int last)
{
    int temp = array[first];
    array[first] = array[last];
    array[last] = temp;
}

void seedArray(int *array, int n, bool ascending)
{
    if (ascending){
        for (int i = 0; i < n; ++i) {
            array[i] = i + 1;
        }
    } else {
        for (int i = 0; i < n; ++i) {
            array[i] = n - i;
        }
    }

}

void shuffle(int *array, int n)
{
    time_t t;
    int random;

    // Initialize RNG
    srand((unsigned) time(&t));

    for (int j = 0; j < n; ++j){
        random = rand() % n;
        swap(array, j, random);
    }
}
