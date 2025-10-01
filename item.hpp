#define item

struct _item;
typedef struct _item Item;
void add_item(Item *item_list, double price, const char *sku, const char *category, const char *name, int index);
void free_items(Item *item_list, int size);
double Average_price(Item *item_list, int size);
void print_items(Item *item_list, int size);

