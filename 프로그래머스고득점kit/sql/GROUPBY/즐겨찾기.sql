-- GROUP BY 후 그냥 MAX를 해버리면 이는 최대값이 아니라 테이블 최상단 값을 가져와서 서브쿼리로 최대 값을 따로 찾아준다 ! 
-- 서브쿼리란 다른 sql 쿼리 내부에 포함된 쿼리

SELECT FOOD_TYPE, REST_ID, REST_NAME, FAVORITES from REST_INFO
where(FOOD_TYPE, FAVORITES) in (select FOOD_TYPE, max(FAVORITES) from REST_INFO group by FOOD_TYPE)
order by FOOD_TYPE desc

