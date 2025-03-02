SELECT name FROM songs WHERE artist_id is(SELECT id FROM artists WHERE name IS 'Post Malone');
