// OPTIONS: "STORE", "LIST", "REMOVE", "QUIT";
#ifndef LINEAR_QUEUE_FUNCTIONS

#define LINEAR_QUEUE_FUNCTIONS

// THE QUEUE STRUCT:
////////////////////
// Creating the node
typedef struct Node
{
    int value;
    struct Node *next;
} Node;

// Creating the queue
typedef struct Queuee
{
    struct Node *head;
    struct Node *tail;
    int queuee_size;
} Queuee;
//////////////////////


// CREATING FUNCTION HEADERS:
/////////////////////////////////////////
Node *buildNode(int value);
void enqueuee(Queuee *queuee, int value);
void printQueuee(Queuee *queuee);
void printFirstQueuee(Queuee *queuee);
int desenqueuee(Queuee *queuee);
/////////////////////////////////////////

#endif

