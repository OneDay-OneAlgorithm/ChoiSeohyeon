-- 총 주문량 기준으로 내림차순, 총 주문량이 같다면 출하 번호를 기준으로 오름차순

SELECT FLAVOR from FIRST_HALF
order by TOTAL_ORDER desc, SHIPMENT_ID asc    