#include "ContactNode.h"

int main() {
    ContactNode* person1 = NULL;
    ContactNode* person2 = NULL;
    ContactNode* person3 = NULL;
    ContactNode* currentPerson = NULL;
    char temp[50];
    char temp2[50];

    // Person 1
    person1 = (ContactNode*)malloc(sizeof(ContactNode));
    printf("Person 1\n");
    printf("Enter name\n");
    fgets(temp, 50, stdin);
    temp[strlen(temp)-1] = '\0';
    printf("Enter phone number:\n");
    fgets(temp2, 50, stdin);
    temp2[strlen(temp2)-1] = '\0';
    CreateContactNode(person1, temp, temp2, NULL);
    printf("You entered: %s, %s\n", person1->contactName, person1->contactPhoneNum);
    
    // Person 2
    person2 = (ContactNode*)malloc(sizeof(ContactNode));
    printf("\nPerson 2\n");
    printf("Enter name\n");
    fgets(temp, 50, stdin);
    temp[strlen(temp)-1] = '\0';
    printf("Enter phone number:\n");
    fgets(temp2, 50, stdin);
    temp2[strlen(temp2)-1] = '\0';
    CreateContactNode(person2, temp, temp2, NULL);
    InsertContactAfter(person1, person2);
    printf("You entered: %s, %s\n", person2->contactName, person2->contactPhoneNum);
    
    // Person 3
    person3 = (ContactNode*)malloc(sizeof(ContactNode));
    printf("\nPerson 3\n");
    printf("Enter name\n");
    fgets(temp, 50, stdin);
    temp[strlen(temp)-1] = '\0';
    printf("Enter phone number:\n");
    fgets(temp2, 50, stdin);
    temp2[strlen(temp2)-1] = '\0';
    CreateContactNode(person3, temp, temp2, NULL);
    InsertContactAfter(person2, person3);
    printf("You entered: %s, %s\n", person3->contactName, person3->contactPhoneNum);

    printf("\nCONTACT LIST\n");
    currentPerson = person1;
    while(currentPerson != NULL) {
        PrintContactNode(currentPerson);
        currentPerson = GetNextContact(currentPerson);
    }
    
    return 0;
}