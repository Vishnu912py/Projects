#include <iostream>
using namespace std;
int main() {
    int a,b;
    int c,d;
    // Overlapping count only one
    cin >> a >> b;
    cin >> c >> d;
    int inter_f = b-a;
    int inter_cow = d-c;
    int intersection;
    if (inter_f > inter_cow){
        intersection = inter_f - inter_cow;
    }
    else{
        intersection = inter_cow - inter_f;
    }

    int total = inter_f + inter_cow - intersection;
    cout << total << endl;

    


    return 0;
}