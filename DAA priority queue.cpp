#include <iostream>
#include <vector>
#include <utility> // for pair

using namespace std;

class PriorityQueue {
private:
    vector<pair<int, int>> queue; // Each pair represents <number, priority>

public:
    // Function to insert a number with its priority into the priority queue
    void insert(int number, int priority) {
        queue.push_back(make_pair(number, priority));
    }

    // Function to delete the number with the highest priority from the priority queue
    pair<int, int> deleteMaxPriority() {
        if (queue.empty()) {
            cout << "Priority queue is empty." << endl;
            return make_pair(-1, -1);
        }

        // Find the number with the highest priority
        int maxPriority = queue[0].second;
        int maxIndex = 0;
        for (int i = 1; i < queue.size(); ++i) {
            if (queue[i].second > maxPriority) {
                maxPriority = queue[i].second;
                maxIndex = i;
            }
        }

        // Remove and return the number with the highest priority
        pair<int, int> removedNumber = queue[maxIndex];
        queue.erase(queue.begin() + maxIndex);
        return removedNumber;
    }

    // Function to print the contents of the priority queue
    void printQueue() {
        if (queue.empty()) {
            cout << "Priority queue is empty." << endl;
            return;
        }

        cout << "Current priority queue:" << endl;
        for (const auto& number : queue) {
            cout << "Number: " << number.first << ", Priority: " << number.second << endl;
        }
    }
};

int main() {
    PriorityQueue priorityQueue;

    // Interactive loop
    while (true) {
        cout << "\nChoose an option:" << endl;
        cout << "1. Insert a number" << endl;
        cout << "2. Delete a number with highest priority" << endl;
        cout << "3. Print queue" << endl;
        cout << "4. Exit" << endl;

        int choice;
        cout << "Enter your choice (1/2/3/4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int number, priority;
                cout << "Enter the number: ";
                cin >> number;
                cout << "Enter the priority of the number: ";
                cin >> priority;
                priorityQueue.insert(number, priority);
                cout << "Number '" << number << "' with priority " << priority << " inserted." << endl;
                break;
            }
            case 2: {
                pair<int, int> removedNumber = priorityQueue.deleteMaxPriority();
                if (removedNumber.second != -1)
                    cout << "Number '" << removedNumber.first << "' with priority " << removedNumber.second << " deleted." << endl;
                break;
            }
            case 3:
                priorityQueue.printQueue();
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter 1, 2, 3, or 4." << endl;
        }
    }

    return 0;
}

