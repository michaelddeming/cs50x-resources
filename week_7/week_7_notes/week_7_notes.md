# Week 7: SQL #

- Flat-File Database: A simple type of database that stores data in a single table, typically in plain text or CSV format. Each line represents a records, and fields within each record are separated by a specific delimiter (like a comma or tab).
    - CSV: Comma Separated Values, that mimic a 2D array by separatig values (columns) with commas.

- dict.get(key, default): The .get method will return the value of the assoicated key input parameter. A default value can be provided if the key does not exist to avoid the KeyError, or None if no default is provided.

- Relational Database: A type of database that organiz
    - One-to-one: Every one object/record in one table is associated with exactly one record in another table, and vice versa.
        - Example: A TV show has a single averaged rating. 
    - One-to-many: Every one object/record in one table can be associated with more than one record in another table.
        - Example: A TV show can have multiple genres.
    - Many-to-many: Multiple records in one table can be associated with multiple records in another table.
        - Example: A TV show can have multiple stars and a star can be in multiple TV shows.

- SQL: Structured Quiery? Language
    - CRUD:
        1. C: Create, Insert
            - CREATE TABLE table (column type, ...);
            - INSERT INTO table (column, ...) VALUES(value, ...);
                - Example:
                `INSERT INTO favorites (language, problem) VALUES('SQL', 'Fiftyville')`
                    - NULL will be placed as the value for columns not given during the INSERT INTO
        2. R: Read
        3. U: Update
            - UPDATE table SET column = value WHERE condition;
                - Example:
                `UPDATE favorites SET language = 'SQL' , problem = 'Fiftyville';` --> update all language column values to 'SQL' and all problem column values to 'Fiftyville'.

        4. D: Delete, Drop
            - DELETE FROM table
                - Example:
                `DELETE FROM favorites WHERE Timestamp is NULL;`
    - CREATE TABLE table (column type, ...);
    - sqlite3: A lightweight version of SQL, that stores a physical file locally or remote.
        - `sqlite3 FILE.db` --> creates/opens a database file
        - `sqlite> .mode csv` --> change sqlite mode to csv mode
        - `sqlite> .import favorites.csv FILE`--> imports csv file and loads it into the database file. 
        - `sqlite> .quit` --> quits back to shell CLI
        - `sqlite> .schema` --> returns the design of the database
        - `sqlite> SELECT columns FROM table;` --> returns 
        - Keywords in SQL:
            - **DISTINCT**:
            - **GROUP BY**: Group a search by a specific column header or parameter.
                - Example: 
                    `SELECT language, COUNT(*) FROM favorites GROUP BY language;`
            - **LIKE**: Search for a value that is like another or has similar characters.
                - Example: 
                    `LIKE 'Hello, %'` --> the % is a placeholder for any other characters following the required search parameter of 'Hello, '
            - **LIMIT**: Limit the number of rows or values returned back to the user.
            - **ORDER BY**:
                - Example:
                1. Descending Order:
                `SELECT language, COUNT(*) FROM favorites GROUP BY language ORDER BY COUNT(*) DESC;`
                2. Ascending Order:
                `SELECT language, COUNT(*) FROM favorites GROUP BY language ORDER BY COUNT(*) ASC;`
            - **WHERE**:
            - **AS**: Provide an alias for a header or other data point, used for cleaning up, not directly needed.
            - **NULL**:
            - **NOT NULL**:
            - **UNIQUE**:
            - **PRIMARY KEY**:
            - **FOREIGN KEY**:
            - **JOIN**: Join 2 or more tables together. 
                - Example
                `SELECT title, rating FROM shows JOIN ratings ON shows.id = ratings.show_id WHERE rating >= 6.0 LIMIT 10;`
        - Datatypes:
        1. BLOB
        2. INTEGER
        3. NUMERIC
        4. REAL
        5. TEXT

        - Indexes: 
            B-trees
            - Example:
            `CREATE INDEX name ON table (column, ...);`

        - Transactions:
        1. BEGIN TRANSACTION
        2. COMMIT
        3. ROLLBACK




- IMDb: Internet Movie Database, a database of `.tsv` 

- Race Conditions: 

- SQL Injection Attacks:
