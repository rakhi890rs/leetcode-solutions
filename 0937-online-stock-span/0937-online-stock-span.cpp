class StockSpanner {
public:
 vector<int> prices;
        stack<int> s;
    StockSpanner() {
        // vector<int> prices;
        // stack<int> s;
    }
    int next(int price) {
        prices.push_back(price);
        int i=prices.size()-1;
        while(!s.empty()&& prices[s.top()]<=price){
            s.pop();
        }
        int span;
        if(s.empty()){
            span=i+1;
        }else{
            span=i-s.top();
        }
        s.push(i);
        return span;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */