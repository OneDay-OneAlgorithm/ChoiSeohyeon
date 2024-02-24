-- UNION은 여러 쿼리의 결과를 하나의 결과로 합치는 데 사용되며, 주로 열의 데이터를 결합합니다. 
-- JOIN은 두 개 이상의 테이블에서 관련 행을 결합하여 새로운 결과 테이블을 생성하는 데 사용되며, 주로 행의 데이터를 결합합니다.
-- NULL AS USER_ID 널로 출력

SELECT  date_format(SALES_DATE, '%Y-%m-%d') as SALES_DATE, PRODUCT_ID, USER_ID, SALES_AMOUNT from ONLINE_SALE
where SALES_DATE like ('2022-03%')
union
select date_format(SALES_DATE, '%Y-%m-%d') as SALES_DATE, PRODUCT_ID, NULL as USER_ID, SALES_AMOUNT from OFFLINE_SALE
where SALES_DATE like ('2022-03%')
order by SALES_DATE , PRODUCT_ID, USER_ID asc

