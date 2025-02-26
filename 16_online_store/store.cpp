#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <map>
#include <deque>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct Product{
    int productID;
    string name;
    string category;
};

struct Order{
    int ordeID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main(){
    vector<Product> Products = {
        {101, "Laptop", "Electronics"},
        {102, "SmartPhone", "Electronics"},
        {103, "Coffe Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk Lamp", "Home"}
    };

    deque<string> recentCustomers = {"A123","B123","C123"};

    recentCustomers.push_back("D123");
    recentCustomers.push_front("E123");

    list<Order> orederHistory;

    orederHistory.push_back({1, 101, 1, "A123", time(0) });
    orederHistory.push_back({2, 102, 5, "B123", time(0) });
    orederHistory.push_back({3, 103, 4, "C123", time(0) });

    set<string> categorys;
    for(const auto &Product : Products){
        categorys.inset(Product.category);
    }

    map<int,int>productStock = {
        {101, 10},
        {102, 30},
        {103, 12},
        {104, 32},
        {105, 22}
    };

    multimap<string, Order> CustomerOrders;

    for(const auto &Order : orederHistory){
        CustomerOrders.insert({Order.customerID, order});
    }

    unordered_map<string, string> customerData = {
        {"A123", "Rahul"},
        {"B123", "Mohit"},
        {"C123", "Sumit"},
        {"D123", "Harry"},
        {"E123", "Punit"}
    };

    unordered_set<int> uniqueProductIDs;

    for(const auto &Product : Products){
        uniqueProductIDs.insert(Product.productID);
    }



    return 0;
}