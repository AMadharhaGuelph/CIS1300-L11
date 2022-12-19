#include "ContactNode.h"

void CreateContactNode(ContactNode* thisNode, char nameInit[], char phoneNumInit[], ContactNode* nextLoc) {
    strcpy(thisNode->contactName, nameInit);
    strcpy(thisNode->contactPhoneNum, phoneNumInit);
    thisNode->nextNodePtr = nextLoc;
}

void InsertContactAfter(ContactNode* thisNode, ContactNode* newNode) {
    ContactNode* tempNext = NULL;
    tempNext = thisNode->nextNodePtr;
    thisNode->nextNodePtr = newNode;
    newNode->nextNodePtr = tempNext;
}

ContactNode* GetNextContact(ContactNode* thisNode) {
    return thisNode->nextNodePtr;
}

void PrintContactNode(ContactNode* thisNode) {
    printf("Name: %s\n", thisNode->contactName);
    printf("Phone number: %s\n\n", thisNode->contactPhoneNum);
}
