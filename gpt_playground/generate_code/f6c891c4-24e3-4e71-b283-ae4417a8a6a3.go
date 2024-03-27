package main

import (
    "fmt"
)

type ListNode struct {
    Val  int
    Next *ListNode
}

func reverseList(head *ListNode) *ListNode {
    var prev *ListNode
    current := head
    for current != nil {
        nextTemp := current.Next
        current.Next = prev
        prev = current
        current = nextTemp
    }
    return prev
}

func printList(node *ListNode) {
    for node != nil {
        fmt.Print(node.Val, " ")
        node = node.Next
    }
    fmt.Println()
}

func main() {
    // Example Linked List: 1 -> 2 -> 3 -> 4
    head := &ListNode{Val: 1}
    head.Next = &ListNode{Val: 2}
    head.Next.Next = &ListNode{Val: 3}
    head.Next.Next.Next = &ListNode{Val: 4}

    fmt.Println("Original Linked List:")
    printList(head)

    reversedHead := reverseList(head)
    fmt.Println("Reversed Linked List:")
    printList(reversedHead)
}