class MyLinkedList {
public:
    struct Node{
        int data;
        Node* prev;
        Node* next;
        Node(int x) : data(x),prev(nullptr),next(nullptr){}
    };
    Node* head;
    Node* tail;
    int size;
    MyLinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if(index>=size || index<0) return -1;
        Node* curr;
        curr=head;
        for(int i=0;i<index;i++){
            curr=curr->next;
        }
        return curr->data;
    }

    
    void addAtHead(int val) {
        Node* temp = new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head->prev=temp;;
            head=temp;
        }
        size++;
        return;
    }
    
    void addAtTail(int val) {
        Node* temp1 = new Node(val);
        if(size==0){
            head=tail=temp1;
        }
        else{
            temp1->prev=tail;
            tail->next=temp1;
            temp1->next=nullptr;
            tail=temp1;
        }
        size++;
        return;
    }
    
    void addAtIndex(int index, int val) {
        if(index==0){
            addAtHead(val);
            return;
        }
        if(index==size){
            addAtTail(val);
            return;
        }
        if(index<0 || index>size) return;
        Node* curr;
        curr=head->next;
        for(int i=1;i<index;i++){
            curr=curr->next;
        }
        Node* prevnode=curr->prev;
        Node* temp2= new Node(val);
        prevnode->next=temp2;
        temp2->prev=prevnode;
        curr->prev=temp2;
        temp2->next=curr;

        size++;
        return;
    }
    
    void deleteAtIndex(int index) {
        Node* prevnode;
        Node* nextnode;
        if(index>=size || index< 0) return;
        if(index==0){
            head=head->next;
            head->prev=nullptr;
            size--;
            return;
        }
        if(index==size-1){
            tail=tail->prev;
            tail->next=nullptr;
            size--;
            return;
        }
        Node* curr;
        curr=head->next;
        for(int i=1;i<index;i++){
            curr=curr->next;
            
        }
        prevnode=curr->prev;
        nextnode=curr->next;
        prevnode->next=nextnode;
        nextnode->prev=prevnode;
        delete curr;
        size--;
    }
};