SELECT COUNT(*) AS number_of_movies
FROM movies
WHERE id IN (
    SELECT movie_id
    FROM ratings
    WHERE rating = 10.0
);
