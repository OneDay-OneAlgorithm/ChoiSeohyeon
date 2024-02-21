-- join은 겹치는 열값 기준으로, FROM 기준 테이블 JOIN 합치는 테이블 USING(공통 값)
-- GROUP BY 절은 선택된 컬럼에 기반하여 행(row)들을 요약된 그룹으로 집계하는 데 사용됩니다. 
SELECT INGREDIENT_TYPE, SUM(TOTAL_ORDER) as TOTAL_ORDER 
from FIRST_HALF join ICECREAM_INFO using (FLAVOR)
group by INGREDIENT_TYPE
order by TOTAL_ORDER asc