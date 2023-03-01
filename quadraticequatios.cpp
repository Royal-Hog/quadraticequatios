#include<fstream>
#include<iostream>
using namespace std;
double a, b, c,d,r1, r2;
void openfile(string adress) {
    ifstream fin(adress);
    fin >> a >> b >> c;
    fin.close();
}
void closefile(string adress) {
    ofstream fout(adress);
    if (d < 0) {
        fout << "вещественных корней нет";
    }
    else {

        fout << r1 << ' ' << r2;
    }
    fout.close();

}
double discriminant() {
    return  b * b - 4 * a * c;
}void roots() {
    r1 = (-b + sqrt(d)) / 2;
    r2 = (-b - sqrt(d)) / 2;
}
int main()
{
    openfile("input.txt");
    d = discriminant();
    roots();
    closefile("output.txt");
 
}