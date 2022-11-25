#include <stdio.h>

int main(){
    
    int ncolor;

    printf("Введiть число кольору (1,2...7): ");
    scanf("%d", &ncolor);

    switch (ncolor){
        case 1:
            printf("Червоний\n");
            break;
        case 2:
            printf("Помаранчевий\n");
            break;
        case 3:
            printf("Жовтий\n");
            break;
        case 4:
            printf("Зелений\n");
            break;
        case 5:
            printf("Блакитний\n");
            break;
        case 6:
            printf("Синiй\n");
            break;
        case 7:
            printf("Фiолетевий\n");
            break;
        default: 
            printf("Введiть число в дiапазонi вiд 1 до 7");
            break;
    }
}