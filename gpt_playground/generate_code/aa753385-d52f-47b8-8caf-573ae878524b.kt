class ListNode(var value: Int) {
    var next: ListNode? = null
}

fun reverseLinkedList(head: ListNode?): ListNode? {
    var prev: ListNode? = null
    var current = head
    var next: ListNode? = null

    while (current != null) {
        next = current.next
        current.next = prev
        prev = current
        current = next
    }
    return prev
}