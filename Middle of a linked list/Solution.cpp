class Solution {
  public:
    int length(Node* head) {
        int length = 0;
        Node* temp = head;
        while(temp) {
            length++;
            temp = temp -> next;
        }
        return length;
    }
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        // code here
        int n = length(head);
        Node* temp = head;
        int start = 1;
        int end = n;
        while(start++ < end--) {
            //start++;
            //end--;
            temp = temp -> next;
        }
        return temp -> data;
    }
};
