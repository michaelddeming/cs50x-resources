SELECT title, rating FROM movies JOIN ratings ON movies.id = ratings.movie_id WHERE year is 2010 and rating not NULL ORDER BY rating DESC, title ASC;
