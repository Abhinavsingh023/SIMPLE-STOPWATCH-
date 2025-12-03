#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    int choice;
    time_t start, end;
    double elapsed = 0;
    int running = 0;

    while(1) {
        printf("\n=== Simple Stopwatch ===\n");
        printf("1. Start\n");
        printf("2. Pause\n");
        printf("3. Reset\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(!running) {
                    time(&start);
                    running = 1;
                    printf("Stopwatch started...\n");
                } else {
