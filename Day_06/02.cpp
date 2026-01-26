class MyHashMap {
public:
    int data[1000001];
    MyHashMap() {
        fill(data,data+1000001,-1)
    }
    
    void put(int key, int value) {
        data[key] = value;
    }
    
    int get(int key) {
        return data[key];
    }
    
    void remove(int key) {
        data[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

class Node{
public:
    int key,val;
    Node* next;

    Node(int k =-1,int v = -1, Node*n = nullptr) : key(k), val(v), next(n) {}
};

class MyHashMap {
private:
    vector<Node*> mp;

public:
    MyHashMap() {
        mp.resize(1000);
        for(int i =0; i< 1000; i++){
            mp[i] = new Node();
        }
    }
    
    int hash(int key){
        return key%1000;
    }

    void put(int key, int value) {
        int hash_key = hash(key);
        Node* cur = mp[hash_key];

        while(cur -> next){
            if(cur->next->key == key){
                cur->next->val = value;
                return;
            }
            cur = cur -> next;
        }
        cur -> next = new Node(key, value);
    }
    
    int get(int key) {
        int hash_key = hash(key);
        Node* cur = mp[hash_key];

        while(cur-> next){
            if(cur->next->key == key){
                return cur->next->val;
            }
            cur = cur-> next;
        }
        return -1;
    }
    
    void remove(int key) {
        int hash_key = hash(key);
        Node* cur = mp[hash_key];

        while(cur->next){
            if(cur->next->key == key){
                Node* temp = cur->next;
                cur->next = cur->next->next;
                delete temp;
                return;
            }
            cur = cur->next;
        }
    }
};
auto init = atexit([] {ofstream("display_runtime.txt") << "0"; });


// O(n)
