# method 1
UPDATE salary set sex = CASE sex WHEN 'm' THEN 'f' WHEN 'f' THEN 'm' END

# method 2
UPDATE salary
SET sex = CHAR(ASCII('f') + ASCII('m') - ASCII(`sex`));

# method 3
UPDATE salary SET sex = IF(sex='m','f','m');
