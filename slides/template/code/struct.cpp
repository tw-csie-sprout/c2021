template<typename T1, typename T2>
struct pair {
    T1 first;
    T2 second;
};

int main(){
    pair<int, float> a;
    a.first = 5;
    a.second = 10.24;

    return 0;
}
