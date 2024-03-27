class ListNode
  attr_accessor :val, :next

  def initialize(val = 0, next_node = nil)
    @val = val
    @next = next_node
  end
end

def reverse_list(head)
  prev = nil
  current = head
  
  while current != nil
    next_node = current.next # Save next node
    current.next = prev # Reverse current node's pointer
    prev = current # Move pointers one position ahead
    current = next_node
  end
  
  prev # New head of the reversed list
end