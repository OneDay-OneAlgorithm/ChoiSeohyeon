SELECT ANIMAL_TYPE, count(*) as count from ANIMAL_INS
group by ANIMAL_TYPE
order by ANIMAL_TYPE

-- WHERE IN 구문은 특정 컬럼의 값이 주어진 값 리스트 중 하나와 일치하는 행을 찾기 위해 사용
-- SELECT *
-- FROM employees
-- WHERE employee_id IN (1, 2, 3);
