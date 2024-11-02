#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASK_DESC 256
#define MAX_TASK_COUNT 100
#define FILE_NAME "tasks.txt"

typedef struct {
    int id;
    char description[MAX_TASK_DESC];
    int status;
} Task;

int loadTask(Task tasks[],int maxTasks){
    FILE *file = fopen(FILE_NAME, "r");
    if(!file) return 0;

    int i=0;
    while(fscanf(file,"%d %[^\n] %d",&tasks[i].id,tasks[i].description,&tasks[i].status) != EOF && i < maxTasks){
        i++;
    }
    fclose(file);
    return i;
}

void viewTasks(){
    FILE *file = fopen( FILE_NAME , "r" );
    if(!file)
}

int main(){
    Task tasks[MAX_TASK_COUNT];
    int choice;
    do{
        printf("Todo list operations:\n");
        printf("[1] View Tasks\n");
        printf("[2] Add Tasks\n");
        printf("[3] Mark complete Tasks\n");
        printf("[4] Remove Tasks\n");
        printf("[5] Exit\n");
        printf("Enter your choice: \n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            /* code */
            break;

        case 2:
            addTask();
            break;

        case 3:
            /* code */
            break;
        
        case 4:
            /* code */
            break;

        case 5:
            printf("Exiting . . . .\n");
            break;
        default:
            printf("Choice error choose again\n");
            break;
        }
    }while(choice!=5);
    return 0;
}