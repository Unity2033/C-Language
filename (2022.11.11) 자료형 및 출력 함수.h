#pragma once
#include <stdio.h>
// #include -> 헤더파일을 포함해주는 명령문입니다.
// <stdio.h> -> 기본 입출력 헤더파일

void main()
{
    // ​표준 출력 함수(printf)란 ?
    /*
    일련의 데이터를 형식 문자열에 지정되어 있는 형태로 출력하는 함수입니다.

    printf 함수로 출려하려면 문자열 형태로 출력해야 합니다.
    printf ( ) 안에 문자열을 입력하려면 " "를 통해서 입력해야 합니다.

    ;(세미콜론) : 한 문장의 끝을 알려주는 기호입니다.
    printf("Hello");
    */

    // 변수
    // 데이터를 저장할 수 있는 메모리 공간을 생성하는 것입니다.

    char blood = 'A';

    // 변수에 값을 저장하려면 "="(대입 연산자)를 통해 값을 저장할 수 있습니다.

    // 대입 연산자란?
    // 변수에 값 또는 객체를 저장할 수 있는 연산자입니다.

    // 변수의 초기화란?
    // 최초로 변수에 값을 저장해주는 과정입니다.
    int attack = 10;

    float health = 300.25;

    // 서식 지정자
    // 출력하기 위한 자료형의 정보를 명시적으로 지정해주는 것입니다.
    // %d : 정수를 출력하기 위한 서식 지정자입니다.
    // %c : 문자를 출력하기 위한 서식 지정자입니다.
    // %f : 실수를 출력하기 위한 서식 지정자입니다.

    // \n : 개행문자

    printf("%c\n", blood);   // A10
    printf("%d\n", attack);  // 10
    printf("%f\n", health);  // 300.25

    // 자료형
    // 데이터를 저장하기 위해 데이터의 형태를 정해주는 것입니다.

    // (문자) char <- 1 byte 크기를 가지고 있으며 하나의 문자를 저장할 수 있는 자료형
    // (정수) short <- 2 byte 크기를 가지고 있으며 정수를 저장할 수 있는 자료형
    // (정수) int <- 4 byte 크기를 가지고 있으며 정수를 저장할 수 있는 자료형
    // (정수) long <- 4 byte 크기를 가지고 있으며 정수를 저장할 수 있는 자료형
    // (실수) float <- 4 byte 크기를 가지고 있으며 실수를 저장할 수 있는 자료형
    // (실수) double <- 8 byte 크기를 가지고 있으며 실수를 저장할 수 있는 자료형
}
