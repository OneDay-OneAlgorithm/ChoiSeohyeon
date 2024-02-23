-- 특정 열 count 계산 그룹을 만들고, having count(값) 기준
SELECT USER_ID, PRODUCT_ID from ONLINE_SALE
group by USER_ID, PRODUCT_ID
having count (USER_ID) >1
order by USER_ID asc, PRODUCT_ID desc