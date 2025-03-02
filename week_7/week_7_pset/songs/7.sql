SELECT AVG(energy) AS 'AVG ENERGY' FROM songs WHERE artist_id is (SELECT id FROM artists WHERE name IS 'Drake');
