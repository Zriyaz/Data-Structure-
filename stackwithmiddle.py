#Design a stack with operations on middle element
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        self.prev = None


class Stack:
    def __init__(self):
        self.head = None
        self.mid = None
        self.count = 0

    def isEmpty(self):
        if self.head is None:
            return True
        return False

    def push(self,data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            self.count+=1
            self.mid = self.head
        else:
            temp = self.head
            while temp.next:
                temp = temp.next
            temp.next = new_node
            new_node.prev = temp
            self.count+=1
            if self.count%2!=0:
                self.mid = self.mid.next

    def pop(self):
        if self.isEmpty():
            print('UnderFlow')
        else:
            temp = self.head
            while temp.next:
                prev = temp
                temp=temp.next
            prev.next = None
            temp.prev = None
            self.count-=1
            if self.count%2 != 0:
                self.mid = self.mid.prev

    def peek(self):
        if self.isEmpty():
            return
        return self.head.data

    def get_stack(self):
        temp = self.head
        while temp:
            print(temp.data)
            temp = temp.next

    def get_min(self):
        temp = self.head
        minm = None
        while temp.next:
            if temp.data<temp.next.data:
                minm = temp.data
                temp = temp.next
        return minm

    def get_mid(self):
        if self.isEmpty():
            return
        else:
            return self.mid.data


stack1 = Stack()
stack1.push(1)
stack1.push(2)
stack1.push(5)
stack1.push(0)
stack1.push(9)
stack1.push(10)
stack1.push(11)
print(stack1.get_mid())
stack1.get_stack()

