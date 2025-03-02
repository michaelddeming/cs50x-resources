-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Finding crime scene reports that occurred on the crime date and street.
SELECT * FROM crime_scene_reports WHERE year = 2024 AND month = 07 AND day = 28 AND street = 'Humphrey Street';

-- Access witness interview transcripts that contain information about the keyword 'bakery'
SELECT name, transcript FROM interviews WHERE transcript LIKE '%bakery%';

-- Get the account numbers from the atm on Leggett Street on the date of the crime for a withdraw transaction.
SELECT DISTINCT(account_number) FROM atm_transactions WHERE year = 2024 AND month = 07 AND day = 28 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw';

-- Get the person id of each account number from bank acount records.
SELECT person_id from bank_accounts WHERE account_number IN (SELECT DISTINCT(account_number) FROM atm_transactions WHERE year = 2024 AND month = 07 AND day = 28 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw');

-- Get the passport numbers for each person id from each bank acount
SELECT passport_number from people WHERE id IN (SELECT person_id from bank_accounts WHERE account_number IN (SELECT DISTINCT(account_number) FROM atm_transactions WHERE year = 2024 AND month = 07 AND day = 28 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw'));

-- Get passport_numbers for the earliest flight the day after the crime that had passengers with a passport that also withdrew money from an atm on 'Leggett Street' on the day of the crime, who was spotted by a witness.
SELECT passport_number from passengers JOIN flights ON passengers.flight_id = flights.id WHERE flights.day = 29 AND flights.hour = (SELECT MIN(hour) from flights WHERE year = 2024 AND month = 07 AND day = 29) AND passport_number IN (SELECT passport_number from people WHERE id IN (SELECT person_id from bank_accounts WHERE account_number IN (SELECT DISTINCT(account_number) FROM atm_transactions WHERE year = 2024 AND month = 07 AND day = 28 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw')));

-- license plate of the top suspects
SELECT license_plate FROM people WHERE passport_number IN (SELECT passport_number from passengers JOIN flights ON passengers.flight_id = flights.id WHERE flights.day = 29 AND flights.hour = (SELECT MIN(hour) from flights WHERE year = 2024 AND month = 07 AND day = 29) AND passport_number IN (SELECT passport_number from people WHERE id IN (SELECT person_id from bank_accounts WHERE account_number IN (SELECT DISTINCT(account_number) FROM atm_transactions WHERE year = 2024 AND month = 07 AND day = 28 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw'))));

-- license plate of the top suspects that were at the scene of the crime
SELECT license_plate FROM bakery_security_logs WHERE year = 2024 AND month = 07 AND day = 28 AND hour = 10 AND minute > 15 AND minute < 30 AND license_plate IN (SELECT license_plate FROM people WHERE passport_number IN (SELECT passport_number from passengers JOIN flights ON passengers.flight_id = flights.id WHERE flights.day = 29 AND flights.hour = (SELECT MIN(hour) from flights WHERE year = 2024 AND month = 07 AND day = 29) AND passport_number IN (SELECT passport_number from people WHERE id IN (SELECT person_id from bank_accounts WHERE account_number IN (SELECT DISTINCT(account_number) FROM atm_transactions WHERE year = 2024 AND month = 07 AND day = 28 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw')))));

-- phone number of top suspects at the scene of the crime
SELECT phone_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE year = 2024 AND month = 07 AND day = 28 AND hour = 10 AND minute > 15 AND minute < 30 AND license_plate IN (SELECT license_plate FROM people WHERE passport_number IN (SELECT passport_number from passengers JOIN flights ON passengers.flight_id = flights.id WHERE flights.day = 29 AND flights.hour = (SELECT MIN(hour) from flights WHERE year = 2024 AND month = 07 AND day = 29) AND passport_number IN (SELECT passport_number from people WHERE id IN (SELECT person_id from bank_accounts WHERE account_number IN (SELECT DISTINCT(account_number) FROM atm_transactions WHERE year = 2024 AND month = 07 AND day = 28 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw'))))));

-- Get phone call for call less than 60 seconds long and on day of crime at crime scene
SELECT caller, receiver FROM phone_calls WHERE year = 2024 AND month = 07 AND day = 28 AND duration < 60 AND caller IN (SELECT phone_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE year = 2024 AND month = 07 AND day = 28 AND hour = 10 AND minute > 15 AND minute < 30 AND license_plate IN (SELECT license_plate FROM people WHERE passport_number IN (SELECT passport_number from passengers JOIN flights ON passengers.flight_id = flights.id WHERE flights.day = 29 AND flights.hour = (SELECT MIN(hour) from flights WHERE year = 2024 AND month = 07 AND day = 29) AND passport_number IN (SELECT passport_number from people WHERE id IN (SELECT person_id from bank_accounts WHERE account_number IN (SELECT DISTINCT(account_number) FROM atm_transactions WHERE year = 2024 AND month = 07 AND day = 28 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw')))))));

-- THE THIEF
SELECT * FROM people WHERE phone_number IN (SELECT caller FROM phone_calls WHERE year = 2024 AND month = 07 AND day = 28 AND duration < 60 AND caller IN (SELECT phone_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE year = 2024 AND month = 07 AND day = 28 AND hour = 10 AND minute > 15 AND minute < 30 AND license_plate IN (SELECT license_plate FROM people WHERE passport_number IN (SELECT passport_number from passengers JOIN flights ON passengers.flight_id = flights.id WHERE flights.day = 29 AND flights.hour = (SELECT MIN(hour) from flights WHERE year = 2024 AND month = 07 AND day = 29) AND passport_number IN (SELECT passport_number from people WHERE id IN (SELECT person_id from bank_accounts WHERE account_number IN (SELECT DISTINCT(account_number) FROM atm_transactions WHERE year = 2024 AND month = 07 AND day = 28 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw'))))))));

-- THE ACCOMPLICE
SELECT * FROM people WHERE phone_number IN (SELECT receiver FROM phone_calls WHERE year = 2024 AND month = 07 AND day = 28 AND duration < 60 AND caller IN (SELECT phone_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE year = 2024 AND month = 07 AND day = 28 AND hour = 10 AND minute > 15 AND minute < 30 AND license_plate IN (SELECT license_plate FROM people WHERE passport_number IN (SELECT passport_number from passengers JOIN flights ON passengers.flight_id = flights.id WHERE flights.day = 29 AND flights.hour = (SELECT MIN(hour) from flights WHERE year = 2024 AND month = 07 AND day = 29) AND passport_number IN (SELECT passport_number from people WHERE id IN (SELECT person_id from bank_accounts WHERE account_number IN (SELECT DISTINCT(account_number) FROM atm_transactions WHERE year = 2024 AND month = 07 AND day = 28 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw'))))))));

-- Destination of Thief Flight
SELECT * FROM airports WHERE id = (SELECT destination_airport_id from flights where id = (SELECT flight_id from passengers WHERE passport_number = (SELECT passport_number FROM people WHERE name = 'Bruce')));submit50 cs50/problems/2025/x/fiftyville

