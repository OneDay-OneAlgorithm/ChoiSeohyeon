-- DISTINCT
SELECT count(DISTINCT NAME) as count from ANIMAL_INS
where NAME is not NULL