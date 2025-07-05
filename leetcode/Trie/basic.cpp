#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    TrieNode* children[26]; // For lowercase letters
    bool isEnd;

    TrieNode() {
        isEnd = false;
        for(int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};

class Trie {
private:
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }

    // Insert word into trie
    void insert(string word) {
        TrieNode* node = root;
        for(char c : word) {
            int i = c - 'a';
            if(!node->children[i])
                node->children[i] = new TrieNode();
            node = node->children[i];
        }
        node->isEnd = true;
    }

    // Search for exact word
    bool search(string word) {
        TrieNode* node = root;
        for(char c : word) {
            int i = c - 'a';
            if(!node->children[i])
                return false;
            node = node->children[i];
        }
        return node->isEnd;
    }

    // Check if any word starts with prefix
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for(char c : prefix) {
            int i = c - 'a';
            if(!node->children[i])
                return false;
            node = node->children[i];
        }
        return true;
    }
};
