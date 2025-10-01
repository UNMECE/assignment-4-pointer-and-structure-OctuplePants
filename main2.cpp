#include<iostream>
#include<cstdlib>
#include<cstring>
#include"item.hpp"



using namespace std;


struct _item
{
    double price;
    char *sku;
    char *name;
    char *category;
};


typedef struct _item Item;

int main(int argc, char* argv[])
{

    Item *items = (Item*)calloc(5, sizeof(Item));

    const char *sku = argv[2];


    int count = 0;
    int size = 5;

    //void add_item(Item *item_list, double price, char *sku, char *category, char *name, int index)

    add_item(items, 13.99,"450","Food","Pizza",0);
    add_item(items, 130.99,"699","Sports","Bike",1);
    add_item(items, 15.99,"500","Clothing","T-shirt",2);
    add_item(items, 10.99,"502","Tools","Hammer",3);
    add_item(items, 7.99,"496","Pharmacy","Ibuprofen",4);

    while(count < size && strcmp(items[count].sku, sku) != 0){
        count++;
    }

    if(count < size)
        print_items(items, count);
    else 
        cout<<"Item Not Found"<<endl;


   // print_items(items,5);

    //free_items(items,5);

    return 0;









}