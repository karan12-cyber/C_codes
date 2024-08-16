#include <stdio.h>
#include <string.h>

void respondToCommand(const char *command) {
    if (strcmp(command, "hello") == 0) {
        printf("Hello! How can I help you today?\n");
    } else if (strcmp(command, "time") == 0) {
        // You can add code here to get the current time
        printf("there is 11:33am sir\n");
    } else if (strcmp(command, "weather") == 0) {
        // You can add code here to fetch and display the weather
        printf("ther is cold today outside  sir .\n");
    } 
        
    } else{
    	printf("i am not sure how to response");
	}
}

int main() {
    char userCommand[100];

    printf("Welcome to Jarvis! Enter a command: ");
    fgets(userCommand, sizeof(userCommand), stdin);
    userCommand[strcspn(userCommand, "\n")] = '\0'; // Remove the newline character

    respondToCommand(userCommand);

    return 0;
}

