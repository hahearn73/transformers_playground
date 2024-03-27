function ListNode(value) {
    this.value = value;
    this.next = null;
}

function reverseLinkedList(head) {
    let previous = null;
    let current = head;
    let next = null;
    while (current != null) {
        next = current.next; // store next node
        current.next = previous; // reverse current node's pointer
        previous = current; // move pointers one position ahead
        current = next;
    }
    head = previous;
    return head;
}