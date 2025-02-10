// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>


#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

// Dict word count
unsigned int dict_word_count = 0;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    if (!word)
    {
        return false;
    }
    unsigned int hash_num = hash(word);
    node *dict_node = table[hash_num];


    while (dict_node != NULL)
    {
        if (strcasecmp(word, dict_node->word) == 0)
        {
            return true;
        }
        dict_node = dict_node->next;
    }

    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO

    for (int i = 0; i < N; i++)
    {
        table[i] = NULL;
    }

    // Open the dictionary file
    FILE *input = fopen(dictionary, "r");
    if (input == NULL)
    {
        return false;
    }

    // Read each word in the file
    char buffer[LENGTH + 1];
    while (fscanf(input, "%s", buffer) != EOF)
    {


        node *new_node = malloc(sizeof(node));
        if (new_node == NULL)
        {
            return false;
        }
        strcpy(new_node->word, buffer);
        new_node->next = NULL;

        // Add each word to the hash table
        unsigned int hash_num = hash(buffer);

        new_node->next = table[hash_num];
        table[hash_num] = new_node;

        dict_word_count++;
    }
    // Close the dictionary file
    fclose(input);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return dict_word_count;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    for (int i = 0; i < N; i++)
    {
        node *dict_node = table[i];
        while (dict_node != NULL)
        {
            node *temp = dict_node;

            dict_node = temp->next;
            free(temp);
        }

    }
    return true;
}
