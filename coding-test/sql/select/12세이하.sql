-- 조회, 전화번호가 없는 경우 'none' -> 결과는 나이 내림 차순

SELECT pt_name, pt_no, gend_cd, age, ifnull(tlno, 'NONE') from patient
where age<=12 and GEND_CD = 'W'
ORDER BY AGE DESC, PT_NAME ASC;