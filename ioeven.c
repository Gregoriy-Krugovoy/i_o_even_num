// v1 от 2 до вводимого четные числа через запятую
#include <stdio.h>
int main (void) 
{
    // int input; // ввод
    // int flag = 1; // флаг запятая
    // int i; // счетчик
    // printf("Enter number: "); 
    // scanf("%d", &input);
    // //printf("Input number = %d\n", input);
    // printf("Even numbers : ");
    // for(i = 0; i <= input; ++i) {
    //     if(i % 2 == 0 && i != 0) {
    //         if(flag == 0) {
    //             printf(",");
    //         }
    //         printf("%d",i);
    //         flag = 0;
    //     }
    // }
    // puts("");

    // v2 от 2 до вводимого четные числа через запятую
    int i = 2;
    int input = printf("Enter number : ");
    scanf("%d", &input);
    while(i <= input) {
        if(i % 2 == 0) {
            printf("%d", i);
            if(i < input -1) {
                printf(",");
            }
        }
        i++;
    }
    puts("");
    //printf("%d", input);
}

// from input to 2 JS
// let flag = 1;
// let input = +prompt("Enter number");

// while (input > 1) {
//     if (input % 2 == 0) {
//         if (flag == 0) {
//             console.put(",");
//         }

//         console.put(input);
//         flag = 0;
//     }

//     input--;
// }
