SELECT CATEGORY, PRICE as MAX_PRICE, PRODUCT_NAME from FOOD_PRODUCT
where CATEGORY in ('과자', '국', '김치', '식용유')
and PRICE in (SELECT max(PRICE) over (partition by CATEGORY) from FOOD_PRODUCT)
order by MAX_PRICE desc