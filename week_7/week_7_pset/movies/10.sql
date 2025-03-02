SELECT DISTINCT(name) FROM people WHERE id IN (SELECT person_id from directors WHERE movie_id IN (SELECT movie_id from ratings WHERE rating >= 9.0));
