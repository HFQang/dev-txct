#include <stdio.h>
#include <string.h>
//�����ҵ�������
 

void bubble_sort(char *arr[], int n) {
	int i,j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // ���������ַ���ָ��ָ�������
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

    // Ϊÿ���ַ��������ڴ沢����
    for (i = 0; i < 3; i++) {
       // strings[i] = malloc(50 * sizeof(char));
        printf("Enter string %d: ", i + 1);
        scanf("%49s", strings[i]);
    }

    // ʹ��ð������˳�������ַ���
    bubble_sort(strings, 3);

    // ����������ַ���
    printf("Sorted strings: ");
    for ( i = 0; i < 3; i++) {
        printf("%s ", strings[i]);
        free(strings[i]);  // �ͷ�ÿ���ַ������ڴ�
    }

    return 0;
}

