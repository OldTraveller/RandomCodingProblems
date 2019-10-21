import java.util.*; 

class Stack {
	private int arr[]; 
	private int length; 
	
	Stack(int n) {
		arr = new int[n] ;
		length = 0 ; 
	}

	public void push(int ele) {
		arr[length] = ele; 
		length++; 
	}
	
	public int pop() {
		length-- ; 
		return arr[length + 1];
	}

	static void print(Object obj) {
		System.out.println(obj);
	}

	public void printStack() {
		for (int i = length - 1; i >= 0 ; i--) {
			print ("Element : " + arr[i]);
		}
	}
}

public class Abhishek {	
	static void print(Object obj) {
		System.out.println(obj); 
	}
	
	public static void main(String[] args) {
		Stack stack = new Stack(10); 
		stack.push(12); 
		stack.push(23);
		stack.push(99);
		stack.printStack(); 
		int elementPopped = stack.pop();
		print ("Element Popped is : " + elementPopped);
		print ("Now the Stack is : ");
		stack.printStack(); 	
	}
}
