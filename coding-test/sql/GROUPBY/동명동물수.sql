-- group by, having count, is not null
SELECT NAME, count(*) as COUNT from ANIMAL_INS
where NAME is not NULL
group by NAME
having count (*) >=2
order by NAME;