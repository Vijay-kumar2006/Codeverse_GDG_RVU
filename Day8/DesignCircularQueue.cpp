class MyCircularQueue {
    private:
        vector<int> data;
        int front, rear, size, capacity;
    
    public:
        MyCircularQueue(int k) {
            data.resize(k);
            capacity = k;
            front = 0;
            rear = 0;
            size = 0;
        }
        
        bool enQueue(int value) {
            if (isFull()) return false;
            data[rear] = value;
            rear = (rear + 1) % capacity;
            size++;
            return true;
        }
        
        bool deQueue() {
            if (isEmpty()) return false;
            front = (front + 1) % capacity;
            size--;
            return true;
        }
        
        int Front() {
            return isEmpty() ? -1 : data[front];
        }
        
        int Rear() {
            if (isEmpty()) return -1;
            int idx = (rear - 1 + capacity) % capacity;
            return data[idx];
        }
        
        bool isEmpty() {
            return size == 0;
        }
        
        bool isFull() {
            return size == capacity;
        }
    };
    