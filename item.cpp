#include<iostream>
#include<cstdlib>
#include<cstring>



using namespace std;


struct _item
{
    double price;
    char *sku;
    char *name;
    char *category;
};


typedef struct _item Item;

void add_item(Item *item_list, double price, const char *sku, const char *category, const char *name, int index)
{
    int length;

    item_list[index].price = price;

    length = strlen(sku) + 1;
    item_list[index].sku = (char*)calloc(length, sizeof(char));
    strcpy(item_list[index].sku, sku);

    length = strlen(category) + 1;
    item_list[index].category = (char*)calloc(length, sizeof(char));
    strcpy(item_list[index].category, category);

    
    length = strlen(name) + 1;
    item_list[index].name = (char*)calloc(length, sizeof(char));
    strcpy(item_list[index].name, name);



}

void free_items(Item *item_list, int size)
{
    for (int i = 0; i < size; ++i)
    {
        free(item_list[i].sku);
        item_list[i].sku = NULL;

        free(item_list[i].name);
        item_list[i].name = NULL;
        
        free(item_list[i].category);
        item_list[i].category = NULL;

        

    }
    free(item_list);
}

double Average_price(Item *item_list, int size)
{
    double temp = 0, avG;

    for(int i = 0; i < size; i++)
    {
        temp += item_list[i].price;
    }

    avG = temp / size;

    return(avG);


    
}

void print_items(Item *item_list, int size)
{
    if(size == 5)
    {

        for(int i = 0; i < size; i++)
        {
            cout<<"###############"<<endl;
            cout<<"Item name = "<<item_list[i].name<<endl;
            cout<<"Item sku = "<<item_list[i].sku<<endl;
            cout<<"Item category = "<<item_list[i].category<<endl;
            cout<<"Item price = "<<item_list[i].price<<endl;
        }

        cout<<"Average price of items = "<<Average_price(item_list, size)<<endl;
    }
    else
    {
        cout<<"###############"<<endl;
        cout<<"Item name = "<<item_list[size].name<<endl;
        cout<<"Item sku = "<<item_list[size].sku<<endl;
        cout<<"Item category = "<<item_list[size].category<<endl;
        cout<<"Item price = "<<item_list[size].price<<endl;
    }

}
