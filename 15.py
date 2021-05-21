def insert(self,head,data): 
    if head == None:
        head = Node(data)
        return head
    nodenxt = head
    while nodenxt.next != None:
        nodenxt = nodenxt.next
    temp = Node(data)
    nodenxt.next = temp
    return head
