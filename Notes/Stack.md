# Stack

1. 스택의 원소 저장은 O(1)이다
2. 스택의 원소 제거는 O(1)이다
3. 스택의 상단 원소 확인은 O(1)이다
4. 스택은 원칙적으로 상단 이외의 원소는 확인 불가능하다 
		- STL에서도 지원 x
		- 하지만, 배열로 구현을 한다면 확인 가능하게 만들 수 는 있다.

## #STL

	 # 멤버 함수
		- push(x)
		- pop()
		- top()
		- empty()
		- size()
		
ex) 
```
int x = 7;
Stack <int> S
S.push(x);
S.empty(); // 0
S.size(); // 1
S.top(); // 7
S.pop(); 

```

####  * *주의사항*

1. stack이 비어있을 때 pop() 사용시 Runtime Error
2. stack이 비어있을 때 top() 사용시 Runtime Error