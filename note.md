## 속도 줄이기

ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

## 기본 템플릿

#include <iostream>

using namespace std;

int main(){
ios::sync_with_stdio();
cin.tie();

    return 0;

}

## [c++] 문자열 입력이 끝날 때까지 입력 받기

while (cin >> n)

## sss알고 템플릿

| Date |         #         |  Problem  | Algorithm |
| :--: | :---------------: | :-------: | :-------: |
| 날짜 | [문제 번호](링크) | 문제 제목 |

## 나머지

'/' 연산자는 몫을 반환하고, '%' 연산자는 나머지를 반환

## pow

cmath 헤더 파일에 포함된 pow 함수는 거듭제곱 연산을 수행,
pow는 기본적으로 double이기 때문에 (int) 변환 해줘야 함.

## dfs

방문 여부

## sql

- ifnull(tlno, 'NONE') : 없는 경우 NONE으로 출력
- order by TOTAL_ORDER desc, SHIPMENT_ID asc : TOTAL_ORDER로 내름차순, 같은 경우 SHIPMENT_ID 오름차순
- group by : 특정 그룹을 만들고, having count(값) 기준 : 값 기준
- UNION은 여러 쿼리의 결과를 하나의 결과로 합치는 데 사용되며, 주로 열의 데이터를 결합합니다.
- JOIN은 두 개 이상의 테이블에서 관련 행을 결합하여 새로운 결과 테이블을 생성하는 데 사용되며, 주로 행의 데이터를 결합합니다.
- NULL AS USER_ID 널로 출력
- date_format(값, 포맷) as 원하는 값 : ex. date_format(HIRE_YMD, "%Y-%m-%d") as HIRE_YMD
