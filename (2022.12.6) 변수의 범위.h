#pragma once
#include <stdio.h>

// 전역 변수란?
// 함수의 외부에서 선언된 변수로 프로그램 어디에서든지 접근이 가능하며,
// 프로그램이 종료되어야만, 메모리에서 사라지는 특징을 가지고 있습니다.
int variable;

// 전역 변수는 값을 초기화하지 않으면 0이라는 값으로 저장되게 됩니다.

void Function(int parameter)
{
	variable = 10;
	parameter = 20;
	int x = 10;
}

// 정적 변수란?
// 지역 변수와 전역 변수의 특징 모두 가지고 있으며, 프로그램이 종료될 때까지
// 메모리에 남아있습니다.

void Packet()
{
	// 정적 변수를 최초로 초기화할 때 단 한번 실행됩니다.
	static int signal = 0; // ㅂㅂ~

	signal += 1;

	printf("signal의 값 : %d\n", signal);

	variable = 30;
}

int main()
{
	// 메모리 구조
	/*
	// 코드 영역
	// 실행할 프로그램의 코드가 저장되는 영역으로
	// CPU는 코드 영역에서 저장된 명령어를 하나씩
	// 가져가서 처리하게 되는 구조입니다.

	// 데이터 영역
	// 프로그램의 전역 변수와 정적 변수가 저장되는
	// 영역입니다.

	// 데이터 영역은 프로그램의 시작과 함께 메모리에
	// 할당되며, 프로그램이 종료되어야만, 메모리에서
	// 사라지는 특징을 가지고 있습니다.

	// 스택 영역
	// 함수의 호출과 관계되는 지역 변수와 매개변수가
	// 저장되는 영역입니다.

	// 스택 영역은 함수의 호출과 함께 메모리에 할당되며,
	// 함수의 호출이 끝나면 메모리에서 사라지는 특성을
	// 가지고 있습니다.

	// 힙 영역
	// 사용자가 직접 관리할 수 있는 메모리 영역입니다.

	// 힙 영역은 사용자에 의해서 메모리가 동적으로 할당되고,
	// 사용자가 직접 메모리를 해제해야 합니다.
	*/

	// 지역 변수란?
	/*
	// 블록 내에서 선언된 변수를 의미하며, 지역 변수는
	// 블록 내에서만 유효하며, 블록이 종료되면 메모리에서
	// 사라집니다.

	int value = 10;

	{
		// 같은 이름의 변수가 있을 때 { } 내에 있는
		// 변수가 지정됩니다.
		int value = 20;
		printf("value의 값 : %d\n", value);
	}

	printf("value의 값 : %d\n", value);
	*/

	printf("variable 변수의 값 : %d\n", variable);
	printf("variable 변수의 주소 : %p\n", &variable);

	Packet();
	Packet();
	return 0;
}
