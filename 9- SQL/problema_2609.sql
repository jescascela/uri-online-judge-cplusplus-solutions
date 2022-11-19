SELECT c.name, SUM(p.amount)
FROM categories c
INNER JOIN products p ON p.id_categories = c.id
GROUP BY c.name