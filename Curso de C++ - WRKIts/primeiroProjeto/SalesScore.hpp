#include <string>
using std::string;

class SalesScore {
    public:
        SalesScore(string title);
        void setStoreTitle(string title);
        string getStoreTitle();
        void bootSystem();
    
    private:
        string storeTitle;
};