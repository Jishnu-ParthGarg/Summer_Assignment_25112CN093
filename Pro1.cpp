#include <bits/stdc++.h>
using namespace std;
struct Product
{
    int id;
    string name;
    int quantity;
    float price;
};
vector<Product> product;
void addProduct()
{
    Product p;
    cout<<"Enter Product ID: ";
    cin>>p.id;
    cout<<"Enter Product Name: ";
    cin>>p.name;
    cout<<"Enter Product Quantity: ";
    cin>>p.quantity;
    cout<<"Enter Product Price: ";
    cin>>p.price;
    product.push_back(p);
};
void viewProduct()
{
    if(product.empty())
    {
        cout<<"No products available."<<endl;
        return;
    }
    cout<<"\n========= INVENTORY =========\n";
    int count=1;
    for(const auto &p:product)
    {
        cout<<"\nProduct No: " <<count++<<endl;
        cout<<"-------------------"<<endl;
        cout<<"ID: " << p.id <<endl;
        cout<<"Name: " << p.name<<endl;
        cout<<"Quantity: "<<p.quantity<<endl;
        cout<<"Price: "<<p.price<<endl;
        cout<<"-------------------"<<endl;
    }
    cout<<"\nTotal Products: "<<product.size()<<endl;
}
void searchProduct()
{
    int searchId;
    cout<<"Enter Product ID: ";
    cin>>searchId;
    for(auto p:product)
    {
        if (p.id==searchId)
        {
            cout<<"-------------------"<<endl;
            cout<<"ID: "<<p.id<<endl;
            cout<<"Name: "<<p.name<<endl;
            cout<<"Quantity: "<<p.quantity<<endl;
            cout<<"Price: "<<p.price<<endl;
            cout<<"-------------------"<<endl;
            return;
        }
    }
    cout<<"Product Not Found";
};
void updateProduct()
{
    int searchid;
    cout<<"Enter the ID of Product to be Updated : ";
    cin>>searchid;
    for(auto &p : product)
    {
        if(p.id == searchid)
        {
            int choice;
            do
            {
                cout<< "\n====Product Found====\n";
                cout<<"-------------------"<<endl;
                cout<<"ID: "<<p.id<<endl;
                cout<<"Name: "<<p.name<<endl;
                cout<<"Quantity: "<<p.quantity<<endl;
                cout<<"Price: "<<p.price<<endl;
                cout<<"-------------------"<<endl;
                cout<<"\nWhat do you want to update?\n";
                cout<<"1. Name\n";
                cout<<"2. Quantity\n";
                cout<<"3. Price\n";
                cout<<"4. Exit Update Menu\n";
                cout<<"Enter choice: ";
                cin>>choice;
                switch(choice)
                {
                case 1:
                    cout<<"Enter new name: ";
                    cin>>p.name;
                    cout<<"Product Updated Successfully\n";
                    break;

                case 2:
                    cout<<"Enter new quantity: ";
                    cin>>p.quantity;
                    cout<<"Product Updated Successfully\n";
                    break;

                case 3:
                    cout<<"Enter new price: ";
                    cin>>p.price;
                    cout<<"Product Updated Successfully\n";
                    break;
                case 4:
                    cout<<"Update completed.\n";
                    break;
                default:
                    cout<<"Invalid choice.\n";
                }
            }while(choice!=4);
            return;
        }
    }
    cout<<"Product Not Found ";
};
void deleteProduct(){
    int deleteID;
    cout<<"Enter Product ID to delete: ";
    cin>>deleteID;
    for(int i=0;i<product.size();i++)
    {
        if(product[i].id==deleteID)
        {
            cout<<"\n====Product Found====\n";
            cout<<"-------------------"<<endl;
            cout<<"ID: "<<product[i].id<<endl;
            cout<<"Name: "<<product[i].name<<endl;
            cout<<"Quantity: "<<product[i].quantity<<endl;
            cout<<"Price: "<<product[i].price<<endl;
            cout<<"-------------------"<<endl;
            char choice;
            cout<<"Are you sure you want to delete this product? (y/n): ";
            cin>>choice;
            if(choice=='y'||choice=='Y')
            {
                product.erase(product.begin()+ i);
                cout<<"Product Deleted Successfully"<<endl;
            }
            else
            {
                cout<<"Deletion Cancelled"<<endl;
            }
            return;
        }
    }
    cout<<"Product Not Found"<<endl;
};
void saveProduct(){
    ofstream file("inventory.csv");

    if(!file)
    {
        cout<<"Error opening file."<<endl;
        return;
    }
    file<<"ID,Name,Quantity,Price\n";

    for(const auto &p:product)
    {
        file<<p.id<<","
            <<p.name<<","
            <<p.quantity<<","
            <<p.price<<"\n";
    }
    file.close();
    cout<<"Products saved successfully."<<endl;
}
void loadProduct()
{
    ifstream file("inventory.csv");
    if(!file)
    {
        cout<<"No saved inventory found."<<endl;
        return;
    }
    product.clear();
    string line;
    getline(file,line);
    while(getline(file, line))
    {
        stringstream ss(line);
        Product p;
        string temp;
        getline(ss,temp,',');
        p.id=stoi(temp);
        getline(ss,p.name,',');
        getline(ss,temp,',');
        p.quantity=stoi(temp);
        getline(ss,temp,',');
        p.price=stof(temp);
        product.push_back(p);
    }
    file.close();
    cout<<"Products loaded successfully."<<endl;
};
int main()
{
    loadProduct();
    int choice;
    do {
        cout<<"\n===== MENU =====\n";
        cout<<"1. Add Product\n";
        cout<<"2. View Product\n";
        cout<<"3. Search Product\n";
        cout<<"4. Update Product\n";
        cout<<"5. Delete Product\n";
        cout<<"6. Save Product\n";
        cout<<"7. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:addProduct();break;
            case 2:viewProduct();break;
            case 3:searchProduct();break;
            case 4:updateProduct();break;
            case 5:deleteProduct();break;
            case 6:saveProduct();break;
            case 7:saveProduct();break;
        }
    }while(choice!=7);
    return 0;
}