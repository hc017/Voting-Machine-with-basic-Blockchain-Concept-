#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define candidate names
#define CANDIDATE_COUNT 10
#define CANDIDATE_NAMES {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"}

// Define structure for a block in the blockchain
typedef struct Block {
    int index;
    int voteCount[CANDIDATE_COUNT];
    struct Block* next;
} Block;

// Global variables
Block* blockchain = NULL;

// Function to create a new block
Block* createBlock(int index) {
    Block* newBlock = (Block*)malloc(sizeof(Block));
    newBlock->index = index;
    for (int i = 0; i < CANDIDATE_COUNT; i++) {
        newBlock->voteCount[i] = 0;
    }
    newBlock->next = NULL;
    return newBlock;
}

// Function to add a block to the blockchain
void addBlock(Block* newBlock) {
    if (blockchain == NULL) {
        blockchain = newBlock;
    } else {
        Block* currentBlock = blockchain;
        while (currentBlock->next != NULL) {
            currentBlock = currentBlock->next;
        }
        currentBlock->next = newBlock;
    }
}

// Function to cast a vote and add it to the blockchain
void castVote() {
    int choice;
    printf("\n\n *** Please choose your Candidate ***\n\n");
    for (int i = 0; i < CANDIDATE_COUNT; i++) {
        printf("\n %d. %s", i + 1, CANDIDATE_NAMES[i]);
    }
    printf("\n %d. None of These", CANDIDATE_COUNT + 1);
    printf("\nInput your choice (1 - %d): ", CANDIDATE_COUNT + 1);
    
    scanf("%d", &choice);
    
    if (choice >= 1 && choice <= CANDIDATE_COUNT) {
        // Create a new block for the vote
        Block* newBlock = createBlock(blockchain == NULL ? 1 : blockchain->index + 1);
        newBlock->voteCount[choice - 1]++;
        
        // Add the block to the blockchain
        addBlock(newBlock);
        
        printf("\nThanks for voting!");
    } else if (choice == CANDIDATE_COUNT + 1) {
        printf("\nVote marked as None of These");
    } else {
        printf("\nError: Invalid Choice! Please retry");
    }
}

// Function to display the blockchain and vote counts
void displayBlockchain() {
    printf("\n\n *** Blockchain and Voting Statistics ***\n");
    Block* currentBlock = blockchain;
    while (currentBlock != NULL) {
        printf("\nBlock %d:", currentBlock->index);
        for (int i = 0; i < CANDIDATE_COUNT; i++) {
            printf("\n%s - %d", CANDIDATE_NAMES[i], currentBlock->voteCount[i]);
        }
        printf("\n-----------------------------");
        currentBlock = currentBlock->next;
    }
}

int main() {
    int choice;
    do {
        printf("\n\n *** Welcome to Election/Voting 2022 ***");
        printf("\n\n 1. Cast Vote");
        printf("\n 2. Display Blockchain and Vote Counts");
        printf("\n 0. Exit");
        printf("\n Please enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                castVote();
                break;
            case 2:
                displayBlockchain();
                break;
            case 0:
                // Free the allocated memory for the blockchain
                while (blockchain != NULL) {
                    Block* temp = blockchain;
                    blockchain = blockchain->next;
                    free(temp);
                }
                break;
            default:
                printf("\nError: Invalid Choice");
        }
    } while (choice != 0);

    getchar();
    return 0;
}
