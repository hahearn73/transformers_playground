class ListNode {
    var value: Int
    var next: ListNode?

    init(_ value: Int) {
        self.value = value
        self.next = nil
    }
}

func reverseLinkedList(_ head: ListNode?) -> ListNode? {
    var prev: ListNode? = nil
    var current = head
    
    while current != nil {
        let next = current!.next
        current!.next = prev
        prev = current
        current = next
    }
    
    return prev
}