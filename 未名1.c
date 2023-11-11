#include <stdio.h>
#include <string.h>
//测试我的推送啦
 

void bubble_sort(char *arr[], int n) {
	int i,j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // 交换两个字符串指针指向的内容
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    char *strings[3];
    int i;

    // 为每个字符串分配内存并输入
    for (i = 0; i < 3; i++) {
       // strings[i] = malloc(50 * sizeof(char));
        printf("Enter string %d: ", i + 1);
        scanf("%49s", strings[i]);
    }

    // 使用冒泡排序按顺序排列字符串
    bubble_sort(strings, 3);

    // 输出排序后的字符串
    printf("Sorted strings: ");
    for ( i = 0; i < 3; i++) {
        printf("%s ", strings[i]);
        free(strings[i]);  // 释放每个字符串的内存
    }

    return 0;
}

